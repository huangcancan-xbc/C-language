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

typedef struct Information		//Information:信息
{
	char name[name_max];		//name:姓名
	int age;					//age:年龄
	char gender[gender_max];	//gender:性别
	char address[address_max];	//address:地址
	char phone[phone_max];		//phone:电话
}Information;

typedef struct Contact
{
	Information data[number];//存放20个人的信息		number：数量		data：数据
	int sz;//当前已经放的信息的个数
}Contact;

void initialize(Contact* p);//初始化

void AddContacts(Contact* p);//增加联系人

void DeleteContacts(Contact* p);//删除指定联系人

void SearchContacts(const Contact* p);//查找联系人

void ModifyContacts(Contact* p);//修改联系人

void ShowContacts(const Contact* p);//显示通讯录信息

void SortContacts(Contact* p);//对联系人排序


//排序所用函数比较的指针
int compareName(const void* a, const void* b);
int compareAge(const void* a, const void* b);
int compareGender(const void* a, const void* b);
int compareAddress(const void* a, const void* b);
int comparePhone(const void* a, const void* b);
