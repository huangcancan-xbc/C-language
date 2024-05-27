#include <stdio.h>
#include <math.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        int H,W;
        scanf("%d %d",&H,&W);
        double a=(H-100)*0.9*2;//标准体重
        double b=fabs(W-a);
        //完美身材
        if(b<a*0.1){
            printf("You are wan mei!\n");
        }else if(b>a*0.1){
            printf("You are tai pang le!\n");
        }else {
            printf("You are tai shou le!\n");
        }
    }return 0;
}
