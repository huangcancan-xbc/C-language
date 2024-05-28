#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(b==0)
    {
        if(a==0)
        {
            printf("biii\n");
            printf("stop");
        }
        else if(a==1)
        {
            printf("dudu\n");
            printf("move");
        }else{
            printf("-\n");
            printf("stop");
        }
    }else if(b==1)
    {
        if(a==0)
        {
            printf("-\n");
            printf("stop");
        }
        else if(a==1)
        {
            printf("-\n");
            printf("move");
        }else{
            printf("-\n");
            printf("stop");
    }
	}return 0;
}
