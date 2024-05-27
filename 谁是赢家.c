#include <stdio.h>
int main(){
    int pa,pb;
    scanf("%d %d",&pa,&pb);
    int a[3];
    for(int i=0;i<3;i++){
        scanf("%d ",&a[i]);
    }
	int a1=0,b1=0;
    for(int i=0;i<3;i++){
        if(a[i]==0)
            a1++;
        else b1++;
    }
    if(pa>pb){
        if(a1>0){
            printf("The winner is a: %d + %d", pa, a1);
            return 0;}
       else {
            printf("The winner is b: %d + 3", pb);
            return 0;
        }
    }else {
	if(a1==3){
            printf("The winner is a: %d + 3", pa);
            return 0;
       }else{
        printf("The winner is b: %d + 3", pb);}
            return 0;
    }
    return 0;
}
