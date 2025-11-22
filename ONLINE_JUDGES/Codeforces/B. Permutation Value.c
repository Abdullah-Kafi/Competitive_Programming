///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>
///B. Permutation Value

int main()
{
    ///freopen("input.txt", "r", stdin);

    int t, n;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        printf("%d %d ", 1, n);
        for(int i = 2; i < n; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
