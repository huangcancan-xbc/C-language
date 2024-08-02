#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#define number 20
#define name_max 10
#define gender_max 5
#define address_max 15
#define phone_max 12

typedef struct Information		//Information:��Ϣ
{
	char name[name_max];		//name:����
	int age;					//age:����
	char gender[gender_max];	//gender:�Ա�
	char address[address_max];	//address:��ַ
	char phone[phone_max];		//phone:�绰
}Information;

typedef struct Contact
{
	Information data[number];//���20���˵���Ϣ		number������		data������
	int sz;//��ǰ�Ѿ��ŵ���Ϣ�ĸ���
}Contact;

void initialize(Contact* p);//��ʼ��

void AddContacts(Contact* p);//������ϵ��

void DeleteContacts(Contact* p);//ɾ��ָ����ϵ��

void SearchContacts(const Contact* p);//������ϵ��

void ModifyContacts(Contact* p);//�޸���ϵ��

void ShowContacts(const Contact* p);//��ʾͨѶ¼��Ϣ

void SortContacts(Contact* p);//����ϵ������


//�������ú����Ƚϵ�ָ��
int compareName(const void* a, const void* b);
int compareAge(const void* a, const void* b);
int compareGender(const void* a, const void* b);
int compareAddress(const void* a, const void* b);
int comparePhone(const void* a, const void* b);
