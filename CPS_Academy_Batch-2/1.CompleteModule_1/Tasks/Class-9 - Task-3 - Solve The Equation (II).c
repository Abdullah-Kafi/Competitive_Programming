///In The Name of ALLAH
///Praise be to ALLAH

#include<stdio.h>

int main() {
    ///My Solution::
//    int a, b, c;
//    long long int eqn;
//
//    scanf("%d %d %d", &a, &b, &c);
//
//    eqn = 1ll * (a * a * a * a + 3 * a * c) * (a * a * a * a + 3 * a * c) + 4 * b * b * c + c * c;
//    printf("%lld", eqn);

    ///Instructor's::
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    long long p1 = ( a * a * a * a ) + ( 3 * a * c );
    long long p2 = 4 * ( b * b ) * c;
    long long p3 = c * c;

    long long soln = ( p1 * p1 ) + p2 + p3;

    printf("%lld\n", soln);

    return 0;
}
