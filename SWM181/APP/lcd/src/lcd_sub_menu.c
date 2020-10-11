#include "common.h"
#include "lcd_menu.h"
#include "lcd_menu_type.h"
#include "lcd_screen_data.h"
#include "lcd_setup.h"

static DisplayReq_t LCD_Menu_L3_00(MenuKey_t key);
static DisplayReq_t LCD_Menu_L3_01(MenuKey_t key);
static DisplayReq_t LCD_Menu_L3_02(MenuKey_t key);

void LCD_Sub_Menu_Init(void)
{
	Lcd_Get_Language(&lcd_Language);
	if(LANG_MAX <= lcd_Language) lcd_Language = LANG_ZH;
	Lcd_Get_Commaddr(lcd_Commaddr.addr, numof(lcd_Commaddr.addr));
}

DisplayReq_t LCD_Sub_Menu_L3(uint8_t menu, MenuKey_t key)
{
	DisplayReq_t disp_req = REQ_OFF;

	static const MenuFunc Sub_Menu_L3[] =
	{
		LCD_Menu_L3_00,
		LCD_Menu_L3_01,
		LCD_Menu_L3_02
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
	case MENU_KEY_UP:
		LCD_Menu_SetID(MENU_L3_01);
		break;
	case MENU_KEY_CONFIRM:
		LCD_Menu_SetID(MENU_L2_PARAMSET00);
		lcd_Language = LANG_ZH;
		Lcd_Set_Language(lcd_Language);
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
	case MENU_KEY_UP:
		LCD_Menu_SetID(MENU_L3_00);
		break;
	case MENU_KEY_CONFIRM:
		LCD_Menu_SetID(MENU_L2_PARAMSET00);
		lcd_Language = LANG_EN;
		Lcd_Set_Language(lcd_Language);
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
		Lcd_Set_Commaddr(lcd_Commaddr.addr, numof(lcd_Commaddr.addr));
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
