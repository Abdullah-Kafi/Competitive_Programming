///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
//    int a, b, c, min, max;
//    scanf("%d %d %d", &a, &b, &c);
//    if( ( a <= b ) && ( a <= c ) ) {
//        min = a;
//    }
//    if( ( b <= a ) && ( b <= c ) ) {
//        min = b;
//    }
//    if( ( c <= a ) && ( c <= b ) ) {
//        min = c;
//    }
//    if( ( a >= b ) && ( a >= c ) ) {
//        max = a;
//    }
//    if( ( b >= a ) && ( b >= c ) ) {
//        max = b;
//    }
//    if( ( c >= a ) && ( c >= b ) ) {
//        max = c;
//    }
//    printf("%d %d\n", min, max);

    int a, b, c, min, max;
    scanf("%d %d %d", &a, &b, &c);

    /// Finding minimum using ternary operator
    min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

    /// Finding maximum using ternary operator
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("%d %d\n", min, max);

    return 0;
}

