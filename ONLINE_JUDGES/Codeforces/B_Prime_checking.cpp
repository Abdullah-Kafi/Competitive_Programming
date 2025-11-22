///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<bits/stdc++.h>
using namespace std;

const int sz = 1;
int ar[sz];

using ll = long long;

#define el "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve()
{
    ll n, f = 1; cin >> n;

    for(ll i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            f = 0;
            break;
        }
    }

    if(!f || n == 1) cout << "NO" << el;
    else cout << "YES" << el;
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}