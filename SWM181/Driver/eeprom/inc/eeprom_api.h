#ifndef EEPROM_API_H_
#define EEPROM_API_H_

#include "eeprom.h"

typedef struct Eeprom
{
	uint32_t password;		/* 密码 */
	uint32_t language;		/* 语言 */
	uint32_t commaddress;	/* 仪表通讯地址 */
	uint32_t baudrate;		/* 仪表通讯速度 */
	uint32_t snsrsize;		/* 测量管道口径 */
	uint32_t flowunit;		/* 流量单位 */
	uint32_t flowrange;		/* 仪表量程设置 */
	uint32_t damp;			/* 测量阻尼时间 */
	uint32_t flowdirect;	/* 流量方向择项 */
	uint32_t flowzero;		/* 流量零点修正 */
	uint32_t flowcutoff;	/* 小信号切除点 */
	uint32_t cutoffena;		/* 允许切除显示 */
	uint32_t totalunit;		/* 流量积算单位 */
	uint32_t segmanena;		/* 反向输出允许 */
	uint32_t analogtype;	/* 电流输出类型 */
	uint32_t pulsetype;		/* 脉冲输出方式 */
	uint32_t pulsefact;		/* 脉冲单位当量 */
	uint32_t frequemax;		/* 频率输出范围 */
	uint32_t mtsnsrena;		/* 空管报警允许 */
	uint32_t mtsnsrtrip;	/* 空管报警阈值 */
} Eeprom_t;

#define OFFSET_OF(type, member) (uint32_t)(&(((type *)0)->member))
#define MEM_EEP_ADDR(member) (uint32_t)(EEPROM_ADDR+OFFSET_OF(Eeprom_t, member))
#define MEM_SIZE (uint32_t)1

extern void Eeprom_Erase(uint32_t addr);
extern void Eeprom_Write(uint32_t addr, uint32_t *value,uint32_t size);
extern void Eeprom_Read(uint32_t addr, uint32_t *value,uint32_t size);

#endif /* EEPROM_API_H_ */
