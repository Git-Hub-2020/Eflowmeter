#ifndef LCD_SETUP_H_
#define LCD_SETUP_H_

void Lcd_Set_Password(uint8_t *data, uint8_t data_num);
void Lcd_Get_Password(uint8_t *data, uint8_t data_num);
void Lcd_Set_Language(uint8_t lang);
void Lcd_Get_Language(uint8_t *lang);
void Lcd_Set_Commaddr(uint8_t *data, uint8_t data_num);
void Lcd_Get_Commaddr(uint8_t *data, uint8_t data_num);

#endif /* LCD_SETUP_H_ */
