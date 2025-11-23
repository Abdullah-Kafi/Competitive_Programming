///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    int t, n, x;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);

        if(n == 0)
        {
            printf("-1\n");
        }
        else
        {
            x = (n / (n - 1)) + 1;
            printf("%d\n", x);
        }
    }
    return 0;
}
