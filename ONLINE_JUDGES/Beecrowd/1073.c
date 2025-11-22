///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            printf("%d^2 = %d\n", i, i * i);
        }
    }
    return 0;
}

