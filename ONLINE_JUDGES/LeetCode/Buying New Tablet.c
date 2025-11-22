#include<stdio.h>

int main() {
    int i, T, N, B, W, H, P;
    scanf("%d", &T);
    for(i = 1; i <= T; i++) {
        int maximum = 0;
        scanf("%d %d", &N, &B);
        for(int j = 1; j <= N; j++) {
            scanf("%d %d %d", &W, &H, &P);
            if(P <= B && (W * H) > maximum) {
                maximum = W * H;
            }
        }
        if(maximum != 0) {
            printf("%d\n", maximum);
        }
        else {
            printf("no tablet\n");
        }
    }
    return 0;
}
