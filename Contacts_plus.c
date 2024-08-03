#define _CRT_SECURE_NO_WARNINGS 1
#include "Contacts_plus.h"

// 初始化通讯录
void InitContact(Contact* p) 
{
    assert(p);
    p->sz = 0;
    p->capacity = DEFAULT_SZ;
    p->data = (Information*)calloc(p->capacity, sizeof(Information));

    if (p->data == NULL) 
    {
        perror("InitContact::calloc");
        exit(EXIT_FAILURE);
    }
}

// 销毁通讯录
void DestroyContact(Contact* p) 
{
    free(p->data);
    p->data = NULL;
    p->capacity = 0;
    p->sz = 0;
}

// 检查并扩大通讯录容量
void check_capacity(Contact* p) 
{
    assert(p);
    if (p->sz == p->capacity) 
    {
        Information* newData = (Information*)realloc(p->data, (p->capacity + INC_SZ) * sizeof(Information));

        if (newData == NULL) 
        {
            perror("check_capacity::realloc");
            exit(EXIT_FAILURE);
        }

        p->data = newData;
        p->capacity += INC_SZ;
    }
}

// 添加联系人
void AddContact(Contact* p) 
{
    assert(p);
    check_capacity(p);

    printf("请输入名字:");
    scanf("%s", p->data[p->sz].name);
    printf("请输入年龄:");
    scanf("%d", &(p->data[p->sz].age));
    printf("请输入性别:");
    scanf("%s", p->data[p->sz].gender);
    printf("请输入地址:");
    scanf("%s", p->data[p->sz].address);
    printf("请输入电话:");
    scanf("%s", p->data[p->sz].phone);

    p->sz++;
}

// 删除联系人
void DeleteContact(Contact* p) 
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

    int index = -1;
    for (int i = 0; i < p->sz; i++) 
    {
        if (strcmp(p->data[i].name, name) == 0) 
        {
            index = i;
            break;
        }
    }

    if (index == -1) 
    {
        printf("要删除的联系人不存在！\n");
        return;
    }

    for (int i = index; i < p->sz - 1; i++) 
    {
        p->data[i] = p->data[i + 1];
    }
    p->sz--;

    printf("删除联系人成功！\n");
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

// 搜索联系人
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

// 修改联系人信息
void ModifyContact(Contact* p) 
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

    int index = -1;
    for (int i = 0; i < p->sz; i++) 
    {
        if (strcmp(p->data[i].name, name) == 0) 
        {
            index = i;
            break;
        }
    }

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

// 显示通讯录信息
void ShowContacts(const Contact* p) 
{
    assert(p);
    printf("%-10s\t%-5s\t%-5s\t%-15s\t%-12s\n", "姓名", "年龄", "性别", "地址", "电话");
    for (int i = 0; i < p->sz; i++) 
    {
        printf("%-10s\t%-5d\t%-5s\t%-15s\t%-12s\n",
            p->data[i].name, p->data[i].age,
            p->data[i].gender, p->data[i].address,
            p->data[i].phone);
    }
}

// 对联系人排序
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
        qsort(p->data, p->sz, sizeof(Information), (int (*)(const void*, const void*))compareStr);
        break;
    case 2:
        qsort(p->data, p->sz, sizeof(Information), (int (*)(const void*, const void*))compareInt);
        break;
    case 3:
        qsort(p->data, p->sz, sizeof(Information), (int (*)(const void*, const void*))compareStr);
        break;
    case 4:
        qsort(p->data, p->sz, sizeof(Information), (int (*)(const void*, const void*))compareStr);
        break;
    case 5:
        qsort(p->data, p->sz, sizeof(Information), (int (*)(const void*, const void*))compareStr);
        break;
    default:
        printf("输入错误，请重新输入！\n");
        break;
    }
    ShowContacts(p);
}

// 字符串比较函数
int compareStr(const void* a, const void* b) 
{
    return strcmp(*(char**)a, *(char**)b);
}

// 整数比较函数
int compareInt(const void* a, const void* b) 
{
    return *(int*)a - *(int*)b;
}

// 通用比较函数
int compare(const void* a, const void* b, int (*cmp)(const void*, const void*)) 
{
    return cmp(a, b);
}