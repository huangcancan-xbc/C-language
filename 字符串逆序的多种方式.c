#define _CRT_SECURE_NO_WARNINGS 1

//дһ����������������һ���ַ���������

#include <stdio.h>
/*
void reverse(char* str)
{
    int left = 0;
    int right = strlen(str)-1;

    while(left<right)
    {
        char tmp = *(str+left);
        *(str+left) = *(str+right);
        *(str+right) = tmp;
        left++;
        right--;
    }
}
*/

void reverse(char* str)
{
    char* left = str;
    char* right = str + strlen(str) - 1;

    while (left < right)
    {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

int main()
{
    char arr[10000] = { 0 };
    //scanf("%s", arr);//���������⣬scanfĬ�϶�ȡ��ʱ�������ո�ͽ�����
    gets(arr);
    //scanf("%[^\n]", arr);//��Ҫʹ��scanfʱ��[^\n]��ʾһֱ�������з�Ϊֹ
    reverse(arr);
    printf("%s\n", arr);

    return 0;
}














void reverse(char* left, char* right)
{
    while (left < right)
    {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

int main()
{
    char arr[10000] = { 0 };
    //scanf("%s", arr);//���������⣬scanfĬ�϶�ȡ��ʱ�������ո�ͽ�����
    gets(arr);
    //a b c d e f \0
    //scanf("%[^\n]", arr);//��Ҫʹ��scanfʱ��[^\n]��ʾһֱ�������з�Ϊֹ
    reverse(arr, arr + strlen(arr) - 1);
    printf("%s\n", arr);

    return 0;
}
