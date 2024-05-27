#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        char xing;
        double gao;
        scanf(" %c %lf", &xing, &gao);
        double a;
        if (xing == 'M') {
            a = gao / 1.09;
        }else if(xing=='F') {
            a = gao * 1.09;
        } 
        printf("%.2lf\n", a);
    }
    return 0;
}
