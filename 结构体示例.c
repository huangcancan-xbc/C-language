#include <stdio.h>
//学生：名字+性别+年龄
//定义一个学生类型
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
    //结构体的指针->成员名
    printf("%s %s %d\n", ps->name, ps->sex, ps->age);
    //两种打印方式等价
}

int main()
{
    int num = 0;
    struct Stu s = {"zhangsan", "男", 20};
    struct Stu s2 = { "如花", "女", 18 };

    Print(&s);
    
    //打印方式：结构体变量.成员名
    printf("%s\n", s2.name);
    printf("%s\n", s2.sex);
    printf("%d\n", s2.age);

    return 0;
}
