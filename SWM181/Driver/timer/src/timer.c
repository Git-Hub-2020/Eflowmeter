#include "timer.h"
#include "common.h"

extern TimerTable_t timer_table[TIMER_ID_MAX];

void Timer_init(void)
{
	TIMR_Init(TIMR0, TIMR_MODE_TIMER, SystemCoreClock/200, 1);	//每5ms触发一次中断
	IRQ_Connect(IRQ0_15_TIMR0, IRQ5_IRQ, 2);		//定时器0中断链接到IRQ5中断线，低优先级
	TIMR_Start(TIMR0);
}

void Timer_Setup(TimerID_t id)
{
	timer_table[id].status = TIMER_ON;
	timer_table[id].counter = 0;
	DebugLog("%s: TimerID:[%d]\n",__FUNCTION__, id);
}

void Timer_Clear(TimerID_t id)
{
	timer_table[id].status = TIMER_OFF;
	timer_table[id].counter = 0;
	DebugLog("%s: TimerID:[%d]\n",__FUNCTION__, id);
}

void Timer_Counter(void)
{
	uint8_t id = 0;

	for(id = 0; id < TIMER_ID_MAX; id++)
	{
		if((TIMER_ON == timer_table[id].status)
		&&(timer_table[id].counter < timer_table[id].length))
		{
			timer_table[id].counter++;
		}
	}
}

void Timer_TimeOut_Manager(void)
{
	uint8_t id = 0;

	for(id = 0; id < TIMER_ID_MAX; id++)
	{
		if((TIMER_ON == timer_table[id].status)
		&&(timer_table[id].counter == timer_table[id].length))
		{
			DebugLog("TimeOut: TimerID:[%d]\n", id);
			timer_table[id].func();
			timer_table[id].counter = 0;
		}
	}
}

