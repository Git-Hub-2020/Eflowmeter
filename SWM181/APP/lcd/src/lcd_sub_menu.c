#include <string.h>
#include "common.h"
#include "lcd_sub_menu.h"
#include "lcd_menu.h"
#include "lcd_menu_type.h"
#include "lcd_screen_data.h"
#include "lcd_setup.h"

extern MenuList_t *Current_Menu_Info;
extern uint8_t lcd_cursor_pos;
static uint8_t lcd_submenu_idx = 0;
static DisplayReq_t LCD_Menu_L2_Select(uint8_t, uint8_t*);
static DisplayReq_t LCD_Menu_L2_SetNum(uint8_t, uint8_t, uint8_t*);
static DisplayReq_t LCD_Menu_L3_Select(MenuKey_t,uint8_t,uint8_t,uint8_t*,unsigned long long,unsigned long long);
static DisplayReq_t LCD_Menu_L3_SetNum(MenuKey_t,uint8_t,uint8_t,uint8_t,uint8_t*,unsigned long long,unsigned long long);

static SubMenuInfo_t SubMenuInfo[] =
{
	{MENU_L3_00, MENU_L2_PARAMSET00, 1, (uint8_t*)&lcd_Language, TYPE_SELECT, LANG_ZH, LANG_MAX},
	{MENU_L3_01, MENU_L2_PARAMSET01, numof(lcd_Commaddr.data), lcd_Commaddr.data, TYPE_SETNUM, 1, 99},
	{MENU_L3_02, MENU_L2_PARAMSET02, 1, (uint8_t*)&lcd_baudrate, TYPE_SELECT, RATE_2400, RATE_MAX},
	{MENU_L3_03, MENU_L2_PARAMSET03, numof(lcd_snsrsize.data), lcd_snsrsize.data, TYPE_SETNUM, 3, 3000},
	{MENU_L3_04, MENU_L2_PARAMSET04, 1, (uint8_t*)&lcd_flowunit, TYPE_SELECT, UNIT_LS, UNIT_MAX},
	{MENU_L3_05, MENU_L2_PARAMSET05, numof(lcd_flowrange.data), lcd_flowrange.data, TYPE_SETNUM, 0, 99999},
	{MENU_L3_06, MENU_L2_PARAMSET06, numof(lcd_damp.data), lcd_damp.data, TYPE_SETNUM, 1, 64},
	{MENU_L3_07, MENU_L2_PARAMSET07, 1, (uint8_t*)&lcd_flowdirect, TYPE_SELECT, DIR_FORWARD, DIR_MAX},
};

void LCD_Sub_Menu_Init(void)
{
	Lcd_EEPGet_All(); //获取所有菜单当前存储值并校验
	Lcd_EEPSet_All(); //将校验结果重新设定
}

uint8_t LCD_SubMenu_IdxGet(void)
{
	return lcd_submenu_idx;
}

DisplayReq_t LCD_Sub_Menu_L2(uint8_t menu, MenuKey_t key)
{
	DisplayReq_t disp_req = REQ_OFF;

	if (MENU_KEY_CONFIRM != key) return REQ_OFF;

	if((menu < numof(SubMenuInfo)) && (NULL != SubMenuInfo[menu].obj) && (menu == SubMenuInfo[menu].pre_menu)){
		if(TYPE_SELECT == SubMenuInfo[menu].type){
			disp_req = LCD_Menu_L2_Select(SubMenuInfo[menu].menu_id, SubMenuInfo[menu].obj);
		}
		else if(TYPE_SETNUM == SubMenuInfo[menu].type){
			disp_req = LCD_Menu_L2_SetNum(	SubMenuInfo[menu].menu_id,
											SubMenuInfo[menu].obj_num,
											SubMenuInfo[menu].obj);
		}
	}
	else if(MENU_L2_PARAMSET24 == menu){
		LCD_Menu_SetLevel(MENU_LEVEL_4);
		LCD_Menu_SetID(MENU_L4_02);
		memset(&PWInfo, 0, sizeof(PWInfo));
		LCD_Cursor_StatusSet(CURSOR_VALID);
		lcd_cursor_pos = 0;
		disp_req = REQ_ON;
	}

	return disp_req;
}

static DisplayReq_t LCD_Menu_L2_Select(uint8_t menu_id, uint8_t* obj)
{
	lcd_submenu_idx = *obj;
	LCD_Menu_SetID(menu_id);
	LCD_Cursor_StatusSet(CURSOR_FREEZE);
	return REQ_ON;
}

