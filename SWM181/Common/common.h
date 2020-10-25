#ifndef COMMON_H_
#define COMMON_H_

typedef int BOOL;
#define FALSE ((int)0)
#define TRUE ((int)!FALSE)

/* ���س�Ա������ */
#define numof(x) sizeof(x)/sizeof(x[0])

/* log������� */
#if(1)
#define DebugLog(...) printf(__VA_ARGS__)
#else
#define DebugLog(...)
#endif

extern void delay(int t);
extern void delay_us(int t);

#endif /* COMMON_H_ */
