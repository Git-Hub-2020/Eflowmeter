#include <string.h>
#include "common.h"
#include "lcd_menu.h"
#include "lcd_sub_menu.h"
#include "lcd_menu_type.h"
#include "lcd_draw.h"
#include "lcd_setup.h"

extern uint8_t Init_Frame;
extern BOOL Warning_Disp_Flag;

static uint8_t lcd_menu_id = MENU_L0_INIT;
static uint8_t lcd_menu_level = MENU_LEVEL_0;
static CursorSts_t lcd_cursor_sts = CURSOR_INVALID;

static DisplayReq_t LCD_Menu_Key_L0(MenuKey_t key);
static DisplayReq_t LCD_Menu_Key_L1(MenuKey_t key);
static DisplayReq_t LCD_Menu_Key_L2(MenuKey_t key);
static DisplayReq_t LCD_Menu_Key_L3(MenuKey_t key);
static DisplayReq_t LCD_Menu_Key_L4(MenuKey_t key);
static void LCD_Menu_CursorPosGet(CursorSts_t sts, uint8_t *x, uint8_t *y);
static BOOL LCD_Password_Check(uint8_t *pw);

void LCD_Menu_Init(void)
{
	LCD_Draw_Init();
	LCD_Menu_SetLevel(MENU_LEVEL_0);
	LCD_Menu_SetID(MENU_L0_INIT);
	LCD_Cursor_StatusSet(CURSOR_INVALID);
	LCD_Sub_Menu_Init();
}

DisplayReq_t LCD_Menu_Key_Response(MenuKey_t key)
{
	DisplayReq_t disp_req = REQ_OFF;

	static const MenuFunc Menu_Level[] =
	{
		LCD_Menu_Key_L0,
		LCD_Menu_Key_L1,
		LCD_Menu_Key_L2,
		LCD_Menu_Key_L3,
		LCD_Menu_Key_L4
	};

	if(LCD_Menu_GetLevel() < numof(Menu_Level)){
		disp_req = Menu_Level[LCD_Menu_GetLevel()](key);
	}

	return disp_req;
}

static DisplayReq_t LCD_Menu_Key_L0(MenuKey_t key)
{
	DisplayReq_t disp_req = REQ_ON;

	switch(key)
	{
	case MENU_KEY_UNITCONFIRM:
		LCD_AutoMeasure_Transfer(REQ_OFF);
		break;
	default:
		disp_req = REQ_OFF;
		break;
	}

	return disp_req;
}

static DisplayReq_t LCD_Menu_Key_L1(MenuKey_t key)
{
	DisplayReq_t disp_req = REQ_ON;
	uint8_t menu = LCD_Menu_GetID();

	switch(key)
	{
	case MENU_KEY_DOWN:
		if(menu == MENU_L1_PARAMSET)
		{
			menu = MENU_L1_MAX;
		}
		menu--;
		LCD_Menu_SetID(menu);
		break;
	case MENU_KEY_UP:
		menu++;
		if(menu == MENU_L1_MAX)
		{
			menu = MENU_L1_PARAMSET;
		}
		LCD_Menu_SetID(menu);
		break;
	case MENU_KEY_CONFIRM:
		switch(menu)
		{
			case MENU_L1_PARAMSET:
				menu = MENU_L4_00;
				memset(&PWInfo, 0, sizeof(PWInfo));
				break;
			case MENU_L1_TOTALCLR:
				menu = MENU_L4_01;
				memset(&PWInfo, 0, sizeof(PWInfo));
				break;
			default:
				break;
		}
		LCD_Menu_SetID(menu);
		LCD_Menu_SetLevel(MENU_LEVEL_4);
		LCD_Cursor_StatusSet(CURSOR_VALID);
		break;
	case MENU_KEY_LONGCONFIRM:
		LCD_AutoMeasure_Transfer(REQ_ON);
		break;
	default:
		disp_req = REQ_OFF;
		break;
	}

	return disp_req;
}

