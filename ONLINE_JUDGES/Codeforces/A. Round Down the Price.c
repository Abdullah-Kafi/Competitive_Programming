///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>
///A. Round Down the Price

int main()
{
    ///freopen("input.txt", "r", stdin);

    long long t, m;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld", &m);

        int i = 1;
        while(m - i >= 0)
        {
            i *= 10;
        }
        printf("%lld\n", m - i / 10);
    }
    return 0;
}
