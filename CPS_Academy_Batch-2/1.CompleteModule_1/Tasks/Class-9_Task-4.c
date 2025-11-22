///In The Name of ALLAH
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int a, b, d, r;
    double f;

    scanf("%d %d", &a, &b);

    d = a / b;
    r = a % b;
    f = a / (b * 1.0);

    printf("%d %d %lf\n", d, r, f);

    return 0;
}
