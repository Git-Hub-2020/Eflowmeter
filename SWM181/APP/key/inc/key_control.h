#ifndef KEY_CONTROL_H_
#define KEY_CONTROL_H_

#include "SWM181.h"

#define KEY_INVALID 0
#define KEY_VALID   1

void Key_init(void);
void Key_StatusSet(uint8_t status);
void KeyControl(void);
void GetKey(void);

#endif /* KEY_CONTROL_H_ */
