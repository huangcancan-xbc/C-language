#define _CRT_SECURE_NO_WARNINGS 1
#include "Contacts.h"

void initialize(Contact* p)
{
	assert(p);
	p->sz = 0;
	memset(p->data, 0, sizeof(p->data));
}

void AddContacts(Contact* p)
{
	assert(p);
	if (p->sz == number)
	{
		printf("通讯录已满，无法添加新的联系人！\n");
		return;
	}

	printf("请输入姓名：");
	scanf("%s", &p->data[p->sz].name);
	printf("请输入年龄：");
	scanf("%d", &p->data[p->sz].age);
	printf("请输入性别：");
	scanf("%s", &p->data[p->sz].gender);
	printf("请输入地址：");
	scanf("%s", &p->data[p->sz].address);
	printf("请输入电话：");
	scanf("%s", &p->data[p->sz].phone);

	p->sz++;
}

//查找姓名函数
int lookup_name(const Contact* p, char name[])
{
	assert(p);
	for (int i = 0; i < p->sz; i++)
	{
		if (strcmp(p->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}

void DeleteContacts(Contact* p)
{
	assert(p);
	char name[name_max] = { 0 };
	if (p->sz == 0)
	{
		printf("通讯录是空的，无法进行删除操作！\n");
		return;
	}

	printf("请输入需要删除的联系人的姓名：");
	scanf("%s", name);

	int temp=lookup_name(p, name);
	if (temp == -1)
	{
		printf("要删除的联系人不存在！\n");
		return;
	}

	for (int i = temp; i < p->sz - 1; i++)
	{
		p->data[i] = p->data[i + 1];
	}
	p->sz--;

	printf("删除联系人成功！\n");
}


void SearchContacts(const Contact* p)
{
	assert(p);
	char name[name_max] = { 0 };
	printf("请输入需要查找联系人的姓名：");
	scanf("%s", name);

	int temp = lookup_name(p, name);

	if (temp == -1)
	{
		printf("抱歉，要查找的联系人不存在！\n");
	}
	else
	{
		printf("%-10s\t%-5s\t%-5s\t%-15s\t%-12s\n", "姓名", "年龄", "性别", "地址", "电话");
		printf("%-10s\t%-5d\t%-5s\t%-15s\t%-12s\n", p->data[temp].name, p->data[temp].age, p->data[temp].gender, p->data[temp].address, p->data[temp].phone);
	}
	
}

void ModifyContacts(Contact* p)
{
	assert(p);

	if (p->sz == 0)
	{
		printf("通讯录是空的，无法进行修改操作！\n");
		return;
	}

	char name[name_max] = { 0 };
	printf("请输入需要修改的联系人的姓名：");
	scanf("%s", name);

	int index = lookup_name(p, name);

	if (index == -1)
	{
		printf("要修改的联系人不存在！\n");
		return;
	}

	Information* info = &p->data[index];

	printf("请选择需要修改的信息类型:\n");
	printf("1. 姓名\n2. 年龄\n3. 性别\n4. 地址\n5. 电话\n");
	int modifyInput;
	printf("请输入数字选择修改的信息类型：");
	scanf("%d", &modifyInput);

	switch (modifyInput)
	{
	case 1: // 修改姓名
		printf("请输入新的姓名：");
		scanf("%s", info->name);
		break;
	case 2: // 修改年龄
		printf("请输入新的年龄：");
		scanf("%d", &info->age);
		break;
	case 3: // 修改性别
		printf("请输入新的性别：");
		scanf("%s", info->gender);
		break;
	case 4: // 修改地址
		printf("请输入新的地址：");
		scanf("%s", info->address);
		break;
	case 5: // 修改电话
		printf("请输入新的电话：");
		scanf("%s", info->phone);
		break;
	default:
		printf("输入错误，请重新输入！\n");
		break;
	}

	printf("联系人信息已更新！\n");
}

void ShowContacts(const Contact* p)
{
	assert(p);
	printf("%-10s\t%-5s\t%-5s\t%-15s\t%-12s\n", "姓名", "年龄", "性别", "地址", "电话");
	for (int i = 0; i < p->sz; i++)
	{
		printf("%-10s\t%-5d\t%-5s\t%-15s\t%-12s\n", p->data[i].name, p->data[i].age, p->data[i].gender, p->data[i].address, p->data[i].phone);
	}
}



int compareName(const void* a, const void* b) {
	return strcmp(((Information*)a)->name, ((Information*)b)->name);
}

int compareAge(const void* a, const void* b) {
	return ((Information*)a)->age - ((Information*)b)->age;
}

int compareGender(const void* a, const void* b) {
	return strcmp(((Information*)a)->gender, ((Information*)b)->gender);
}

int compareAddress(const void* a, const void* b) {
	return strcmp(((Information*)a)->address, ((Information*)b)->address);
}

int comparePhone(const void* a, const void* b) {
	return strcmp(((Information*)a)->phone, ((Information*)b)->phone);
}
	

void SortContacts(Contact* p)
{
	assert(p);
	printf("请选择排序方式：\n");
	printf("1. 姓名\n2. 年龄\n3. 性别\n4. 地址\n5. 电话\n");
	int sortInput;
	printf("请输入数字选择排序依据：");
	scanf("%d", &sortInput);

	switch (sortInput)
	{
		case 1:
			qsort(p->data, p->sz, sizeof(Information), compareName);
			break;
		case 2:
			qsort(p->data, p->sz, sizeof(Information), compareAge);
			break;
		case 3:
			qsort(p->data, p->sz, sizeof(Information), compareGender);
			break;
		case 4:
			qsort(p->data, p->sz, sizeof(Information), compareAddress);
			break;
		case 5:
			qsort(p->data, p->sz, sizeof(Information), comparePhone);
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
	}
	ShowContacts(p);
}