static DisplayReq_t LCD_Menu_Key_L2(MenuKey_t key)
{
	DisplayReq_t disp_req = REQ_ON;
	uint8_t menu = LCD_Menu_GetID();

	switch(key)
	{
	case MENU_KEY_DOWN:
		if(menu == MENU_L2_PARAMSET00)
		{
			menu = MENU_L2_MAX;
		}
		menu--;
		LCD_Menu_SetID(menu);
		break;
	case MENU_KEY_UP:
		menu++;
		if(menu == MENU_L2_MAX)
		{
			menu = MENU_L2_PARAMSET00;
		}
		LCD_Menu_SetID(menu);
		break;
	case MENU_KEY_CONFIRM:
		LCD_Menu_SetLevel(MENU_LEVEL_3);
		switch(menu)
		{
			case MENU_L2_PARAMSET00:
				if(LANG_ZH == lcd_Language){
					menu = MENU_L3_00;
				}
				else{
					menu = MENU_L3_01;
				}
				LCD_Cursor_StatusSet(CURSOR_FREEZE);
				break;
			case MENU_L2_PARAMSET01:
				menu = MENU_L3_02;
				(Menu_level3_list[lcd_Language])[menu].pstr[0].pstr = Menu_Number_Tbl[lcd_Commaddr.addr[0]];
				(Menu_level3_list[lcd_Language])[menu].pstr[1].pstr = Menu_Number_Tbl[lcd_Commaddr.addr[1]];
				lcd_Commaddr.pos = 0;
				LCD_Cursor_StatusSet(CURSOR_VALID);
				break;
			case MENU_L2_PARAMSET24:
				menu = MENU_L4_02;
				LCD_Menu_SetLevel(MENU_LEVEL_4);
				memset(&PWInfo, 0, sizeof(PWInfo));
				LCD_Cursor_StatusSet(CURSOR_VALID);
				break;
			default:
				break;
		}
		LCD_Menu_SetID(menu);
		break;
	case MENU_KEY_LONGCONFIRM:
		LCD_AutoMeasure_Transfer(REQ_ON);
		break;
	default:
		disp_req = REQ_OFF;
		break;
	}

	return disp_req;
}

static DisplayReq_t LCD_Menu_Key_L3(MenuKey_t key)
{
	DisplayReq_t disp_req = REQ_ON;

	if(MENU_KEY_CONFIRM == key){
		LCD_Menu_SetLevel(MENU_LEVEL_2);
		LCD_Cursor_StatusSet(CURSOR_FREEZE);
	}
	else if(MENU_KEY_LONGCONFIRM == key){
		LCD_AutoMeasure_Transfer(REQ_ON);
		return REQ_ON;
	}

	disp_req = LCD_Sub_Menu_L3(LCD_Menu_GetID(), key);

	return disp_req;
}

static DisplayReq_t LCD_Menu_Key_L4(MenuKey_t key)
{
	DisplayReq_t disp_req = REQ_ON;
	uint8_t menu = LCD_Menu_GetID();

	switch(key)
	{
		case MENU_KEY_DOWN:
			if(0 == PWInfo.pw[PWInfo.pos]){
				PWInfo.pw[PWInfo.pos] = 10;
			}
			PWInfo.pw[PWInfo.pos]--;
			break;
		case MENU_KEY_UP:
			PWInfo.pw[PWInfo.pos]++;
			if(10 <= PWInfo.pw[PWInfo.pos]){
				PWInfo.pw[PWInfo.pos] = 0;
			}
			break;
		case MENU_KEY_CONFIRM:
			if(MENU_L4_00 == menu){
				if(TRUE == LCD_Password_Check(PWInfo.pw)){
					LCD_Menu_SetLevel(MENU_LEVEL_2);
					LCD_Menu_SetID(MENU_L2_PARAMSET00);
					LCD_Cursor_StatusSet(CURSOR_FREEZE);
				}
			}
			else if(MENU_L4_01 == menu){
				if(TRUE == LCD_Password_Check(PWInfo.pw)){
					LCD_Menu_SetID(menu);
					LCD_Cursor_StatusSet(CURSOR_VALID);
					memset(&PWInfo, 0, sizeof(PWInfo));
				}
				else{
					LCD_Menu_SetLevel(MENU_LEVEL_0);
					LCD_Menu_SetID(MENU_L0_AUTOMEASURE);
					LCD_Cursor_StatusSet(CURSOR_INVALID);
				}
			}
			else if(MENU_L4_02 == menu){
				Lcd_Set_Password(PWInfo.pw, numof(PWInfo.pw));
				LCD_Menu_SetLevel(MENU_LEVEL_2);
				LCD_Menu_SetID(MENU_L2_PARAMSET24);
				LCD_Cursor_StatusSet(CURSOR_FREEZE);
			}
			break;
		case MENU_KEY_UNITDOWN:
			if(0 == PWInfo.pos){
				PWInfo.pos = numof(PWInfo.pw);
			}
			PWInfo.pos--;
			LCD_Cursor_StatusSet(CURSOR_LEFT);
			break;
		case MENU_KEY_UNITUP:
			PWInfo.pos++;
			if(numof(PWInfo.pw) <= PWInfo.pos){
				PWInfo.pos = 0;
			}
			LCD_Cursor_StatusSet(CURSOR_RIGHT);
			break;
		case MENU_KEY_LONGCONFIRM:
			LCD_AutoMeasure_Transfer(REQ_ON);
			break;
		default:
			disp_req = REQ_OFF;
			break;
	}

	return disp_req;
}

