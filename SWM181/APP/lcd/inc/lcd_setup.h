#ifndef LCD_SETUP_H_
#define LCD_SETUP_H_

#include "SWM181.h"

void Lcd_Set_Password(uint8_t *pw);
void Lcd_Get_Password(uint8_t *pw);
void Lcd_Set_Language(uint8_t lang);
void Lcd_Get_Language(uint8_t *lang);

#endif /* LCD_SETUP_H_ */
