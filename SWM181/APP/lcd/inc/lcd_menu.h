#ifndef LCD_MENU_H_
#define LCD_MENU_H_

#include "lcd_control.h"

typedef enum CursorSts
{
	CURSOR_INVALID = 0,
	CURSOR_VALID,
	CURSOR_FREEZE,
	CURSOR_LEFT,
	CURSOR_RIGHT
} CursorSts_t;

typedef enum PasswordLevel
{
	PW_LEVEL1 = 0,
	PW_LEVEL2
} PasswordLevel_t;

#define DISPLAY_ON  1
#define DISPLAY_OFF 0

#define FACTORY_PW_L1 8000	/* 第1级密码（出厂值08000）：用户能改变1～24仪表参数 */
#define FACTORY_PW_L2 19818	/* 第2级密码（出厂值19818）：用户能改变所有仪表参数 */

void LCD_Menu_Init(void);
DisplayReq_t LCD_Menu_Key_Response(MenuKey_t key);
void LCD_Screen_Draw(void);
void LCD_Anime_Draw(void);
void LCD_Cursor_Draw(void);
void LCD_Menu_SetID(uint8_t menu_id);
uint8_t LCD_Menu_GetID(void);
void LCD_Menu_SetLevel(uint8_t level);
uint8_t LCD_Menu_GetLevel(void);
void LCD_Menu_InitVersion(uint8_t *version);
void LCD_Menu_AlertDisplay(void);
void LCD_AutoMeasure_DataRefresh(void);
void LCD_Cursor_StatusSet(CursorSts_t status);

#endif /* LCD_MENU_H_ */
