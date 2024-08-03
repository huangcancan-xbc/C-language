#define _CRT_SECURE_NO_WARNINGS 1
#include "Contacts_plus.h"

// ��ʼ��ͨѶ¼
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

// ����ͨѶ¼
void DestroyContact(Contact* p) 
{
    free(p->data);
    p->data = NULL;
    p->capacity = 0;
    p->sz = 0;
}

// ��鲢����ͨѶ¼����
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

// �����ϵ��
void AddContact(Contact* p) 
{
    assert(p);
    check_capacity(p);

    printf("����������:");
    scanf("%s", p->data[p->sz].name);
    printf("����������:");
    scanf("%d", &(p->data[p->sz].age));
    printf("�������Ա�:");
    scanf("%s", p->data[p->sz].gender);
    printf("�������ַ:");
    scanf("%s", p->data[p->sz].address);
    printf("������绰:");
    scanf("%s", p->data[p->sz].phone);

    p->sz++;
}

// ɾ����ϵ��
void DeleteContact(Contact* p) 
{
    assert(p);
    char name[name_max] = { 0 };

    if (p->sz == 0) 
    {
        printf("ͨѶ¼�ǿյģ��޷�����ɾ��������\n");
        return;
    }

    printf("��������Ҫɾ������ϵ�˵�������");
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
        printf("Ҫɾ������ϵ�˲����ڣ�\n");
        return;
    }

    for (int i = index; i < p->sz - 1; i++) 
    {
        p->data[i] = p->data[i + 1];
    }
    p->sz--;

    printf("ɾ����ϵ�˳ɹ���\n");
}

//������������
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

// ������ϵ��
void SearchContacts(const Contact* p)
{
    assert(p);
    char name[name_max] = { 0 };
    printf("��������Ҫ������ϵ�˵�������");
    scanf("%s", name);

    int temp = lookup_name(p, name);

    if (temp == -1)
    {
        printf("��Ǹ��Ҫ���ҵ���ϵ�˲����ڣ�\n");
    }
    else
    {
        printf("%-10s\t%-5s\t%-5s\t%-15s\t%-12s\n", "����", "����", "�Ա�", "��ַ", "�绰");
        printf("%-10s\t%-5d\t%-5s\t%-15s\t%-12s\n", p->data[temp].name, p->data[temp].age, p->data[temp].gender, p->data[temp].address, p->data[temp].phone);
    }

}

// �޸���ϵ����Ϣ
void ModifyContact(Contact* p) 
{
    assert(p);

    if (p->sz == 0) 
    {
        printf("ͨѶ¼�ǿյģ��޷������޸Ĳ�����\n");
        return;
    }

    char name[name_max] = { 0 };
    printf("��������Ҫ�޸ĵ���ϵ�˵�������");
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
        printf("Ҫ�޸ĵ���ϵ�˲����ڣ�\n");
        return;
    }

    Information* info = &p->data[index];

    printf("��ѡ����Ҫ�޸ĵ���Ϣ����:\n");
    printf("1. ����\n2. ����\n3. �Ա�\n4. ��ַ\n5. �绰\n");
    int modifyInput;
    printf("����������ѡ���޸ĵ���Ϣ���ͣ�");
    scanf("%d", &modifyInput);

    switch (modifyInput) 
    {
    case 1: // �޸�����
        printf("�������µ�������");
        scanf("%s", info->name);
        break;
    case 2: // �޸�����
        printf("�������µ����䣺");
        scanf("%d", &info->age);
        break;
    case 3: // �޸��Ա�
        printf("�������µ��Ա�");
        scanf("%s", info->gender);
        break;
    case 4: // �޸ĵ�ַ
        printf("�������µĵ�ַ��");
        scanf("%s", info->address);
        break;
    case 5: // �޸ĵ绰
        printf("�������µĵ绰��");
        scanf("%s", info->phone);
        break;
    default:
        printf("����������������룡\n");
        break;
    }

    printf("��ϵ����Ϣ�Ѹ��£�\n");
}

// ��ʾͨѶ¼��Ϣ
void ShowContacts(const Contact* p) 
{
    assert(p);
    printf("%-10s\t%-5s\t%-5s\t%-15s\t%-12s\n", "����", "����", "�Ա�", "��ַ", "�绰");
    for (int i = 0; i < p->sz; i++) 
    {
        printf("%-10s\t%-5d\t%-5s\t%-15s\t%-12s\n",
            p->data[i].name, p->data[i].age,
            p->data[i].gender, p->data[i].address,
            p->data[i].phone);
    }
}

// ����ϵ������
void SortContacts(Contact* p) 
{
    assert(p);
    printf("��ѡ������ʽ��\n");
    printf("1. ����\n2. ����\n3. �Ա�\n4. ��ַ\n5. �绰\n");
    int sortInput;
    printf("����������ѡ���������ݣ�");
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
        printf("����������������룡\n");
        break;
    }
    ShowContacts(p);
}

// �ַ����ȽϺ���
int compareStr(const void* a, const void* b) 
{
    return strcmp(*(char**)a, *(char**)b);
}

// �����ȽϺ���
int compareInt(const void* a, const void* b) 
{
    return *(int*)a - *(int*)b;
}

// ͨ�ñȽϺ���
int compare(const void* a, const void* b, int (*cmp)(const void*, const void*)) 
{
    return cmp(a, b);
}