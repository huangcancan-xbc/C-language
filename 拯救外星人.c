#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int c=a+b;
    int f=1;
    for(int i=1;i<c+1;i++){
        f*=i;
    }printf("%d",f);
    return 0;
}
