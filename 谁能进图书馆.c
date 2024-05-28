#include <stdio.h>

int main() {
    int jin, pei, r1, r2;
    scanf("%d %d %d %d", &jin, &pei, &r1, &r2);

    int tiaojian1 = (r1 >= jin) || ((r1 < jin) && (r2 >= pei));
    int tiaojian2 = (r2 >= jin) || ((r2 < jin) && (r1 >= pei));

    printf("%d-%s ", r1, tiaojian1 ? "Y" : "N");
    printf("%d-%s\n", r2, tiaojian2 ? "Y" : "N");

    if (tiaojian1 && tiaojian2) {
        if ((r1 < jin && r2 >= pei) || (r2 < jin && r1 >= pei)) {
            if (r1 >= pei)
                printf("qing 1 zhao gu hao 2");
            else
                printf("qing 2 zhao gu hao 1");
        } else {
            printf("huan ying ru guan");
        }
    } else if (!tiaojian1 && !tiaojian2) {
        printf("zhang da zai lai ba");
    } else {
        if (tiaojian1)
            printf("1: huan ying ru guan");
        else
            printf("2: huan ying ru guan");
    }

    return 0;
}
