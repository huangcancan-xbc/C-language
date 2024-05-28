#include <stdio.h>
int main()
{
 double n=0,m=0;
 scanf("%lf %lf",&n,&m);
 double p;
 for(int i=0;i<n;i++)
 {
  scanf("%lf\n",&p);
  if(p<m)
   printf("On Sale! %.1lf\n",p);
 }
 return 0;
}
