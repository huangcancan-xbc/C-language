#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//【一维数组】交换数组
//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
void swap(int A[], int B[], int n) {
    int temp;
    for (int i = 0; i < n; i++) {
        temp = A[i];
        A[i] = B[i];
        B[i] = temp;
    }
}
int main() 
{
    int A[100], B[100];
    int n;
    printf("请输入数组A的长度：");
    scanf("%d", &n);
    printf("请输入数组A：");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    printf("请输入数组B：");
    for (int i = 0; i < n; i++) {
        scanf("%d", &B[i]);
    }
    printf("交换前：\n数组A：");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n数组B：");
    for (int i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }
    printf("\n交换后：\n");
    swap(A, B, n);
    printf("数组A：");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n数组B：");
    for (int i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }
    return 0;
}

////【二维数组】交换数组
////将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//void swap(int A[][100], int B[][100], int m, int n) {
//    int temp;
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < n; j++) {
//            temp = A[i][j];
//            A[i][j] = B[i][j];
//            B[i][j] = temp;
//        }
//    }
//}