#include <stdio.h>
#define int long long
int a[10000][10000];
int b[10000][10000];
int main()
{
    int n, m, q; 
    scanf("%lld %lld %lld", &n, &m, &q);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            scanf("%lld ",&a[i][j]);
        }
    }

    while(q--)
{
    int x1, y1, x2, y2, k;
    scanf("%lld %lld %lld %lld %lld", &x1, &y1, &x2, &y2, &k);

    // ע����µ�λ��Ҫ���ǵ��������Ӿ���߽磬����Ӱ�쵽��Ŀ������
    b[x1][y1] += k;          // ���Ͻ��ڲ�����
    if(x2+1<=n) b[x2 + 1][y1] -= k;      // ���½��ⲿ��ȥ
    if(y2+1<=m) b[x1][y2 + 1] -= k;      // ���Ͻ��ⲿ��ȥ
    if(x2+1<=n&&y2+1<=m) b[x2 + 1][y2 + 1] += k;  // ���½��ⲿ����
} 
    for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
            	if (i > 1) b[i][j] += b[i - 1][j];  
	            if (j > 1) b[i][j] += b[i][j - 1];  
	            if (i > 1 && j > 1) b[i][j] -= b[i - 1][j - 1]; 
            	
                a[i][j]+=b[i][j];
                printf("%lld ",a[i][j]);
            }
            printf("\n");
        }
    return 0;
}
