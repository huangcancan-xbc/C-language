#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//���̴�С
#define HANG 11
#define LIE 11

#define lei_shu 20//�޸����ֿ��Ըı�����

void caidan();

void kaishi();

//��ʼ������
void chushihua(char qizi[HANG][LIE], int hang, int lie, char lei);

//��ӡ����
void printf_qipan(char qizi[HANG][LIE], int hang , int lie );

//������
//void bu_lei(char an_qi[HANG][LIE], int hang, int lie);
void bu_lei(char qi_zi[HANG][LIE], int hang, int lie);


//����
void pai_lei(char an_qi[HANG][LIE], char ming_qi[HANG][LIE], int hang, int lie);

//������ʾ
int ti_shi(char an_qi[HANG][LIE], int x, int y);
