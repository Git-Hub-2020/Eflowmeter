#ifndef EEPROM_API_H_
#define EEPROM_API_H_

#include "SWM181.h"

extern void Eeprom_SetPassword(uint32_t *pw);
extern void Eeprom_GetPassword(uint32_t *pw);
extern void Eeprom_SetLanguage(uint32_t *lang);
extern void Eeprom_GetLanguage(uint32_t *lang);

#endif /* EEPROM_API_H_ */
