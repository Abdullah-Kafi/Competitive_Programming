
#include<stdio.h>

int main() {
    int i, T, X;
    scanf("%d", &T);
    for(i = 1; i <= T; i++) {
        scanf("%d", &X);
        if(X >= 80) {
            printf("Yes\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
