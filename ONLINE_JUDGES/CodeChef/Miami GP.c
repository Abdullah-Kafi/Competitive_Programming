#include<stdio.h>

int main() {
    int i, T, X, Y;
    scanf("%d", &T);
    for(i = 1; i <= T; i++) {
        scanf("%d %d", &X, &Y);
        if(Y <= (X * 1.07)) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
