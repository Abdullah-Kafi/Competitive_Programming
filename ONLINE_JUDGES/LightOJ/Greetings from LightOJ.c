///In The Name of ALLAH
///Praise be to ALLAH

///Abdullah Kafi Chowdhury
///International Islamic University Chittagong

#include<stdio.h>

int main() {
    int a, b, i, T;
    scanf("%d", &T);
    for(i = 1; i <= T; i++) {
        scanf("%d %d", &a, &b);
        printf("Case %d: %d\n", i, (a + b));
    }

    return 0;
}

