#include <stdio.h>
int main(){
    double m,h;
    scanf("%lf %lf",&m,&h);
    double c;
    c=m/(h*h);
    printf("%.1lf\n",c);
    if(c>25){
        printf("PANG");
    }else{
        printf("Hai Xing");
    }return 0;
}
