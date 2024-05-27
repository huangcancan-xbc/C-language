#include <stdio.h>
int main(){
    int A,B,sum=0;
    scanf("%d %d",&A,&B);
    for(int i=A;i<B+1;i++){
        printf("%5d",i);
        sum+=i;
        if((i-A)%5==4&&i!=B){
            printf("\n");
        }
    }printf("\nSum = %d\n",sum);
    return 0;
}
