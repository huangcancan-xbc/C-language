#define _CRT_SECURE_NO_WARNINGS 1

//BC106 上三角矩阵判定
#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d ", &a[i][j]);
        }
    }
    int temp = 1;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i][j] != 0)
            {
                temp = 0;
            }
        }
    }
    if (temp)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}


//#include <stdio.h>
//
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int a[n][n];
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &a[i][j]);
//        }
//    }
//    //判断
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            if (i > j)
//            {
//                if (a[i][j] != 0)
//                {
//                    //下三角有不是0的就不满足
//                    printf("NO");
//                    return 0;
//                }
//            }
//        }
//    }
//    printf("YES");
//    return 0;
//}
//
