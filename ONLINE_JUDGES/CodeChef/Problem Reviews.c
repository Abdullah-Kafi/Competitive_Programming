///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main()
{
    int t, n, a, f;
    scanf("%d", &t);
    while(t--)
    {
        f = 0;
        scanf("%d", &n);
        for(int i = 1; i <= n; i++)
        {
            scanf("%d", &a);
            if(a <= 4)
            {
                f = 1;
            }
        }
        if(f == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
