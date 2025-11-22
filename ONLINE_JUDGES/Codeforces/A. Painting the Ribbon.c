///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>
///A. Painting the Ribbon

int main()
{
    ///freopen("input.txt", "r", stdin);

    int t, n, m, k;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d %d", &n, &m, &k);
        if(m <= k)
            printf("NO\n");
        else if(n - m == m - k == 1 || 0)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
