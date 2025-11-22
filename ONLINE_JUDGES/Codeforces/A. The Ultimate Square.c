///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>
#include<math.h>
///A. The Ultimate Square

int main()
{
    ///freopen("input.txt", "r", stdin);

    int t;
    double n;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%lf", &n);
        int rounded = round(n / 2);
        printf("%d\n", rounded);
    }
    return 0;
}
