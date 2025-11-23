///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>
#include<stdio.h>

int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    if(a > b)
    {
        printf("GREATER\n");
    }
    else if(a < b)
    {
        printf("LESS\n");
    }
    else
    {
        printf("EQUAL\n");
    }
    return 0;
}
