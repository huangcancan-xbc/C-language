#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//��һά���顿��������
//������A�е����ݺ�����B�е����ݽ��н�����������һ����
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
    printf("����������A�ĳ��ȣ�");
    scanf("%d", &n);
    printf("����������A��");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    printf("����������B��");
    for (int i = 0; i < n; i++) {
        scanf("%d", &B[i]);
    }
    printf("����ǰ��\n����A��");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n����B��");
    for (int i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }
    printf("\n������\n");
    swap(A, B, n);
    printf("����A��");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n����B��");
    for (int i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }
    return 0;
}

////����ά���顿��������
////������A�е����ݺ�����B�е����ݽ��н�����������һ����
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