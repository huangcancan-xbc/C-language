#define _CRT_SECURE_NO_WARNINGS 1

//BC107 ����ת��

#include <stdio.h>

int main() {
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d ", &a[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}