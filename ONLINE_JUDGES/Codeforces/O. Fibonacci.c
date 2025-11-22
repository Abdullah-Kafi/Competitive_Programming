///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>
#define ll long long

int fib(int n)
{
    if(n == 1) return 0;
    else if(n == 2) return 1;
    else return fib(n - 1) + fib(n - 2);
}
int main()
{
    #ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
    #endif

    ll n; scanf("%lld", &n);

    ll a = 0, b = 1, sum;
    if(n == 1) printf("0\n");
    else if(n == 2) printf("1\n");
    else
    {
        for(ll i = 1; i <= n - 2; i++)
        {
            sum = a + b;
            a = b;
            b = sum;
        }
        printf("%lld\n", sum);
    }

    return 0;
}
