#include<stdio.h>

int main() {
    int i, T, X;
    scanf("%d", &T);
    for(i = 1; i <= T; i++) {
        scanf("%d", &X);
        if(X <= 3) {
            printf("BRONZE\n");
        }
        else if(X > 3 && X <= 6) {
            printf("SILVER\n");
        }
        else {
            printf("GOLD\n");
        }
    }
    return 0;
}
