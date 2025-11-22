#include<stdio.h>

int main() {
    int N, L, R, A;
    scanf("%d %d %d", &N, &L, &R);
//    for(int i = 1; i <= N; i++) {
//        scanf("%d", &A);
//        for(int X = L; X <= R; X++) {
//            if((X - A) <= (X ))
//        }
//    }
    for(int i = 1; i <= N; i++) {
        scanf("%d", &A);
        for(int j = L; j <= R; j++) {
            //printf("%d %d %d %d\n", j, L, R, A);
            if((abs(j - A) >= L) && (abs(j - A) <= R)) {
                printf("%d\n", abs(j - A));
            }
        }
    }

    return 0;
}
