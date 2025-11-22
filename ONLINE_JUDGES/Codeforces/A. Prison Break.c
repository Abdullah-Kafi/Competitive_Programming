///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main()
{
    #ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
    #endif

    int t; scanf("%d", &t);

    while(t--)
    {
        int a, b; scanf("%d %d", &a, &b);

        printf("%d\n", a * b);
    }
    return 0;
}

