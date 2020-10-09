#ifndef COMMON_H_
#define COMMON_H_

typedef int BOOL;
#define FALSE ((int)0)
#define TRUE ((int)!FALSE)

#define numof(x) sizeof(x)/sizeof(x[0])

extern void delay(int t);
extern void delay_us(int t);

#endif /* COMMON_H_ */
