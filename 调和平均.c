#include <stdio.h>
int main()
{
    int n=0,i=0;
    scanf("%d",&n);
    double a[n];
    while (i<n&&scanf("%lf",&a[i])==1)
    {
     i++;
    }
 double sum=0;
 for(int j=0;j<n;j++)
 {
  sum+=1/a[j];
 }double b=sum/n;
 printf("%.2lf",1/b);
 return 0;
}
