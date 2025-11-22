#include<stdio.h>

double add(double num1, double num2);

int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);

    printf("%lf\n", add(a, b));
    return 0;
}

double add(double num1, double num2)
{
    return num1 + num2;
}
