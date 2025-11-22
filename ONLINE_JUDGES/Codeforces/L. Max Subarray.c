///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>
///L. Max Subarray

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    int n, ar[101], t, f;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &ar[i]);
        }

        ///MY APPROCH::

//        for(int i = 0; i < n; i++)
//        {
//            for(int j = n - 1; j >= 0; j--)
//            {
//                int max = ar[j]; f = 1;
//                for(int k = i; k <= j; k++)
//                {
//                    f = 0;
//                    if(ar[k] > max)
//                        max = ar[k];
//                }
//                if(!f)
//                    printf("%d ", max);
//            }
//        }


        ///After learning::
        for(int i = 0; i < n; i++)
        {
            for(int j = i; j < n; j++)
            {
                int max = ar[j];
                for(int k = i; k <= j; k++)
                {
                    if(ar[k] > max)
                        max = ar[k];
                }
                printf("%d ", max);
            }
        }

        printf("\n");
    }
    return 0;
}
