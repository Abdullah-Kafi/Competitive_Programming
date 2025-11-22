#include<bits/stdc++.h>
using namespace std;

long double factorial(int n)
{
    long double fact = 1;

    for(int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main()
{
    int n, r; cin >> n >> r;

    cout << factorial(n) / (factorial(r) * factorial(n - r)) << "\n";

    return 0;
}
