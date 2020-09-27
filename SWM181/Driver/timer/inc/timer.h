#ifndef TIMER_H_
#define TIMER_H_

#include "SWM181.h"

typedef enum TimerID
{
	TIMER_ID_INIT,
	TIMER_ID_ALERT,
	TIMER_ID_MAX
} TimerID_t;

typedef enum TimerStatus
{
	TIMER_OFF = 0,
	TIMER_ON
} TimerStatus_t;

typedef struct TimerTable
{
	TimerID_t 		id;
	uint8_t			counter;
	uint8_t			length;
	TimerStatus_t	status;
	void			(*func)(void);
} TimerTable_t;

void Timer_init(void);
void Timer_Setup(TimerID_t id);
void Timer_Clear(TimerID_t id);
void Timer_Counter(void);
void Timer_TimeOut_Manager(void);

#endif /* TIMER_H_ */
