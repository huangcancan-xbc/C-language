#include <stdio.h>
int main(){
    int n=0;
    scanf("%d",&n);
    
    for(int i=0; i<n; i++) {
        int xing=0, gao=0, m=0;
        scanf("%d %d %d", &xing, &gao, &m);
       
        const char* a = " ";
        
        if(xing==1) { 
            if(gao < 130) {
                printf("duo chi yu!");
            } else if(gao > 130) {
                printf("ni li hai!");
            } else {
                printf("wan mei!");
            }
            
            if(m < 27) {
                printf("%sduo chi rou!\n", a);
            } else if(m > 27) {
                printf("%sshao chi rou!\n", a);
            } else {
                printf("%swan mei!\n",a);
            }
        } else {
            if(gao < 129) {
                printf("duo chi yu!");
            } else if(gao > 129) {
                printf("ni li hai!");
            } else {
                printf("wan mei!");
            }
            
            if(m < 25) {
                printf("%sduo chi rou!\n", a);
            } else if(m > 25) {
                printf("%sshao chi rou!\n", a);
            } else {
                printf("%swan mei!\n",a);
            }
        }
    }
    
    return 0;
}
