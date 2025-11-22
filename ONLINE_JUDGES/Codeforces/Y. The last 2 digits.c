///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    long double a, b, c, d, Multiplication, last2digit;
    scan("%Lf %Lf %Lf %Lf", &a, &b, &c, &d);
    Multiplication = a * b * c * d;
    last2digit = Multiplication % 100;
    printf("%Lf\n", last2digit);

    return 0;
}

