#define _CRT_SECURE_NO_WARNINGS 1

//写一个函数，可以逆序一个字符串的内容

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
    //scanf("%s", arr);//这里有问题，scanf默认读取的时候遇到空格就结束了
    gets(arr);
    //scanf("%[^\n]", arr);//非要使用scanf时，[^\n]表示一直读到换行符为止
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
    //scanf("%s", arr);//这里有问题，scanf默认读取的时候遇到空格就结束了
    gets(arr);
    //a b c d e f \0
    //scanf("%[^\n]", arr);//非要使用scanf时，[^\n]表示一直读到换行符为止
    reverse(arr, arr + strlen(arr) - 1);
    printf("%s\n", arr);

    return 0;
}
