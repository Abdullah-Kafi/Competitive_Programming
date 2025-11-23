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
#define fraction() cout.unsetf(ios::floatfield); cout.precision(4); cout.setf(ios::fixed,ios::floatfield);



void solve()
{
    ll n;
    vector<ll> v; 
    while(cin >> n)
    {
        v.push_back(n);
    }

    int len = v.size();

    for(int i = len - 1; i >= 0; i--)
    {
        fraction() cout << sqrt(v[i]) << el;
    }
}
int main()
{
    optimize();
    
    // testCase
        solve();

    return 0;
}