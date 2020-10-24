#ifndef LCD_DRAW_H_
#define LCD_DRAW_H_

#include "lcd_screen_data.h"

void LCD_Draw_Init(void);
void LCD_Str_Draw(const Stringinfo_t *str);
void LCD_Str_Clear(const Stringinfo_t *str);
void clealddram(void);

#endif /* LCD_DRAW_H_ */
