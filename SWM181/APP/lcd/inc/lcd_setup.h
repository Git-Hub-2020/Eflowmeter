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
void Lcd_Set_Flowzero(uint8_t *data, uint8_t data_num);
void Lcd_Get_Flowzero(uint8_t *data, uint8_t data_num);
void Lcd_Set_Flowcutoff(uint8_t *data, uint8_t data_num);
void Lcd_Get_Flowcutoff(uint8_t *data, uint8_t data_num);
void Lcd_Set_Cutoffena(uint8_t *data);
void Lcd_Get_Cutoffena(uint8_t *data);
void Lcd_Set_Totalunit(uint8_t *data);
void Lcd_Get_Totalunit(uint8_t *data);
void Lcd_Set_SegmaNena(uint8_t *data);
void Lcd_Get_SegmaNena(uint8_t *data);
void Lcd_Set_Analogtype(uint8_t *data);
void Lcd_Get_Analogtype(uint8_t *data);
void Lcd_Set_Pulsetype(uint8_t *data);
void Lcd_Get_Pulsetype(uint8_t *data);
void Lcd_Set_Pulsefact(uint8_t *data);
void Lcd_Get_Pulsefact(uint8_t *data);
void Lcd_Set_Frequemax(uint8_t *data, uint8_t data_num);
void Lcd_Get_Frequemax(uint8_t *data, uint8_t data_num);
void Lcd_Set_Mtsnsrena(uint8_t *data);
void Lcd_Get_Mtsnsrena(uint8_t *data);
void Lcd_Set_Mtsnsrtrip(uint8_t *data, uint8_t data_num);
void Lcd_Get_Mtsnsrtrip(uint8_t *data, uint8_t data_num);
void Lcd_EEPSet_All(void);
void Lcd_EEPGet_All(void);
void Lcd_StrToNum_Convert(uint8_t *str, unsigned long long *num, uint8_t str_size);

#endif /* LCD_SETUP_H_ */
