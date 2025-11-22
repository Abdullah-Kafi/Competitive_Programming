///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    double x, p;
    scanf("%lf %lf", &x, &p);
    printf("%.2lf\n", ( 100 * p ) / ( 100 - x ));

    return 0;
}

