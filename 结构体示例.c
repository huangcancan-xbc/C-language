#include <stdio.h>
//ѧ��������+�Ա�+����
//����һ��ѧ������
struct Stu
{
    char name[20];
    char sex[5];
    int age;
};

void Print(struct Stu* ps)
{
    printf("%s %s %d\n", (*ps).name, (*ps).sex, (*ps).age);
    //->
    //�ṹ���ָ��->��Ա��
    printf("%s %s %d\n", ps->name, ps->sex, ps->age);
    //���ִ�ӡ��ʽ�ȼ�
}

int main()
{
    int num = 0;
    struct Stu s = {"zhangsan", "��", 20};
    struct Stu s2 = { "�绨", "Ů", 18 };

    Print(&s);
    
    //��ӡ��ʽ���ṹ�����.��Ա��
    printf("%s\n", s2.name);
    printf("%s\n", s2.sex);
    printf("%d\n", s2.age);

    return 0;
}
