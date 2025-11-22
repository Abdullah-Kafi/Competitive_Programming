///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<bits/stdc++.h>
using namespace std;

const int sz = 1e5 + 10;
int ar[sz];
using ll = long long;


ll power(ll x)
{
    ll mul = 1;
    for (ll i = 0; i < x; i++)
    {
        mul *= 2;
    }
    return mul;
}

#define el "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve()
{
    ll n; cin >> n;
    // ll x = log(n) / log(2);
    // cout << x << el;
    // ll m = power(x);
    // if(n == m) cout << "YES" << el;
    // else cout << "NO" << el;

    while (n % 2 == 0)
    {
        n /= 2;
    }
    if(n == 1) cout << "YES" << el;
    else cout << "NO" << el; 
    

}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}