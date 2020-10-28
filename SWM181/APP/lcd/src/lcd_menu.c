#include <string.h>
#include "common.h"
#include "lcd_menu.h"
#include "lcd_sub_menu.h"
#include "lcd_menu_type.h"
#include "lcd_draw.h"
#include "lcd_setup.h"

extern uint8_t Init_Frame;
extern BOOL Warning_Disp_Flag;

MenuList_t *Current_Menu_Info;
uint8_t lcd_cursor_pos;

static uint8_t lcd_menu_id = MENU_L0_INIT;
static uint8_t lcd_menu_level = MENU_LEVEL_0;
static CursorSts_t lcd_cursor_sts = CURSOR_INVALID;

static DisplayReq_t LCD_Menu_Key_L0(MenuKey_t key);
static DisplayReq_t LCD_Menu_Key_L1(MenuKey_t key);
static DisplayReq_t LCD_Menu_Key_L2(MenuKey_t key);
static DisplayReq_t LCD_Menu_Key_L3(MenuKey_t key);
static DisplayReq_t LCD_Menu_Key_L4(MenuKey_t key);
static void LCD_Menu_CursorPosGet(uint8_t *x, uint8_t *y);
static BOOL LCD_Password_Check(uint8_t *pw);

void LCD_Menu_Init(void)
{
	LCD_Draw_Init();
	LCD_Sub_Menu_Init();

	LCD_Menu_SetLevel(MENU_LEVEL_0);
	LCD_Menu_SetID(MENU_L0_INIT);
	LCD_Cursor_StatusSet(CURSOR_INVALID);
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

	DebugLog("%s:key[%d],Level[%d]\n",__FUNCTION__, key, LCD_Menu_GetLevel());

	if(LCD_Menu_GetLevel() < numof(Menu_Level)){
		disp_req = Menu_Level[LCD_Menu_GetLevel()](key);
	}

	DebugLog("%s:disp_req[%d]\n",__FUNCTION__, disp_req);
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
				lcd_cursor_pos = 0;
				break;
			case MENU_L1_TOTALCLR:
				menu = MENU_L4_01;
				memset(&PWInfo, 0, sizeof(PWInfo));
				lcd_cursor_pos = 0;
				break;
			default:
				break;
		}
		LCD_Menu_SetLevel(MENU_LEVEL_4);
		LCD_Menu_SetID(menu);
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
		disp_req = LCD_Sub_Menu_L2(menu, key);
		break;
	case MENU_KEY_UNITCONFIRM:
		LCD_AutoMeasure_Transfer(REQ_OFF);
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

	if(MENU_KEY_UNITCONFIRM == key){
		LCD_AutoMeasure_Transfer(REQ_OFF);
		return REQ_ON;
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
			if(0 == PWInfo.data[lcd_cursor_pos]){
				PWInfo.data[lcd_cursor_pos] = 10;
			}
			PWInfo.data[lcd_cursor_pos]--;
			break;
		case MENU_KEY_UP:
			PWInfo.data[lcd_cursor_pos]++;
			if(10 <= PWInfo.data[lcd_cursor_pos]){
				PWInfo.data[lcd_cursor_pos] = 0;
			}
			break;
		case MENU_KEY_CONFIRM:
			if(MENU_L4_00 == menu){
				if(TRUE == LCD_Password_Check(PWInfo.data)){
					LCD_Menu_SetLevel(MENU_LEVEL_2);
					LCD_Menu_SetID(MENU_L2_PARAMSET00);
					LCD_Cursor_StatusSet(CURSOR_FREEZE);
				}
			}
			else if(MENU_L4_01 == menu){
				if(TRUE == LCD_Password_Check(PWInfo.data)){
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
			break;
		case MENU_KEY_UNITDOWN:
			if(0 == lcd_cursor_pos){
				lcd_cursor_pos = numof(PWInfo.data);
			}
			lcd_cursor_pos--;
			LCD_Cursor_StatusSet(CURSOR_LEFT);
			break;
		case MENU_KEY_UNITUP:
			lcd_cursor_pos++;
			if(numof(PWInfo.data) <= lcd_cursor_pos){
				lcd_cursor_pos = 0;
			}
			LCD_Cursor_StatusSet(CURSOR_RIGHT);
			break;
		case MENU_KEY_UNITCONFIRM:
			LCD_AutoMeasure_Transfer(REQ_OFF);
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
	uint8_t i = 0;

	DebugLog("%s:level[%d],menu[%d]\n",__FUNCTION__, LCD_Menu_GetLevel(), LCD_Menu_GetID());

	clealddram(); //全画面清空

	for(i = 0; i < Current_Menu_Info->menu_num; i++)
	{
		LCD_Str_Draw(&((Stringinfo_t*)Current_Menu_Info->p_menu)[i]);
	}
	DebugLog("%s:menu_num[%d]\n",__FUNCTION__, Current_Menu_Info->menu_num);
}

void LCD_Anime_Draw(void)
{
	uint8_t level = LCD_Menu_GetLevel();
	uint8_t menu = LCD_Menu_GetID();
	Stringinfo_t str;

	DebugLog("%s:level[%d],menu[%d]\n",__FUNCTION__, level, menu);

	if (MENU_LEVEL_0 == level){
		if (MENU_L0_INIT == menu){
			LCD_Str_Draw(&Menu_Init_Dot[Init_Frame-1]);
		}
		else if (MENU_L0_AUTOMEASURE == menu){
			LCD_Menu_AlertDisplay();
		}
	}
	else if (MENU_LEVEL_3 == level){
		LCD_Menu_L3_Anime(menu);
	}
	else if (MENU_LEVEL_4 == level){
		str.str_x = ((Stringinfo_t*)Current_Menu_Info->p_menu)[lcd_cursor_pos].str_x;
		str.str_y = ((Stringinfo_t*)Current_Menu_Info->p_menu)[lcd_cursor_pos].str_y;
		str.str_type = ((Stringinfo_t*)Current_Menu_Info->p_menu)[lcd_cursor_pos].str_type;
		str.pstr = Menu_Number_Tbl[PWInfo.data[lcd_cursor_pos]];
		LCD_Str_Draw(&str);
	}
}

void LCD_Cursor_Draw(void)
{
	static Stringinfo_t cursor_info;

	DebugLog("%s:lcd_cursor_sts[%d]\n",__FUNCTION__,lcd_cursor_sts);

	switch(lcd_cursor_sts)
	{
		case CURSOR_INVALID:	/* 无光标画面 */
			return;
		case CURSOR_FREEZE:		/* 光标固定画面 */
			LCD_Str_Draw(&Menu_Cursor_default);
			break;
		case CURSOR_VALID:		/* 迁入非光标固定画面 */
			LCD_Menu_CursorPosGet(&(cursor_info.str_x), &(cursor_info.str_y));
			cursor_info.str_type = Menu_Cursor_default.str_type;
			cursor_info.pstr = Menu_Cursor_default.pstr;
			LCD_Str_Draw(&cursor_info);
			break;
		case CURSOR_LEFT:		/* 非光标固定画面中左移 */
		case CURSOR_RIGHT:		/* 非光标固定画面中右移 */
			LCD_Str_Clear(&cursor_info);
			LCD_Menu_CursorPosGet(&(cursor_info.str_x), &(cursor_info.str_y));
			cursor_info.str_type = Menu_Cursor_default.str_type;
			cursor_info.pstr = Menu_Cursor_default.pstr;
			LCD_Str_Draw(&cursor_info);
			break;
		default:
			break;
	}

	DebugLog("cursor_x[%d],cursor_y[%d]\n", cursor_info.str_x,cursor_info.str_y);
}

static void LCD_Menu_CursorPosGet(uint8_t *x, uint8_t *y)
{
	*x = ((Stringinfo_t*)Current_Menu_Info->p_menu)[lcd_cursor_pos].str_x;
	*y = ((Stringinfo_t*)Current_Menu_Info->p_menu)[lcd_cursor_pos].str_y + 2;
}

static BOOL LCD_Password_Check(uint8_t *pw)
{
	uint8_t dst_pw[5];
	uint32_t pw_num = 0;

	Lcd_Setting_GetValue(MENU_LEVEL_3, MENU_L3_24, &pw_num);
	Lcd_NumToStr_Convert(dst_pw, &pw_num, numof(dst_pw));

	if(0 == memcmp(dst_pw, pw, sizeof(dst_pw))){
		return TRUE;
	}
	else{
		return FALSE;
	}
}

void LCD_Menu_InitVersion(uint8_t *version)
{
	((Stringinfo_t*)Current_Menu_Info->p_menu)[0].pstr = Menu_Number_Tbl[version[0]];
	((Stringinfo_t*)Current_Menu_Info->p_menu)[1].pstr = Menu_Number_Tbl[version[1]];
	((Stringinfo_t*)Current_Menu_Info->p_menu)[2].pstr = Menu_Number_Tbl[version[2]];
}

void LCD_Menu_AlertDisplay(void)
{
	if(TRUE == Warning_Disp_Flag){
		LCD_Str_Draw(&((Stringinfo_t*)Current_Menu_Info->p_menu)[6]);
	}
	else{
		LCD_Str_Clear(&((Stringinfo_t*)Current_Menu_Info->p_menu)[6]);
	}
}

void LCD_Menu_SetID(uint8_t menu_id)
{
	lcd_menu_id = menu_id;

	DebugLog("%s:level[%d],menu[%d]\n",__FUNCTION__,LCD_Menu_GetLevel(),lcd_menu_id);

	switch(LCD_Menu_GetLevel())
	{
		case MENU_LEVEL_0:
			Current_Menu_Info = &(Menu_level0_list[lcd_Language])[menu_id];
			break;
		case MENU_LEVEL_1:
			Current_Menu_Info = &(Menu_level1_list[lcd_Language])[menu_id];
			break;
		case MENU_LEVEL_2:
			Current_Menu_Info = &(Menu_level2_list[lcd_Language])[menu_id];
			break;
		case MENU_LEVEL_3:
			Current_Menu_Info = &(((MenuList_t*)((Menu_level3_list[lcd_Language])[menu_id]).p_menu)[LCD_SubMenu_IdxGet()]);
			break;
		case MENU_LEVEL_4:
			Current_Menu_Info = &(Menu_level4_list[lcd_Language])[menu_id];
			break;
		default:
			break;
	}

	/* Menu迁移时设置全画面刷新请求 */
	LCD_Screenreq_Set(REQ_ON);

	DebugLog("%s:menu_num[%d]\n",__FUNCTION__, Current_Menu_Info->menu_num);
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

