#include<stdio.h>

int main() {
    int i, T, X, Y;
    scanf("%d", &T);
    for(i = 1; i <= T; i++) {
        scanf("%d %d", &X, &Y);
        if(X < Y) {
            printf("FIRST\n");
        }
        else if(X > Y) {
            printf("SECOND\n");
        }
        else {
            printf("ANY\n");
        }
    }
    return 0;
}