static DisplayReq_t LCD_Menu_L2_SetNum(uint8_t menu_id, uint8_t obj_num, uint8_t* obj)
{
	uint8_t idx = 0;

	lcd_submenu_idx = 0;
	LCD_Menu_SetID(menu_id);
	LCD_Cursor_StatusSet(CURSOR_VALID);
	for(idx = 0; idx < obj_num; idx++){
		(((Stringinfo_t*)Current_Menu_Info->p_menu)[idx]).pstr = Menu_Number_Tbl[obj[idx]];
	}
	lcd_cursor_pos = obj_num - 1;
	return REQ_ON;
}

DisplayReq_t LCD_Sub_Menu_L3(uint8_t menu, MenuKey_t key)
{
	DisplayReq_t disp_req = REQ_OFF;

	if (menu >= numof(SubMenuInfo)) return REQ_OFF;

	if((NULL != SubMenuInfo[menu].obj) && (menu == SubMenuInfo[menu].menu_id)){
		if(TYPE_SELECT == SubMenuInfo[menu].type){
			disp_req = LCD_Menu_L3_Select(	key,
											SubMenuInfo[menu].menu_id,
											SubMenuInfo[menu].pre_menu,
											SubMenuInfo[menu].obj,
											SubMenuInfo[menu].obj_min,
											SubMenuInfo[menu].obj_max);
		}
		else if(TYPE_SETNUM == SubMenuInfo[menu].type){
			disp_req = LCD_Menu_L3_SetNum(	key,
											SubMenuInfo[menu].menu_id,
											SubMenuInfo[menu].pre_menu,
											SubMenuInfo[menu].obj_num,
											SubMenuInfo[menu].obj,
											SubMenuInfo[menu].obj_min,
											SubMenuInfo[menu].obj_max);
		}

	}

	return disp_req;
}

static DisplayReq_t LCD_Menu_L3_Select(MenuKey_t key,
										uint8_t menu_id,
										uint8_t pre_menu,
										uint8_t* obj,
										unsigned long long obj_min,
										unsigned long long obj_max)
{
	DisplayReq_t disp_req = REQ_ON;

	switch(key)
	{
	case MENU_KEY_DOWN:
		if(obj_min == *obj){
			*obj = obj_max;
		}
		*obj -= 1;
		lcd_submenu_idx = *obj;
		LCD_Menu_SetID(menu_id);
		break;
	case MENU_KEY_UP:
		*obj += 1;
		if(obj_max == *obj){
			*obj = obj_min;
		}
		lcd_submenu_idx = *obj;
		LCD_Menu_SetID(menu_id);
		break;
	case MENU_KEY_CONFIRM:
		Lcd_EEPSet_All();
		LCD_Menu_SetID(pre_menu);
		break;
	default:
		disp_req = REQ_OFF;
		break;
	}

	return disp_req;
}

static DisplayReq_t LCD_Menu_L3_SetNum(MenuKey_t key,
										uint8_t menu_id,
										uint8_t pre_menu,
										uint8_t obj_num,
										uint8_t* obj,
										unsigned long long obj_min,
										unsigned long long obj_max)
{
	DisplayReq_t disp_req = REQ_ON;
	unsigned long long check_num = 0;

	switch(key)
	{
	case MENU_KEY_DOWN:
		Lcd_StrToNum_Convert(obj, &check_num, obj_num);
		if(obj_min < check_num){
			obj[lcd_cursor_pos]--;
		}
		break;
	case MENU_KEY_UP:
		Lcd_StrToNum_Convert(obj, &check_num, obj_num);
		if(obj_max > check_num){
			obj[lcd_cursor_pos]++;
		}
		break;
	case MENU_KEY_CONFIRM:
		Lcd_EEPSet_All();
		LCD_Menu_SetID(pre_menu);
		break;
	case MENU_KEY_UNITDOWN:
		if(0 == lcd_cursor_pos){
			lcd_cursor_pos = obj_num;
		}
		lcd_cursor_pos--;
		LCD_Cursor_StatusSet(CURSOR_LEFT);
		break;
	case MENU_KEY_UNITUP:
		lcd_cursor_pos++;
		if(obj_num <= lcd_cursor_pos){
			lcd_cursor_pos = 0;
		}
		LCD_Cursor_StatusSet(CURSOR_RIGHT);
		break;
	default:
		disp_req = REQ_OFF;
		break;
	}

	return disp_req;
}

