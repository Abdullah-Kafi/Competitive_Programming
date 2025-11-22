///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<bits/stdc++.h>
using namespace std;

const int sz = 0;
int ar[sz];

using ll = long long;

#define el "\n"


void solve()
{
    int n, k; cin >> n >> k;
 
    if(k == 1) 
    {
        cout << "YES" << endl;
        cout << n << el;
        return;
    }
    else if((n < k) || ((n - k) == 1) || (n % 2 == 1 && k % 2 == 0))
    {
        cout << "NO" << el;
        return;
    }
    else if(n % 2 == 1 && k % 2 == 1)
    {
        cout << "YES" << endl;
        cout << n - (k - 1) << " ";
        for(int i = 1; i < k; i++) cout << 1 << " ";
        cout << endl;
    }
    else if(n % 2 == 0 && k % 2 == 0)
    {
        cout << "YES" << endl;
        cout << 1 << " ";
        cout << (n - 1) - (k - 2) << " ";
        for(int i = 1; i < k - 1; i++) cout << 1 << " ";
        cout << endl;
    }
    else if(2 * k <= n)
    {
        cout << "YES" << endl;
        cout << n - 2 * (k - 1) << " ";
        for(int i = 1; i < k; i++) cout << 2 << " ";
        cout << endl;
    }
    else cout << "NO" << el;
}
int main()
{
    int tc; cin >> tc; 
    while (tc--)
    {
        solve();
    }

    return 0;
}