#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;

    int f = 0;

    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % 2 == 0)
            f = 1;
    }

    if(!f && n != 1) cout << n << " is prime number." << "\n";
    else cout << n << " is not prime number." << "\n";
    return 0;
}
