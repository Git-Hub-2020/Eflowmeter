#ifndef EEPROM_API_H_
#define EEPROM_API_H_

#include "SWM181.h"

typedef enum EepromId
{
	EEP_ID_language,		/* ���� */
	EEP_ID_commaddress,		/* �Ǳ�ͨѶ��ַ */
	EEP_ID_baudrate,		/* �Ǳ�ͨѶ�ٶ� */
	EEP_ID_snsrsize,		/* �����ܵ��ھ� */
	EEP_ID_flowunit,		/* ������λ */
	EEP_ID_flowrange,		/* �Ǳ��������� */
	EEP_ID_damp,			/* ��������ʱ�� */
	EEP_ID_flowdirect,		/* ������������ */
	EEP_ID_flowzero,		/* ����������� */
	EEP_ID_flowcutoff,		/* С�ź��г��� */
	EEP_ID_cutoffena,		/* �����г���ʾ */
	EEP_ID_totalunit,		/* �������㵥λ */
	EEP_ID_segmanena,		/* ����������� */
	EEP_ID_analogtype,		/* ����������� */
	EEP_ID_pulsetype,		/* ���������ʽ */
	EEP_ID_pulsefact,		/* ���嵥λ���� */
	EEP_ID_frequemax,		/* Ƶ�������Χ */
	EEP_ID_mtsnsrena,		/* �չܱ������� */
	EEP_ID_mtsnsrtrip,		/* �չܱ�����ֵ */
	EEP_ID_almhiena,		/* ���ޱ������� */
	EEP_ID_almhival,		/* ���ޱ�����ֵ */
	EEP_ID_almlowena,		/* ���ޱ������� */
	EEP_ID_almlowval,		/* ���ޱ�����ֵ */
	EEP_ID_coilalmena,		/* ���ű������� */
	EEP_ID_clrsumkey,		/* ������������ */
	EEP_ID_sensorcode1,		/* ����������1 */
	EEP_ID_sensorcode2,		/* ����������2 */
	EEP_ID_fieldtype,		/* ���ŷ�ʽѡ�� */
	EEP_ID_sensorfact,		/* ������ϵ��ֵ */
	EEP_ID_correctfact0,	/* ����ϵ��0 */
	EEP_ID_correctvalu0,	/* ����������0 */
	EEP_ID_correctfact1,	/* ����ϵ��1 */
	EEP_ID_correctvalu1,	/* ����������1 */
	EEP_ID_correctfact2,	/* ����ϵ��2 */
	EEP_ID_correctvalu2,	/* ����������2 */
	EEP_ID_correctfact3,	/* ����ϵ��3 */
	EEP_ID_correctvalu3,	/* ����������3 */
	EEP_ID_correctfact4,	/* ����ϵ��4 */
	EEP_ID_fwdtotal,		/* �����ۼ��趨 */
	EEP_ID_revtotal,		/* �����ۼ��趨 */
	EEP_ID_analogzero,		/* ����������� */
	EEP_ID_analogrange,		/* ������������ */
	EEP_ID_meterfact,		/* �����궨ϵ�� */
	EEP_ID_setdensity,		/* �趨�ܶ� */
	EEP_ID_sendint,			/* Զ�����ʱ�� */
	EEP_ID_MAX
} EepromId_t;

extern void Eeprom_Init(void);
extern void Eeprom_Write_Value(EepromId_t eep_id, int32_t *value);
extern void Eeprom_Read_Value(EepromId_t eep_id, int32_t *value);

#endif /* EEPROM_API_H_ */
