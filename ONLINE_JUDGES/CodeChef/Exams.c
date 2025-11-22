///In The Name of ALLAH
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int i, T, X, Y, Z;

    scanf("%d", &T);
    for(i = 1; i <= T; i++) {
        scanf("%d %d %d", &X, &Y, &Z);
        if(( Z * 1.0 / ( X * Y ) ) * 100 > 50) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