void LCD_Screen_Draw(void)
{
	uint8_t level = LCD_Menu_GetLevel();
	uint8_t i = 0, menu = LCD_Menu_GetID();
	MenuList_t *list;

	clealddram(); //全画面清空

	switch(level)
	{
		case MENU_LEVEL_0:
			list = &(Menu_level0_list[lcd_Language])[menu];
			break;
		case MENU_LEVEL_1:
			list = &(Menu_level1_list[lcd_Language])[menu];
			break;
		case MENU_LEVEL_2:
			list = &(Menu_level2_list[lcd_Language])[menu];
			break;
		case MENU_LEVEL_3:
			list = &(Menu_level3_list[lcd_Language])[menu];
			break;
		case MENU_LEVEL_4:
			list = &(Menu_level4_list[lcd_Language])[menu];
			break;
		default:
			break;
	}

	for(i = 0; i < list->str_num; i++)
	{
		LCD_Str_Draw(&(list->pstr[i]));
	}
}

void LCD_Anime_Draw(void)
{
	uint8_t level = LCD_Menu_GetLevel();
	uint8_t menu = LCD_Menu_GetID();
	Stringinfo_t str;

	if (MENU_LEVEL_0 == level){
		if (MENU_L0_INIT == menu){
			LCD_Str_Draw(&Menu_Init_Dot[Init_Frame-1]);
		}
		else if (MENU_L0_AUTOMEASURE == menu){
			LCD_Menu_AlertDisplay();
		}
	}
	else if (MENU_LEVEL_3 == level){
		if (MENU_L3_02 == menu){
			str.str_x = (Menu_level3_list[lcd_Language])[menu].pstr[lcd_Commaddr.pos].str_x;
			str.str_y = (Menu_level3_list[lcd_Language])[menu].pstr[lcd_Commaddr.pos].str_y;
			str.str_type = (Menu_level3_list[lcd_Language])[menu].pstr[lcd_Commaddr.pos].str_type;
			str.pstr = Menu_Number_Tbl[lcd_Commaddr.addr[lcd_Commaddr.pos]];
			LCD_Str_Draw(&str);
		}
	}
	else if (MENU_LEVEL_4 == level){
		str.str_x = (Menu_level4_list[lcd_Language])[menu].pstr[PWInfo.pos].str_x;
		str.str_y = (Menu_level4_list[lcd_Language])[menu].pstr[PWInfo.pos].str_y;
		str.str_type = (Menu_level4_list[lcd_Language])[menu].pstr[PWInfo.pos].str_type;
		str.pstr = Menu_Number_Tbl[PWInfo.pw[PWInfo.pos]];
		LCD_Str_Draw(&str);
	}
}

