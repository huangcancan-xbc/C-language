#define _CRT_SECURE_NO_WARNINGS 1

//BC96-有序序列判断
#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[0] <= arr[1])
        {
            if (arr[i] <= arr[i + 1])
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        }
        else if (arr[0] >= arr[1])
        {
            if (arr[i] >= arr[i + 1])
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        }
    }

    if (flag == 1)
    {
        printf("sorted");
    }
    else {
        printf("unsorted");
    }
    return 0;
}





//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int arr[50] = { 0 };
//    scanf("%d", &n);
//    int i = 0;
//    int flag1 = 0;
//    int flag2 = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (i > 0)
//        {
//            if (arr[i] > arr[i - 1])
//                flag1 = 1;
//            else if (arr[i] < arr[i - 1])
//                flag2 = 1;
//        }
//    }
//    //flag1 和 flag2 都为1是乱序的
//    if (flag1 + flag2 > 1)
//        printf("unsorted\n");
//    else
//        printf("sorted\n");
//    return 0;
//}

