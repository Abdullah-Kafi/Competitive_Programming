#include<stdio.h>

int main() {
    int i, T, N, X, S, A, B;
    scanf("%d", &T);
    for(i = 1; i <= T; i++) {
        scanf("%d %d %d", &N, &X, &S);
        for(int j = 1; j <= S; j++) {
            scanf("%d %d", &A, &B);
            if(X == B) {
                X = A;
            }
            else if(X == A) {
                X = B;
            }
        }
        printf("%d\n", X);
    }
    return 0;
}
