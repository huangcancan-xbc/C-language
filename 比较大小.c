#include <stdio.h>
int main(){
    int a, b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        int t;
        t=a;
        a=b;
        b=t;
    }

    if(b>c){
        int i;
        i=b;
        b=c;
        c=i;
    }
    if(a>c){
        int j;
        j=a;
        a=c;
        c=j;
    }if(a>b){
        int o;
        o=a;
        a=b;
        b=o;}

    printf("%d->%d->%d\n",a,b,c);
    return 0;
}
