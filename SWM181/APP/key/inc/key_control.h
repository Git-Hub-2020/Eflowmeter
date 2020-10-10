#ifndef KEY_CONTROL_H_
#define KEY_CONTROL_H_

#include "SWM181.h"

#define KEY_INVALID 0
#define KEY_VALID   1

/*---------------------------------------------------------
        系统函数声明
---------------------------------------------------------*/
void Key_init(void);
void KeyControl(void);

#endif /* KEY_CONTROL_H_ */
