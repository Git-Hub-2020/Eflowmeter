#include "version.h"

/* °æ±¾ºÅ */
static const uint8_t version[] = {"1.00"};


void Version_GetNum(uint8_t *ver)
{
	*ver = version[0] - ASCII_0;
	ver++;
	*ver = version[2] - ASCII_0;
	ver++;
	*ver = version[3] - ASCII_0;
}
