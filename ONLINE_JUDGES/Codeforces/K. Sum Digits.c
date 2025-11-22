///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    int n, sum = 0, ar[1000001];
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%1d", &ar[i]);
        sum += ar[i];
    }

    printf("%d\n", sum);
    return 0;
}
