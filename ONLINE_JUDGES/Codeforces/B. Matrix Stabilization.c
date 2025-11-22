///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main()
{
    #ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
    #endif

    int tc; scanf("%d", &tc);
    int n, m;
    int ar[110][110];

    while(tc--)
    {
        scanf("%d %d", &n, &m);
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                scanf("%d", &ar[i][j]);
            }
        }
    }
    return 0;
}

