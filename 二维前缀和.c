#include <stdio.h>
#define int long long
#define N 10000
//结论：
//以(x1, y1)为左上角，(x2, y2)为右下角的子矩阵的和：
//S[x2, y2] - S[x1 - 1, y2] - S[x2, y1 - 1] + S[x1 - 1, y1 - 1]

int a[N][N], b[N][N];

int main() {
    int n, m, q; 
    scanf("%lld %lld %lld", &n, &m, &q);
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            scanf("%lld", &a[i][j]);
            b[i][j] = a[i][j] + b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1];
            //求前缀和 
        }
    }
    
    while (q--) {
        int x1, y1, x2, y2;
        scanf("%lld %lld %lld %lld", &x1, &y1, &x2, &y2);
        printf("%lld\n", b[x2][y2] - b[x2][y1 - 1] - b[x1 - 1][y2] + b[x1 - 1][y1 - 1]);
        //算子矩阵的和 
    }
    return 0;
}
