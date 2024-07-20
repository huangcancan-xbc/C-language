#define _CRT_SECURE_NO_WARNINGS 1

//BC100 - 有序序列合并
#include <stdio.h>

int main()
{
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);
    int arr1[n];
    int arr2[m];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int arr3[2000];
    for (int i = 0; i < n; i++)
    {
        arr3[i] = arr1[i];
    }
    for (int i = n; i < m + n; i++)
    {
        arr3[i] = arr2[i - n];
    }

    for (int i = 0; i < m + n - 1; i++)
    {
        for (int j = 0; j < m + n - 1 - i; j++)
        {
            if (arr3[j + 1] < arr3[j])
            {
                int temp = arr3[j];
                arr3[j] = arr3[j + 1];
                arr3[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < m + n; i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}



//int main()
// {
//int arr2[1000] = { 0 };
////输入
//scanf("%d %d", &n, &m);
//int i = 0;
//for (i = 0; i < n; i++)
//{
//    scanf("%d", &arr1[i]);
//}
//for (i = 0; i < m; i++)
//{
//    scanf("%d", &arr2[i]);
//}
////处理
//int j = 0;
//i = 0;
//while (i < n && j < m)
//{
//    if (arr1[i] < arr2[j])
//    {
//        printf("%d ", arr1[i]);
//        i++;
//    }
//    else
//    {
//        printf("%d ", arr2[j]);
//        j++;
//    }
//}
//if (i == n)
//{
//    for (; j < m; j++)
//    {
//        printf("%d ", arr2[j]);
//    }
//}
//else
//{
//    for (; i < n; i++)
//    {
//        printf("%d ", arr1[i]);
//    }
//}
//return 0;
//}