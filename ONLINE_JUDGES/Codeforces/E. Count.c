///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>
///E. Count

int main()
{
    ///freopen("input.txt", "r", stdin);

//    int n, sum = 0;
//    scanf("%d", &n);
//    while(n)
//    {
//        sum += n % 10;
//        n /= 10;
//    }
//    printf("%d\n", sum);

    char s[1000010];
    scanf("%s", s);
    int sum = 0;
    for(int i = 0; s[i]; i++)
    {
        sum += s[i] - '0';
    }
    printf("%d\n", sum);
    return 0;
}
