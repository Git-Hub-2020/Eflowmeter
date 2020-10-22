#ifndef LCD_SETUP_H_
#define LCD_SETUP_H_

#include "SWM181.h"

void Lcd_Setting_GetValue(uint8_t level, uint8_t menu, uint32_t *value);
void Lcd_Setting_SetValue(uint8_t level, uint8_t menu, uint32_t *value);
void Lcd_StrToNum_Convert(uint8_t *str, uint32_t *num, uint8_t str_size);
void Lcd_NumToStr_Convert(uint8_t *str, uint32_t *num, uint8_t str_size);

#endif /* LCD_SETUP_H_ */
