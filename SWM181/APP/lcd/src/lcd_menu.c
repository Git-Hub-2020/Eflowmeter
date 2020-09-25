#include "lcd_menu.h"
#include "lcd_control.h"
#include "lcd_screen_data.h"

uint8_t lcd_menu_id = MENU_L0_INIT;
uint8_t lcd_menu_level = MENU_LEVEL_0;

void LCD_Menu_Key_L1(MenuKey_t key)
{
	uint8_t menu = LCD_Menu_GetID();

	if(MENU_KEY_DOWN == key){
		if(menu == MENU_L1_PARAMSET)
		{
			menu = MENU_L1_MAX;
		}
		menu--;
	}
	else if(MENU_KEY_UP == key){
		menu++;
		if(menu == MENU_L1_MAX)
		{
			menu = MENU_L1_PARAMSET;
		}
	}
	else{
		switch(menu)
		{
			case MENU_L1_PARAMSET:
				menu = MENU_L2_PARAMSET00;
				break;
			case MENU_L1_TOTALCLR:
				break;
			default:
				break;
		}
	}

	LCD_Menu_SetID(menu);
}

void LCD_Menu_Key_L2(MenuKey_t key)
{
	uint8_t menu = LCD_Menu_GetID();

	if(MENU_KEY_DOWN == key){
		if(menu == MENU_L2_PARAMSET00)
		{
			menu = MENU_L2_MAX;
		}
		menu--;
	}
	else if(MENU_KEY_UP == key){
		menu++;
		if(menu == MENU_L2_MAX)
		{
			menu = MENU_L2_PARAMSET00;
		}
	}
	else{
		switch(menu)
		{
			case MENU_L2_PARAMSET00:
				menu = MENU_L3_00;
				break;
			case MENU_L2_PARAMSET01:
				menu = MENU_L3_02;
				break;
			default:
				break;
		}
	}

	LCD_Menu_SetID(menu);
}

void LCD_Menu_Key_L3(MenuKey_t key)
{
	switch(LCD_Menu_GetID())
	{
		case MENU_L3_00:
			if((MENU_KEY_DOWN == key) || (MENU_KEY_UP == key))
			{
				LCD_Menu_SetID(MENU_L3_01);
			}
			else
			{
				LCD_Menu_SetID(MENU_L2_PARAMSET00);
			}
			break;
		case MENU_L3_01:
			if((MENU_KEY_DOWN == key) || (MENU_KEY_UP == key))
			{
				LCD_Menu_SetID(MENU_L3_00);
			}
			else
			{
				LCD_Menu_SetID(MENU_L2_PARAMSET00);
			}
			break;
		case MENU_L3_02:
			if(MENU_KEY_CONFIRM == key)
			{
				LCD_Menu_SetID(MENU_L2_PARAMSET01);
			}
			break;
		default:
			break;
	}
}

void LCD_Screen_Draw(void)
{
	uint8_t level = LCD_Menu_GetLevel();
	uint8_t i = 0, menu = LCD_Menu_GetID();
	MenuList_t *list;

	switch(level)
	{
		case MENU_LEVEL_0:
			list = &Menu_level0_list_zh[menu];
			break;
		case MENU_LEVEL_1:
			list = &Menu_level1_list_zh[menu];
			break;
		case MENU_LEVEL_2:
			list = &Menu_level2_list_zh[menu];
			break;
		case MENU_LEVEL_3:
			list = &Menu_level3_list_zh[menu];
			break;
		default:
			break;
	}

	for(i = 0; i < list->str_num; i++)
	{
		LCD_Str_Draw(&(list->pstr[i]));
	}
}

void LCD_Menu_SetID(uint8_t menu_id)
{
	lcd_menu_id = menu_id;
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

