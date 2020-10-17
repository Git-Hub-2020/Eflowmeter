#ifndef LCD_SETUP_H_
#define LCD_SETUP_H_

#include "SWM181.h"

void Lcd_Set_Password(uint8_t *data, uint8_t data_num);
void Lcd_Get_Password(uint8_t *data, uint8_t data_num);
void Lcd_Set_Language(uint8_t *data);
void Lcd_Get_Language(uint8_t *data);
void Lcd_Set_Commaddr(uint8_t *data, uint8_t data_num);
void Lcd_Get_Commaddr(uint8_t *data, uint8_t data_num);
void Lcd_Set_Baudrate(uint8_t *data);
void Lcd_Get_Baudrate(uint8_t *data);
void Lcd_Set_Snsrsize(uint8_t *data, uint8_t data_num);
void Lcd_Get_Snsrsize(uint8_t *data, uint8_t data_num);
void Lcd_Set_Flowunit(uint8_t *data);
void Lcd_Get_Flowunit(uint8_t *data);
void Lcd_Set_Flowrange(uint8_t *data, uint8_t data_num);
void Lcd_Get_Flowrange(uint8_t *data, uint8_t data_num);
void Lcd_Set_Damp(uint8_t *data, uint8_t data_num);
void Lcd_Get_Damp(uint8_t *data, uint8_t data_num);
void Lcd_Set_Flowdirect(uint8_t *data);
void Lcd_Get_Flowdirect(uint8_t *data);
void Lcd_EEPSet_All(void);
void Lcd_EEPGet_All(void);
void Lcd_StrToNum_Convert(uint8_t *str, unsigned long long *num, uint8_t str_size);

#endif /* LCD_SETUP_H_ */
