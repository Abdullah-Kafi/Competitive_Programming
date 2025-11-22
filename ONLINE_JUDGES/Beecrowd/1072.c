///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int n, x, inCount = 0, outCount = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &x);
        if( ( x >= 10 ) && ( x <= 20 ) ) {
            inCount++;
        }
        else {
            outCount++;
        }
    }
    printf("%d in\n", inCount);
    printf("%d out\n", outCount);
    return 0;
}

