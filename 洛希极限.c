#include <stdio.h>
int main()
{
    double kaifang=0,bi=0;
    int shuxing=0;
    scanf("%lf %d %lf",&kaifang,&shuxing,&bi);
    double a;
    if(shuxing==1)
        a=kaifang*1.26;
    else
        a=kaifang*2.455;
    if(bi>a)
         printf("%.2lf ^_^", a);
    else 
        printf("%.2lf T_T", a);
    return 0;
}
