///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main()
{
    int n, t, m;
    scanf("%d", &t);
    for(int j = 1; j <= t; j++)
    {
        m = j;
        for(int i = 1; i <= 10; i++)
        {
            printf("%d X %d = %d\n", j, i, m);
            m += j;
        }
        printf("------------------------------\n");
    }
    return 0;
}
