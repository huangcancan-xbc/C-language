#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ʹ�ú���ʵ���������
//����һ���������飬��ɶ�����Ĳ���
//
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��


void init(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        arr[i] = 0;
    }
}

void print(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void reverse(int arr[])
{
    int temp;
    for (int i = 0; i < 5 / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;
    }
}

int main()
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    //init(arr, 5);
    print(arr, 5);
    reverse(arr, 5);
    print(arr, 5);
    return 0;
}
