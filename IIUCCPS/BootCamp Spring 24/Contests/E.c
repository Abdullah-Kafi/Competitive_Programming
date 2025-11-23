///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>
#include<limits.h>

int main()
{
    int n, s, swe = INT_MIN, f = 0, x, y;
    scanf("%d %d", &n, &s);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d %d", &x, &y);
        if(s >= x)
        {
            if( ( (s * 100 ) - ( x * 100 + y ) ) % 100 > swe ) {
                swe = ( (s * 100 ) - ( x * 100 + y ) ) % 100;
            }
            f = 1;
        }
    }
    if(!f || swe < 0)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", swe);
    }
    return 0;
}
