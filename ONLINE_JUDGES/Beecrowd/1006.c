///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    double A, B, C, wavg;

    scanf("%lf %lf %lf", &A, &B, &C);

    wavg = ( A * 2 + B * 3 + C * 5 ) / ( 2 + 3 + 5 );

    printf("MEDIA = %0.1lf\n", wavg);

    return 0;
}

