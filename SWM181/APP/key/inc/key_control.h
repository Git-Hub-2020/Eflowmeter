#ifndef KEY_CONTROL_H_
#define KEY_CONTROL_H_

#include "SWM181.h"

extern uint8_t status_key;
extern uint8_t key_sign;

void Key_init(void);
void KeyControl(void);
void GetKey(void);

#endif /* KEY_CONTROL_H_ */
