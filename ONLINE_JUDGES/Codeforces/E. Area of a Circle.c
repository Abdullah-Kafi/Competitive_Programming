///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>
#define pi 3.141592653589793238462643383279502884197

int main() {
    double r;
    scanf("%lf", &r);
    double area = pi * r * r;

    printf("%.20lf\n", area);

    return 0;
}
