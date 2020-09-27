#include "timer.h"

extern TimerTable_t timer_table[TIMER_ID_MAX];

void Timer_init(void)
{
	TIMR_Init(TIMR0, TIMR_MODE_TIMER, SystemCoreClock/20, 1);	//ÿ100ms����һ���ж�
	IRQ_Connect(IRQ0_15_TIMR0, IRQ5_IRQ, 2);		//��ʱ��0�ж����ӵ�IRQ5�ж��ߣ������ȼ�
	TIMR_Start(TIMR0);
}

void Timer_Setup(TimerID_t id)
{
	timer_table[id].status = TIMER_ON;
	timer_table[id].counter = 0;
}

void Timer_Clear(TimerID_t id)
{
	timer_table[id].status = TIMER_OFF;
	timer_table[id].counter = 0;
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
			timer_table[id].func();
			timer_table[id].counter = 0;
		}
	}
}

