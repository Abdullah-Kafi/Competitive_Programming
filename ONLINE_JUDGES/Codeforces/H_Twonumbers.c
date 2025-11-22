#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int floor = a / b;
    int ceil = (a / b) + 1;
    double round = (a * 1.0) / b;
    if(a % b != 0)
    {
        printf("floor %d / %d = %d\n", a, b, floor);
        printf("ceil %d / %d = %d\n", a, b, ceil);
    } else
    {
        printf("floor %d / %d = %d\n", a, b, a / b);
        printf("ceil %d / %d = %d\n", a, b, a / b);
    }
    if((round - (floor * 1.0)) >= 0.5) printf("round %d / %d = %d\n", a, b, ceil);
    else printf("round %d / %d = %d\n", a, b, floor);
    return 0;
}