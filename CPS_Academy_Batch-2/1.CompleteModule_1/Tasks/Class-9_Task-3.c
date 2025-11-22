///In The Name of ALLAH
///Praise be to ALLAH

#include<stdio.h>
#define pi 3.141592653589793238

int main() {
    double r;

    scanf("%lf", &r);

    double area = pi * r * r, circum = 2 * pi * r;

    printf("%0.10lf %0.10lf\n", area, circum); //The output should not contain an absolute error greater than 10-5.

    return 0;
}
