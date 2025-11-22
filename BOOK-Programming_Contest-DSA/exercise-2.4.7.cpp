#include<bits/stdc++.h>
using namespace std;

long double factorial(int n)
{
    long double fact = 1;

    for(int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

long double power(int n, int m)
{
    long double mul = 1;
    for(int i = 1; i <= m; i++)
        mul *= n;
    return mul;
}

int main()
{
    int x, n; cin >> x >> n;

    long double sum = 0;
    for(int i = 1, j = 0; i <= n; i++, j += 2)
    {
        if(i % 2 == 0)
            sum += (power(x, j) / factorial(j)) * -1;
        else
            sum += (power(x, j) / factorial(j));
    }
    cout << sum << "\n";

    return 0;
}
