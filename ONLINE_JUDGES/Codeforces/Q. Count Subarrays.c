///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main()
{
    #ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
    #endif

    int n, ar[110], cnt = 0, count, t; scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &ar[i]);
        }

        ///Printing Sub-Array::
    //    for(int k = 0; k < n; k++)
    //    {
    //        for(int i = k; i < n; i++)
    //        {
    //            for(int j = k; j <= i; j++)
    //            {
    //                printf("%d ", ar[j]);
    //            }
    //            printf("\n");
    //        }
    //    }
        count = 0;
        for(int k = 0; k < n; k++)
        {
            int f = 0;
            for(int i = k; i < n; i++)
            {
                for(int j = k; j <= i - 1; j++)
                {
                    if(ar[j] > ar[j + 1])
                        f = 1;
                }
                if(!f) count++;
                else break;
            }
        }

        printf("%d\n", count);

        ///Count Sub-Array::Iterative Method
    //    for(int i = 0; i < n; i++)
    //    {
    //        for(int j = 0; j <= i; j++)
    //        {
    //            cnt++;
    //        }
    //    }

        ///Count Sub-Array[of an N size Array]::Summation of first N natural number
    //    int sum = n * (n + 1) / 2;
    //    printf("%d\n", sum);
    //
    //    printf("%d\n", cnt);
    }
    return 0;
}

