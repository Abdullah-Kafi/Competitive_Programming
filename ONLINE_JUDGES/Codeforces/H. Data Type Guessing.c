///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    long long n, k, a;
    long long l = −2147483648;
    scanf("%lld %lld %lld", &n, &k, &a);
    double check = ( n * k * 1.0 ) / a;
    if(check - ( (n * k) / a ) != 0.0) {
        printf("double\n");
    }
    else if( ( ( n * k ) / a ) >= l && ( ( n * k ) / a ) <= 2147483647 ) {
        printf("int\n");
    }
    else {
        printf("long long\n");
    }
    return 0;
}

