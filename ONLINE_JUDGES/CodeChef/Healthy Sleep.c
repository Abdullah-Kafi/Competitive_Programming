///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if(n > 8)
    {
        printf("MORE\n");
    }
    else if(n < 8)
    {
        printf("LESS\n");
    }
    else
    {
         printf("PERFECT\n");
    }

    return 0;
}
