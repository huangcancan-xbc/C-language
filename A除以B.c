#include <stdio.h>
int main(){
    int A,B;
    scanf("%d %d",&A,&B);
    double c;
    c=(double)A / B;
    if(B>0)
    {
        printf("%d/%d=%.2lf",A,B,c);
    }
    else if(B<0)
    {
        printf("%d/(%d)=%.2lf",A,B,c);
    }
    else 
    {
        printf("%d/%d=Error",A,B);
    }
    return 0;
}
