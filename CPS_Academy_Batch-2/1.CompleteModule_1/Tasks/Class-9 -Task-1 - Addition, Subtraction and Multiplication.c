///In The Name of ALLAH
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int a, b, sum, sub;
    long long int mul;
    scanf("%d %d", &a, &b);

    sum = a + b;
    sub = a - b;
    mul = (long long int)a * b;
//    printf("%d + %d = %d\n%d - %d = %d\n%d x %d = %d\n", a, b, a + b, a, b, a - b, a, b, a * b);
    printf("%d + %d = %d\n", a, b, sum);
    printf("%d - %d = %d\n", a, b, sub);
    printf("%d x %d = %lld\n", a, b, mul);


    return 0;
}
