#include<stdio.h>

int main() {
    int i, T, A, B, C, X;
    scanf("%d", &T);
    for(i = 1; i <= T; i++) {
        scanf("%d %d %d %d", &A, &B, &C, &X);
        if((A + B) >= X) {
            printf("YES\n");
        }
        else if((B + C) >= X) {
            printf("YES\n");
        }
        else if((C + A) >= X) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
