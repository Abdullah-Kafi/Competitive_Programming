#include<stdio.h>

int main() {
    int i, T, N, X, Y;
    scanf("%d", &T);
    for(i = 1; i <= T; i++) {
        scanf("%d %d %d", &N, &X, &Y);
        if((X * Y) >= N) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
