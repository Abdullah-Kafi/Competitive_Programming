///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main()
{
    #ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
    #endif

    int ar[110][110], n, m;
    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = m - 1; j >= 0; j--)
        {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }
    return 0;
}

