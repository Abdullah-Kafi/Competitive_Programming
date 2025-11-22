///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>
///S. Search In Matrix

int main()
{
    ///freopen("input.txt", "r", stdin);

    int ar[110][110], x, n, m, f = 0;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    scanf("%d", &x);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(ar[i][j] == x)
            {
                f = 1;
            }
        }
    }
    if(!f)
    {
        printf("will take number\n");
    }
    else
    {
        printf("will not take number\n");
    }
    return 0;
}
