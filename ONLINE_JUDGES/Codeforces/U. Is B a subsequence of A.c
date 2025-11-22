///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main()
{
    #ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
    #endif

    int ar1[10001], ar2[10001], f, k, n, m;
    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ar1[i]);
    }
    for(int i = 0; i < m; i++)
    {
        scanf("%d", &ar2[i]);
    }

    k = 0;
    for(int i = 0; i < m; i++)
    {
        f = 0;
        for(int j = k; j < n; j++)
        {
            if(ar2[i] == ar1[j])
            {
                k = j + 1;
                f = 1;
                break;
            }
        }
        if(!f)
        {
            printf("NO\n");
            break;
        }
    }
    if(f == 1) printf("YES\n");
    return 0;
}

