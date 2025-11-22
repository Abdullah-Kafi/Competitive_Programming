#include<stdio.h>

int main() {
    int i, T, A, B, C, D, E;
    scanf("%d", &T);
    for(i = 1; i <= T; i++) {
        scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
        if((A + B) <= D && C <= E) {
            printf("YES\n");
        }
        else if((C + B) <= D && A <= E) {
            printf("YES\n");
        }
        else if((A + C) <= D && B <= E) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
