#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int a;
        scanf("%d", &a);
        int sushu = 0;

        for (int j = 2; j * j <= a/j && !sushu; j++) {
            if (a % j == 0) {
                sushu = 1;
            }
        }

        if (a == 1 || sushu) {
            printf("No\n");
        } else {
            printf("Yes\n");
        }
    }

    return 0;
}
