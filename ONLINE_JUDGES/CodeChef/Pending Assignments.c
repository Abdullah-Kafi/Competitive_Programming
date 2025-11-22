#include<stdio.h>

int main() {
    int i, T, X, Y, Z;
    scanf("%d", &T);
    for(i = 1; i <= T; i++) {
        scanf("%d %d %d", &X, &Y, &Z);
        if((X * Y) <= (Z * 24 * 60)) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
