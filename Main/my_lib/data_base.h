#ifndef __DATA_BASE_H
#define __DATA_BASE_H

#include "stm32f4xx.h"

static u8 Send_To_Android[12]={0x66,0x05,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xBB};

static u8 TFT_S[8] = {0x55,0x0b,0x10,0x01,0x00,0x00,0x11,0xbb};	//TFT���Ϸ�ҳ
static u8 TFT_X[8] = {0x55,0x0b,0x10,0x02,0x00,0x00,0x12,0xbb};	//TFT���·�ҳ

static u8 Light_Start[8]={0x55,0x0E,0x01,0x00,0x00,0x00,0x01,0xBB};  //��ͨ��ʶ��ʼ
static u8 Light_Red[8]={0x55,0x0E,0x02,0x01,0x00,0x00,0x03,0xBB};  //��ͨ��ʶ��ȷ��
static u8 Light_Green[8]={0x55,0x0E,0x02,0x02,0x00,0x00,0x04,0xBB};  //��ͨ��ʶ��ȷ��
static u8 Light_Yellow[8]={0x55,0x0E,0x02,0x03,0x00,0x00,0x05,0xBB};  //��ͨ��ʶ��ȷ��

static u8 H_S[4]={0x80,0x7F,0x05,~(0x05)};	 //��Ƭ�Ϸ�
static u8 H_X[4]={0x80,0x7F,0x1B,~(0x1B)};	 //��Ƭ�·�

static u8 H_1[4]={0x00,0xFF,0x0C,~(0x0C)};	 //��Դ��λ��1
static u8 H_2[4]={0x00,0xFF,0x18,~(0x18)};	 //��Դ��λ��2
static u8 H_3[4]={0x00,0xFF,0x5E,~(0x5E)};	 //��Դ��λ��3

static u8 H_SD[4]={0x00,0xFF,0x45,~(0x45)};	  //��������ϵͳ��

static u8 HW_K[6]={0x03,0x05,0x14,0x45,0xDE,0x92};  //��������
static u8 HW_G[6]={0x67,0x34,0x78,0xA2,0xFD,0x27};	//�������ر�

static u8 CP_SJ[6]={0x4B,0x33,0x36,0x35,0x47,0x39};	//��������
static u8 TX_SJ[6]={0xFF,0x13,0x01,0x00,0x00,0x00};	//ͼ������

static u8 DZ_K[8]={0x55,0x03,0x01,0x01,0x00,0x00,0x02,0xBB};  //��բ����
static u8 DZ_G[8]={0x55,0x03,0x01,0x02,0x00,0x00,0x03,0xBB};  //��բ�ر�	
static u8 DZ_CP1[8]={0x55,0x03,0x10,0x4B,0x33,0x36,0xC4,0xBB};	//��բ������Ϣǰ��λ //��K365G9
static u8 DZ_CP2[8]={0x55,0x03,0x11,0x35,0x47,0x39,0xC6,0xBB};	//��բ������Ϣ����λ

static u8 SMG_SHOW[8]={0x55,0x04,0x02,0xA1,0xB2,0xC3,0x18,0xBB};  //�������ʾ
static u8 SMG_JSK[8]={0x55,0x04,0x03,0x01,0x00,0x00,0x04,0xBB};  //����ܿ�ʼ��ʱ
static u8 SMG_JSG[8]={0x55,0x04,0x03,0x00,0x00,0x00,0x03,0xBB};  //����ܹرռ�ʱ
static u8 SMG_JL[8]={0x55,0x04,0x04,0x00,0x02,0x00,0x06,0xBB};  //�������ʾ����

static u8 CP_SHOW1[6]={0xFF,0x20,0x4E,0x34,0x30,0x30};
static u8 CP_SHOW2[6]={0xFF,0x10,0x59,0x36,0x41,0x33};

static u8 CD_K[8]={0x55,0x0A,0x01,0x01,0x00,0x00,0x02,0xBB};  //���߳�翪��
static u8 CD_G[8]={0x55,0x0A,0x01,0x00,0x00,0x00,0x01,0xBB};  //���߳��ر�	

static u8 cpfs1[6] = {0xff,0x20,0x4B,0x33,0x36,0x35};	//������ʾ������Ϣǰ��λ
static u8 cpfs2[6] = {0xff,0x10,0x47,0x39,0x42,0x32};	//������ʾ������Ϣ����λ	//��K365G9��B2

