///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    long long x, y;
    scanf("%lld %lld", &x, &y);
    int lastDigit1 = x % 10, lastDigit2 = y % 10;

    printf("%d\n", lastDigit1 + lastDigit2);

    return 0;
}

