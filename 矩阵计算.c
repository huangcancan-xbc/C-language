#define _CRT_SECURE_NO_WARNINGS 1

//BC90 æÿ’Ûº∆À„
#include <stdio.h>

int main() {
    int n = 0, m = 0;
    scanf("%d%d", &n, &m);
    int a[n][m];
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] > 0)
            {
                temp += a[i][j];
            }
        }
    }
    printf("%d", temp);
    return 0;
}