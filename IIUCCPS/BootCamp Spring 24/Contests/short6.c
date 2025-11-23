///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    ///freopen("input.txt", "r", stdin);

    ///A
//    int a, b;
//    scanf("%d %d", &a, &b);
//    if(a * 500 >= b)
//        printf("Yes\n");
//    else
//        printf("No\n");

    ///B
//    int x, y, n, t;
//    scanf("%d", &t);
//    while(t--)
//    {
//        scanf("%d %d %d", &x, &y, &n);
//        printf("%d\n", ( x * 5 + y * 10 ) / n);


    ///C
    int t;
    int n;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        int x = log(n) / log(2);

        if(pow(2, x) == n)
            printf("%d\n", x);
        else
            printf("0\n");
    }
    return 0;
}


