#include <string.h>
#include "common.h"
#include "lcd_menu.h"
#include "lcd_menu_type.h"
#include "lcd_screen_data.h"
#include "lcd_setup.h"

extern MenuList_t *Current_Menu_Info;
static uint8_t lcd_submenu_idx = 0;
static DisplayReq_t LCD_Menu_L3_00(MenuKey_t key);
static DisplayReq_t LCD_Menu_L3_01(MenuKey_t key);
static DisplayReq_t LCD_Menu_L3_02(MenuKey_t key);

void LCD_Sub_Menu_Init(void)
{
	Lcd_EEPGet_All();
}

uint8_t LCD_SubMenu_IdxGet(void)
{
	return lcd_submenu_idx;
}

DisplayReq_t LCD_Sub_Menu_L2(uint8_t menu, MenuKey_t key)
{
	DisplayReq_t disp_req = REQ_ON;

	if (MENU_KEY_CONFIRM != key) return REQ_OFF;

	switch(menu)
	{
		case MENU_L2_PARAMSET00:
			lcd_submenu_idx = lcd_Language;
			LCD_Menu_SetID(MENU_L3_00);
			LCD_Cursor_StatusSet(CURSOR_FREEZE);
			break;
		case MENU_L2_PARAMSET01:
			lcd_submenu_idx = 0;
			LCD_Menu_SetID(MENU_L3_01);
			LCD_Cursor_StatusSet(CURSOR_VALID);
			(((Stringinfo_t*)Current_Menu_Info->p_menu)[0]).pstr = Menu_Number_Tbl[lcd_Commaddr.addr[0]];
			(((Stringinfo_t*)Current_Menu_Info->p_menu)[1]).pstr = Menu_Number_Tbl[lcd_Commaddr.addr[1]];
			lcd_Commaddr.pos = 1;
			break;
		case MENU_L2_PARAMSET02:
			lcd_submenu_idx = lcd_baudrate;
			LCD_Menu_SetID(MENU_L3_02);
			LCD_Cursor_StatusSet(CURSOR_FREEZE);
			break;
		case MENU_L2_PARAMSET24:
			LCD_Menu_SetLevel(MENU_LEVEL_4);
			LCD_Menu_SetID(MENU_L4_02);
			memset(&PWInfo, 0, sizeof(PWInfo));
			LCD_Cursor_StatusSet(CURSOR_VALID);
			break;
		default:
			disp_req = REQ_OFF;
			break;
	}

	return disp_req;
}

DisplayReq_t LCD_Sub_Menu_L3(uint8_t menu, MenuKey_t key)
{
	DisplayReq_t disp_req = REQ_OFF;

	static const MenuFunc Sub_Menu_L3[] =
	{
		LCD_Menu_L3_00,
		LCD_Menu_L3_01,
		LCD_Menu_L3_02,
	};

	if(menu < numof(Sub_Menu_L3)){
		disp_req = Sub_Menu_L3[menu](key);
	}

	return disp_req;
}

static DisplayReq_t LCD_Menu_L3_00(MenuKey_t key)
{
	DisplayReq_t disp_req = REQ_ON;

	switch(key)
	{
	case MENU_KEY_DOWN:
		if(LANG_ZH == lcd_Language){
			lcd_Language = LANG_MAX;
		}
		lcd_Language--;
		lcd_submenu_idx = lcd_Language;
		LCD_Menu_SetID(MENU_L3_00);
		break;
	case MENU_KEY_UP:
		lcd_Language++;
		if(LANG_MAX == lcd_Language){
			lcd_Language = LANG_ZH;
		}
		lcd_submenu_idx = lcd_Language;
		LCD_Menu_SetID(MENU_L3_00);
		break;
	case MENU_KEY_CONFIRM:
		//Lcd_Set_Language(&lcd_Language);
		Lcd_EEPSet_All();
		LCD_Menu_SetID(MENU_L2_PARAMSET00);
		break;
	default:
		disp_req = REQ_OFF;
		break;
	}

	return disp_req;
}

static DisplayReq_t LCD_Menu_L3_01(MenuKey_t key)
{
	DisplayReq_t disp_req = REQ_ON;

	switch(key)
	{
	case MENU_KEY_DOWN:
		if(0 == lcd_Commaddr.pos){
			if(0 < lcd_Commaddr.addr[lcd_Commaddr.pos]){
				lcd_Commaddr.addr[lcd_Commaddr.pos]--;
			}
		}
		else{
			if(1 < lcd_Commaddr.addr[lcd_Commaddr.pos]){
				lcd_Commaddr.addr[lcd_Commaddr.pos]--;
			}
		}
		break;
	case MENU_KEY_UP:
		if(9 > lcd_Commaddr.addr[lcd_Commaddr.pos]){
			lcd_Commaddr.addr[lcd_Commaddr.pos]++;
		}
		break;
	case MENU_KEY_CONFIRM:
		//Lcd_Set_Commaddr(lcd_Commaddr.addr, numof(lcd_Commaddr.addr));
		Lcd_EEPSet_All();
		LCD_Menu_SetID(MENU_L2_PARAMSET01);
		break;
	case MENU_KEY_UNITDOWN:
		if(0 == lcd_Commaddr.pos){
			lcd_Commaddr.pos = numof(lcd_Commaddr.addr);
		}
		lcd_Commaddr.pos--;
		LCD_Cursor_StatusSet(CURSOR_LEFT);
		break;
	case MENU_KEY_UNITUP:
		lcd_Commaddr.pos++;
		if(numof(lcd_Commaddr.addr) <= lcd_Commaddr.pos){
			lcd_Commaddr.pos = 0;
		}
		LCD_Cursor_StatusSet(CURSOR_RIGHT);
		break;
	default:
		disp_req = REQ_OFF;
		break;
	}

	return disp_req;
}

static DisplayReq_t LCD_Menu_L3_02(MenuKey_t key)
{
	DisplayReq_t disp_req = REQ_ON;

	switch(key)
	{
	case MENU_KEY_DOWN:
		if(RATE_2400 == lcd_baudrate){
			lcd_baudrate = RATE_MAX;
		}
		lcd_baudrate--;
		lcd_submenu_idx = lcd_baudrate;
		LCD_Menu_SetID(MENU_L3_02);
		break;
	case MENU_KEY_UP:
		lcd_baudrate++;
		if(RATE_MAX == lcd_baudrate){
			lcd_baudrate = RATE_2400;
		}
		lcd_submenu_idx = lcd_baudrate;
		LCD_Menu_SetID(MENU_L3_02);
		break;
	case MENU_KEY_CONFIRM:
		//Lcd_Set_Baudrate(&lcd_baudrate);
		Lcd_EEPSet_All();
		LCD_Menu_SetID(MENU_L2_PARAMSET02);
		break;
	default:
		disp_req = REQ_OFF;
		break;
	}

	return disp_req;
}
