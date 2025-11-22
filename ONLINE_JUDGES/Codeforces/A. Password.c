///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>
///A. Password

int main()
{
    ///freopen("input.txt", "r", stdin);

    int t, n, ar[11];
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &ar[i]);
        }
        printf("%d\n", ( ( 9 - n ) * ( 9 - n + 1 ) / 2 ) * 6);
    }
    return 0;
}
