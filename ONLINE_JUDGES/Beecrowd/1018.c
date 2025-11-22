#include<stdio.h>

int main()
{
    int n, a, b, c, d, e, f, g;
    scanf("%d", &n);
    printf("%d\n", n);
    a = n / 100;
    n %= 100;
    b = n / 50;
    n %= 50;
    c = n / 20;
    n %= 20;
    d = n / 10;
    n %= 10;
    e = n / 5;
    n %= 5;
    f = n / 2;
    n %= 2;
    g = n / 1;
    printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", a, b, c, d, e, f, g);
    return 0;
}
