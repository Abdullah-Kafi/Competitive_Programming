#include<stdio.h>

int main() {
    int i, T, X, Y;
    scanf("%d", &T);
    for(i = 1; i <= T; i++) {
        scanf("%d %d", &X, &Y);
        if(X < Y) {
            printf("NO\n");
        }
        else {
            printf("YES\n");
        }
    }
    return 0;
}
