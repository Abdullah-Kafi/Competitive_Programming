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
    ll n, q; cin >> n >> q;
    vector<ll> v(n + 10);
    vector<ll> preSum(n + 10);
    preSum[0] = 0;
    cin >> v[1];
    preSum[1] = v[1];

    for(ll i = 2; i <= n; i++)
    {
        cin >> v[i];
        preSum[i] = preSum[i - 1] + v[i];
    }
    
    while(q--)
    {
        ll l, r, k; cin >> l >> r >> k;
        if( (preSum[n] - preSum[r] + preSum[l - 1] + (r - l + 1) * k) % 2 == 1 ) cout << "YES" << el;
        else cout << "NO" << el;
    }
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}