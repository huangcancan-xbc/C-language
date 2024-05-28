#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(c==a*b)
            printf("Lv Yan\n");
        else if(c==a+b)
            printf("Tu Dou\n");
        else printf("zhe du shi sha ya!\n");
    }return 0;
}
