///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<bits/stdc++.h>
using namespace std;

const int sz = 0;
int ar[sz];

using ll = long long;

#define el "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve()
{
    ll n; cin >> n;
    ll i = 3;
    while (1)
    {
        if(n % i) 
        {
            cout << "YES" << endl;
            return;
        }
        i += 2;
    }
    
    cout << "NO" << endl;
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}