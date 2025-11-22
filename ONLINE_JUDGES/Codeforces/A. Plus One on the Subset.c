///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>
#include<limits.h>

int main()
{
    #ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
    #endif

    int t; scanf("%d", &t);

    while(t--)
    {
        int n; scanf("%d", &n);

        int ar[n + 10];

        int max = INT_MIN, min = INT_MAX;

        for(int i = 0; i < n; i++)
        {
            scanf("%d", &ar[i]);
            if(ar[i] > max)
            {
                max = ar[i];
            }
            if(ar[i] < min)
            {
                min = ar[i];
            }
        }
        printf("%d\n", max - min);
    }
    return 0;
}
 
