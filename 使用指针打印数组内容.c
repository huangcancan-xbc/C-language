#define _CRT_SECURE_NO_WARNINGS 1

//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣arr��һ������һά���顣
#include <stdio.h>

void print(int arr[],int sz,int* p)
{
    for (int i = 0; i < sz; i++)
    {
        printf("%d ", *(arr + i));
        //printf("%d ", *(p + i));
        //printf("%d ",i[arr]);
    }
}

int main() {
    int arr[] = { 1,2,3,4,5 };
    int* p = arr;
    int sz = sizeof(arr) / sizeof(arr[0]);
    print(arr,sz,p);

    return 0;
}