void LCD_Cursor_Draw(void)
{
	static Stringinfo_t cursor_info;

	switch(lcd_cursor_sts)
	{
		case CURSOR_INVALID:	/* 无光标画面 */
			return;
		case CURSOR_FREEZE:		/* 光标固定画面 */
			LCD_Str_Draw(&Menu_Cursor_default);
			break;
		case CURSOR_VALID:		/* 迁入非光标固定画面 */
			LCD_Menu_CursorPosGet(CURSOR_VALID, &(cursor_info.str_x), &(cursor_info.str_y));
			cursor_info.str_type = Menu_Cursor_default.str_type;
			cursor_info.pstr = Menu_Cursor_default.pstr;
			LCD_Str_Draw(&cursor_info);
			break;
		case CURSOR_LEFT:		/* 非光标固定画面中左移 */
		case CURSOR_RIGHT:		/* 非光标固定画面中右移 */
			LCD_Str_Clear(&cursor_info);
			LCD_Menu_CursorPosGet(lcd_cursor_sts, &(cursor_info.str_x), &(cursor_info.str_y));
			cursor_info.str_type = Menu_Cursor_default.str_type;
			cursor_info.pstr = Menu_Cursor_default.pstr;
			LCD_Str_Draw(&cursor_info);
			break;
		default:
			break;
	}
}

static void LCD_Menu_CursorPosGet(CursorSts_t sts, uint8_t *x, uint8_t *y)
{
	uint8_t Def_X_Min = 0, Def_X_Max = 0;
	uint8_t level = LCD_Menu_GetLevel();
	uint8_t menu = LCD_Menu_GetID();

	if(MENU_LEVEL_4 == level){
		Def_X_Min = 44;
		Def_X_Max = 76;
		if((MENU_L4_00 == menu) || (MENU_L4_01 == menu)){
			*y = 6;
		}
		else{
			*y = 4;
		}
	}
	else if(MENU_LEVEL_3 == level){
		*y = 4;
		if(MENU_L3_02 == menu){
			Def_X_Min = 56;
			Def_X_Max = 64;
		}
	}

	switch(sts)
	{
		case CURSOR_VALID:
			*x = Def_X_Min;
			break;
		case CURSOR_LEFT:
			*x -= 8;
			if(*x < Def_X_Min){
				*x = Def_X_Max;
			}
			break;
		case CURSOR_RIGHT:
			*x += 8;
			if(*x > Def_X_Max){
				*x = Def_X_Min;
			}
			break;
		default:
			break;
	}
}

static BOOL LCD_Password_Check(uint8_t *pw)
{
	uint8_t dst_pw[5];

	Lcd_Get_Password(dst_pw, numof(dst_pw));

	if(0 == memcmp(dst_pw, pw, sizeof(dst_pw))){
		return TRUE;
	}
	else{
		return FALSE;
	}
}

void LCD_Menu_InitVersion(uint8_t *version)
{
	MenuList_t *list;

	list = &(Menu_level0_list[lcd_Language])[MENU_L0_INIT];
	list->pstr[3].pstr = Menu_Number_Tbl[version[0]];
	list->pstr[5].pstr = Menu_Number_Tbl[version[1]];
	list->pstr[6].pstr = Menu_Number_Tbl[version[2]];
}

void LCD_Menu_AlertDisplay(void)
{
	MenuList_t *list = &(Menu_level0_list[lcd_Language])[MENU_L0_AUTOMEASURE];

	if(TRUE == Warning_Disp_Flag){
		LCD_Str_Draw(&(list->pstr[6]));
	}
	else{
		LCD_Str_Clear(&(list->pstr[6]));
	}
}

void LCD_Menu_SetID(uint8_t menu_id)
{
	lcd_menu_id = menu_id;
	LCD_Screenreq_Set(REQ_ON);
}

uint8_t LCD_Menu_GetID(void)
{
	return lcd_menu_id;
}

void LCD_Menu_SetLevel(uint8_t level)
{
	lcd_menu_level = level;
}

uint8_t LCD_Menu_GetLevel(void)
{
	return lcd_menu_level;
}

void LCD_Cursor_StatusSet(CursorSts_t status)
{
	if (CURSOR_INVALID != status){
		LCD_Cursorreq_Set(REQ_ON);
	}

	lcd_cursor_sts = status;
}

