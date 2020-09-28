#ifndef LCD_CONTROL_H_
#define LCD_CONTROL_H_

#include "SWM181.h"

#define REQ_OFF 0
#define REQ_ON  1

void LCD_init(void);
void LCD_Key_Up(void);
void LCD_Key_Down(void);
void LCD_Key_Confirm(void);
void LCD_Key_UniteConfirm(void);
void LCD_Draw(void);
void LCD_Drawreq_Set(uint8_t req);
void LCD_Clearreq_Set(uint8_t req);
void LCD_TimeOut_Init(void);
void LCD_TimeOut_Alert(void);

#endif /* LCD_CONTROL_H_ */
