#include "timer.h"
#include "lcd_control.h"

TimerTable_t timer_table[TIMER_ID_MAX] =
{
	{TIMER_ID_INIT, 0, 20, TIMER_OFF, LCD_TimeOut_Init},		/* 1000ms */
	{TIMER_ID_ALERT, 0, 10, TIMER_OFF, LCD_TimeOut_Alert},		/* 500ms */
};

