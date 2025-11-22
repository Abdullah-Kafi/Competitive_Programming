#include<stdio.h>

double pi = 3.14;

void my_fun();

int main()
{
    printf("%lf\n", pi);
    my_fun();
    printf("%lf\n", pi);
    return 0;
}

void my_fun()
{
    pi = 3.1416;
    return;
}
