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
        int x;
        scanf("%d", &x);
        int a = x % 10, cnt = 0;

        while(x)
        {
            x /= 10;
            cnt++;
        }
        if(cnt < 4)
        {
            int ans = (a - 1) * 10 + (cnt * (cnt + 1) / 2);
            printf("%d\n", ans);
        }
        else
        {
            printf("%d\n", a * 10);
        }
    }
    return 0;
}

