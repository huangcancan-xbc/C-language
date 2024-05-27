#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char a[3];
        int b,c;
        scanf("%s %d %d",&a,&b,&c);
        if((b<15||b>20)||(c<50||c>70)){
            printf("%s\n",a);
        }
    }
    return 0;
    
}
