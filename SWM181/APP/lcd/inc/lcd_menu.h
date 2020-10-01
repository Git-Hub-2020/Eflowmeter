#ifndef LCD_MENU_H_
#define LCD_MENU_H_

#include "SWM181.h"

typedef enum MenuKey
{
	MENU_KEY_DOWN = 0,
	MENU_KEY_UP,
	MENU_KEY_CONFIRM,
	MENU_KEY_UNITDOWN,
	MENU_KEY_UNITUP,
	MENU_KEY_UNITCONFIRM
} MenuKey_t;

typedef enum CursorSts
{
	CURSOR_INVALID = 0,
	CURSOR_VALID,
	CURSOR_FREEZE,
	CURSOR_LEFT,
	CURSOR_RIGHT
} CursorSts_t;

typedef struct PWInfo
{
	uint8_t pw[5];
	uint8_t pos;
} PWInfo_t;

#define DISPLAY_ON  1
#define DISPLAY_OFF 0

void LCD_Menu_Key_L1(MenuKey_t key);
void LCD_Menu_Key_L2(MenuKey_t key);
void LCD_Menu_Key_L3(MenuKey_t key);
void LCD_Menu_Key_L4(MenuKey_t key);
void LCD_Screen_Draw(void);
void LCD_Anime_Draw(void);
void LCD_Cursor_Draw(void);
void LCD_Menu_SetID(uint8_t menu_id);
uint8_t LCD_Menu_GetID(void);
void LCD_Menu_SetLevel(uint8_t level);
void LCD_Cursor_StatusSet(CursorSts_t status);
uint8_t LCD_Menu_GetLevel(void);
void LCD_Menu_InitVerGet(void);
void LCD_Menu_AlertDisplay(void);

#endif /* LCD_MENU_H_ */
