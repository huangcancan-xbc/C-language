#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#define DEFAULT_SZ 20
#define INC_SZ 10
#define name_max 10
#define gender_max 5
#define address_max 15
#define phone_max 12

typedef struct Information {
    char name[name_max];   // name: ����
    int age;               // age: ����
    char gender[gender_max]; // gender: �Ա�
    char address[address_max]; // address: ��ַ
    char phone[phone_max];    // phone: �绰
} Information;

typedef struct Contact {
    Information* data;      // ��̬��������飬�����ϵ����Ϣ
    int sz;                 // ��ǰ�Ѿ���ŵ���Ϣ�ĸ���
    int capacity;           // ������������
} Contact;

// ��ʼ��ͨѶ¼
void InitContact(Contact* p);

// ����ͨѶ¼
void DestroyContact(Contact* p);

// ��鲢����ͨѶ¼����
void check_capacity(Contact* p);

// �����ϵ��
void AddContact(Contact* p);

// ɾ����ϵ��
void DeleteContact(Contact* p);

// ������ϵ��
void SearchContacts(const Contact* p);

// �޸���ϵ����Ϣ
void ModifyContact(Contact* p);

// ��ʾͨѶ¼��Ϣ
void ShowContacts(const Contact* p);

// ����ϵ������
void SortContacts(Contact* p);

// �ַ����ȽϺ���
int compareStr(const void* a, const void* b);

// �����ȽϺ���
int compareInt(const void* a, const void* b);

// ͨ�ñȽϺ���
int compare(const void* a, const void* b, int (*cmp)(const void*, const void*));