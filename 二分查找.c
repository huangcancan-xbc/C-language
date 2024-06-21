#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// ���ֲ��Һ���
int chazhao(int arr[], int a, int b) {
    int c = 0;
    int d = a - 1;

    while (c <= d) {
        int mid = c + (d - c) / 2; // ��ֹ(a + right)���
        if (arr[mid] == b) {
            return mid; // �ҵ�Ŀ��ֵ�������±�
        }
        else if (arr[mid] < b) {
            c = mid + 1; // ���Ұ벿�ּ�������
        }
        else {
            d = mid - 1; // ����벿�ּ�������
        }
    }

    return -1; // û���ҵ�Ŀ��ֵ������-1
}

int main() {
    int arr[] = { 2, 5, 8, 12, 16, 23, 38, 56, 72, 91 }; // ʾ����������
    int n = sizeof(arr) / sizeof(arr[0]); // �����С
    int target = 23; // ��Ҫ���ҵ�Ŀ��ֵ
    //����
    //int n=0;
    //scanf("%d",&n);
    //��targetȫ���ĳ�n����
    int result = chazhao(arr, n, target);
    if (result != -1) {
        printf("�ҵ�����ֵλ���±�: %d\n", result);
    }
    else {
        printf("�Ҳ�����\n");
    }

    return 0;
}