static u8 Car_Where[1];	//���泵����ʼ����
static u8 Car_3D_Info[8] = {0x55,0x0D,0x02,0x01,0x00,0x00,0x03,0xbb};	//ѯ�ʳ����ڵڼ���
static u8 Car_3D_Down_1[8] = {0x55,0x0D,0x01,0x01,0x00,0x00,0x02,0xbb};	//�����һ��
static u8 Car_3D_Down_2[8] = {0x55,0x0D,0x01,0x02,0x00,0x00,0x03,0xbb};	//����ڶ���
static u8 Car_3D_Down_3[8] = {0x55,0x0D,0x01,0x03,0x00,0x00,0x04,0xbb};	//���������
static u8 Car_3D_Down_4[8] = {0x55,0x0D,0x01,0x04,0x00,0x00,0x05,0xbb};	//������Ĳ�


/////�ӳ�����
static u8 AGV_Track[8] = {0x55,0x02,0x06,0x50,0x00,0x00,0x56,0xBB}; //�ӳ�ѭ�� sp=80(0x50)
static u8 AGV_Go[8] = {0x55,0x02,0x02,0x50,0x7C,0x01,0xCF,0xBB}; //�ӳ�ǰ�� sp=80(0x50) mp=380(0x01,0xCF)
static u8 AGV_Back[8] = {0x55,0x02,0x03,0x50,0x78,0x05,0xD0,0xBB}; //�ӳ����� sp=80(0x50) mp=1400(0x05,0x78)
static u8 AGV_Left[8] = {0x55,0x02,0x04,0x50,0xC2,0x01,0x17,0xBB};	//�ӳ���ת
static u8 AGV_Right[8] = {0x55,0x02,0x05,0x50,0xC2,0x01,0x18,0xBB};	//�ӳ���ת
static u8 AGV_Left45[8] = {0x55,0x02,0x08,0x50,0xA4,0x01,0xFD,0xBB};	//�ӳ���ת45
static u8 AGV_Right45[8] = {0x55,0x02,0x09,0x50,0xA4,0x01,0xFE,0xBB};	//�ӳ���ת45
static u8 AGV_Special[8] = {0x55,0x02,0x67,0x00,0x00,0x00,0x67,0xBB};	//�ӳ��������
static u8 AGV_Ultrasonic[8] = {0x55,0x02,0x80,0x01,0x00,0x00,0x81,0xBB}; //�ӳ����������
static u8 AGV_Clean[8] = {0x55,0x02,0x80,0x00,0x00,0x00,0x80,0xBB}; //�ӳ������������
static u8 AGV_Light[8] = {0x55,0x02,0x66,0x03,0x00,0x00,0x69,0xBB};	//�ӳ����⵽3��
static u8 AGV_HWK[8] = {0x55,0x02,0x64,0x00,0x00,0x00,0x64,0xBB};	//�ӳ��������̨

static u8 AGV_Start[8] = {0x55,0x02,0x99,0x00,0x00,0x00,0x99,0xBB};	//�ӳ���ʼȫ�Զ�--���峵��
static u8 AGV_Start_tsdx[8] = {0x55,0x02,0x94,0x00,0x00,0x00,0x94,0xBB};	//�ӳ���ʼȫ�Զ�--�������
static u8 AGV_Start_fht[8] = {0x55,0x02,0x95,0x00,0x00,0x00,0x95,0xBB};	//�ӳ���ʼȫ�Զ�--���̨
static u8 AGV_Start_ewm[8] = {0x55,0x02,0x96,0x00,0x00,0x00,0x96,0xBB};	//�ӳ���ʼȫ�Զ�--��ά��


static u8 AGV_Start2[8] = {0x55,0x02,0x99,0x00,0x00,0x00,0x99,0xBB};	//�ӳ���ʼȫ�Զ�2

static u8 Send_TFT[8] = {0x55,0x0B,0x00,0x00,0x00,0x00,0x00,0xBB};	//TFT����ָ��

#define Principal_Length 50
#define Follower_Length  50

extern uint8_t Principal_Tab[Principal_Length]; 
extern uint8_t Follower_Tab[Follower_Length];

#endif
