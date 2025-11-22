///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main()
{
    #ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
    #endif

    int tc; scanf("%d", &tc);

    while(tc--)
    {
        int cnt = 0;
        int n, m; scanf("%d %d", &n, &m);
        int ar1[n + 1], ar2[m + 1];

        for(int i = 0; i < n; i++)
        {
            scanf("%d", &ar1[i]);
        }
        for(int i = 0; i < m; i++)
        {
            scanf("%d", &ar2[i]);
        }

        if(n < m)
        {
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < m; j++)
                {
                    if(ar1[i] == ar2[j])
                        cnt++;
                }
            }
        }
        else
        {
            for(int i = 0; i < m; i++)
            {
                for(int j = 0; j < n; j++)
                {
                    if(ar2[i] == ar1[j])
                        cnt++;
                }
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}

