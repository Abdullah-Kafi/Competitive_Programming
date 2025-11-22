///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%d years\n", ( n / 365 ));
    printf("%d months\n", ( n % 365 ) / 30);
    printf("%d days\n", ( n % 365 ) % 30);
    return 0;
}

