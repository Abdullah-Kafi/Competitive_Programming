#include<stdio.h>

int main() {
    int i, T, N, M, K;
    scanf("%d", &T);
    for(i = 1; i <= T; i++) {
        scanf("%d %d %d", &N, &M, &K);
        if((N + K) <= M) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
