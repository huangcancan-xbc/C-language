#define _CRT_SECURE_NO_WARNINGS 1
//编写一个函数 reverse_string(char* string)（递归实现）
//
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//
//要求：不能使用C函数库中的字符串操作函数。
//
//比如 :
//
//char arr[] = "abcdef";
//
//逆序之后数组的内容变成：fedcba
#include <stdio.h>
#include <string.h>
void reverse_string(char* shou, char* mo)
{
    if (shou >= mo)
    {
        return;
    }

    char temp = *shou;
    *shou = *mo;
    *mo = temp;

    reverse_string(shou + 1, mo - 1);
}
    
int main() {
    char a[100];
    printf("请输入一串字符串：");
    scanf("%s", a);

    printf("这个字符串的逆序是：");
    reverse_string(a, a + strlen(a) - 1);
    printf("%s", a);
    return 0;
}

//高级版本：
//#include <stdio.h>
//
//void reverse_string(char* shou, char* mo) {
//    if (shou >= mo) { // 修改终止条件
//        return;
//    }
//
//    char temp = *shou;
//    *shou = *mo;
//    *mo = temp;
//
//    reverse_string(shou + 1, mo - 1);
//}
//
//int main() {
//    char a[100];
//    printf("请输入一串字符串：");
//    scanf("%s", a);
//
//    int len = 0;
//    for (; a[len] != '\0'; len++); // 手动计算字符串长度
//
//    printf("这个字符串的逆序是：");
//    reverse_string(a, a + len - 1); // 使用手动计算的长度
//
//    printf("%s\n", a);
//    return 0;
//}