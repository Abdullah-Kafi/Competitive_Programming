///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>
///A. Planets

int main()
{
    ///freopen("input.txt", "r", stdin);

    int t, n, index, count;
    int ar[100];
    scanf("%d", &t);
    while(t--)
    {
        count = 0;
        int cc[101] = {0};
        scanf("%d %d", &n, &c);
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &ar[i]);
            index = ar[i];
            cc[index] = 1;
        }
        for(int i = 1; i <= 100; i++)
        {
            count += (cc[i] == 1);
        }
        printf("%d\n", count);
    }
    return 0;
}
