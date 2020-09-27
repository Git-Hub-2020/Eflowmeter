#ifndef LCD_DRAW_H_
#define LCD_DRAW_H_

#include "lcd_screen_data.h"

#define SLV_ADDR	0x6C
#define RES			GPIOB,PIN8
#define CS1			GPIOB,PIN9
#define A0			GPIOB,PIN7
#define SDA			GPIOB,PIN5
#define SCL			GPIOB,PIN6

void LCD_Str_Draw(Stringinfo_t *str);
void write_com(uint8_t para);
void clealddram(void);

#endif /* LCD_DRAW_H_ */
