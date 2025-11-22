///In The Name of ALLAH
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    int eqn = a * a + 3 * a + 2 * b - 2 * a * b + b * b;

    printf("%d\n", eqn);

    return 0;
}
