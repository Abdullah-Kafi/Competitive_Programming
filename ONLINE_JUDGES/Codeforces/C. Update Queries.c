///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main()
{
    #ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
    #endif

    int tc, n, m; scanf("%d", &tc);

    while(tc--)
    {
        scanf("%d %d", &n, &m);

        char s1[n + 1], s2[m + 1];

        scanf(" %s", s1);

        int ar[m + 10];

        for(int i = 0; i < m; i++)
        {
            scanf("%d", &ar[i]);
        }

        scanf(" %s", s2);
    }
    return 0;
}

