#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define HANG 3
#define LIE 3

// 1��ʼ��Ϸ
void kaishi();

// 2�˵�
void caidan();

// 3��Ϸ
void game();

//����
void qipan(char qizi[HANG][LIE], int hang, int lie);

//��ӡ����
void printf_jiemian(char qizi[HANG][LIE], int hang, int lie);

//�������
void wanjia(char qizi[HANG][LIE], int hang, int lie);

//��������
void computer(char qizi[HANG][LIE], int x, int y);

//�����Ƿ�����
static int is_full(char qizi[HANG][LIE], int hang, int lie);

//�ж���Ӯ
char ying(char qizi[HANG][LIE], int hang, int lie);