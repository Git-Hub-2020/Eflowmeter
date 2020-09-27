#ifndef LCD_MENU_H_
#define LCD_MENU_H_

#include "SWM181.h"

typedef enum MenuKey
{
	MENU_KEY_DOWN = 0,
	MENU_KEY_UP,
	MENU_KEY_CONFIRM
} MenuKey_t;

#define DISPLAY_ON  1
#define DISPLAY_OFF 0

void LCD_Menu_Key_L1(MenuKey_t key);
void LCD_Menu_Key_L2(MenuKey_t key);
void LCD_Menu_Key_L3(MenuKey_t key);
void LCD_Screen_Draw(void);
void LCD_Menu_SetID(uint8_t menu_id);
uint8_t LCD_Menu_GetID(void);
void LCD_Menu_SetLevel(uint8_t level);
uint8_t LCD_Menu_GetLevel(void);
void LCD_Menu_InitDisplay(uint8_t count);
void LCD_Menu_AlertDisplay(uint8_t display);

#endif /* LCD_MENU_H_ */
