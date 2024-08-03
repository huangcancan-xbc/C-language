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
    char name[name_max];   // name: 姓名
    int age;               // age: 年龄
    char gender[gender_max]; // gender: 性别
    char address[address_max]; // address: 地址
    char phone[phone_max];    // phone: 电话
} Information;

typedef struct Contact {
    Information* data;      // 动态分配的数组，存放联系人信息
    int sz;                 // 当前已经存放的信息的个数
    int capacity;           // 数组的最大容量
} Contact;

// 初始化通讯录
void InitContact(Contact* p);

// 销毁通讯录
void DestroyContact(Contact* p);

// 检查并扩大通讯录容量
void check_capacity(Contact* p);

// 添加联系人
void AddContact(Contact* p);

// 删除联系人
void DeleteContact(Contact* p);

// 搜索联系人
void SearchContacts(const Contact* p);

// 修改联系人信息
void ModifyContact(Contact* p);

// 显示通讯录信息
void ShowContacts(const Contact* p);

// 对联系人排序
void SortContacts(Contact* p);

// 字符串比较函数
int compareStr(const void* a, const void* b);

// 整数比较函数
int compareInt(const void* a, const void* b);

// 通用比较函数
int compare(const void* a, const void* b, int (*cmp)(const void*, const void*));