#include<stdio.h>

int main() {
    int i, T, X1, X2;
    scanf("%d", &T);
    for(i = 1; i <= T; i++) {
        scanf("%d %d", &X1, &X2);
        if(X1 == X2) {
            printf("YES\n");
        }
        else if(X1 < X2) {
            printf("NO\n");
        }
        else {
            while(X1 != X2) {
                X1 += 1;
                X2 += 2;
            }
            if(X1 == X2) {
                printf("YES\n");
            }
            else {
                printf("NO\n");
            }
        }
    }
    return 0;
}
