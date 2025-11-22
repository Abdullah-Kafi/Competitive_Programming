#include<stdio.h>

int main() {
    int i, T, N;
    scanf("%d", &T);
    for(i = 1; i <= T; i++) {
        scanf("%d", &N);
        if((N % 3) == 0) {
            printf("Yes\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
