#ifndef LCD_CONTROL_H_
#define LCD_CONTROL_H_

#include "lcd_screen_data.h"

#define SLV_ADDR	0x6C
#define RES			GPIOB,PIN8
#define CS1			GPIOB,PIN9
#define A0			GPIOB,PIN7
#define SDA			GPIOB,PIN5
#define SCL			GPIOB,PIN6

void LCD_init(void);
void LCD_Key_Up(void);
void LCD_Key_Down(void);
void LCD_Key_Confirm(void);
void LCD_Key_UniteConfirm(void);
void LCD_Draw(void);
void LCD_Str_Draw(Stringinfo_t *str);

#endif /* LCD_CONTROL_H_ */
