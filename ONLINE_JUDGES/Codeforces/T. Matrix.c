///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>
#include<math.h>

int main()
{
    #ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
    #endif

    int n, sumPriDia = 0, sumSecDia = 0; scanf("%d", &n);
    int ar[100][100];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &ar[i][j]);
            if(i == j)
                sumPriDia += ar[i][j];
            if((i + j) == (n - 1))
                sumSecDia += ar[i][j];
        }
    }

    printf("%d\n", abs(sumPriDia - sumSecDia));

    return 0;
}

