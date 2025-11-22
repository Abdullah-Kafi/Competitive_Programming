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
    int n, q; cin >> n >> q;
    vector<int> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    
    vector<ll> pre(n);
    pre[0] = v[0];
    for(int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }


    while(q--)
    {
        int x, y; cin >> x >> y;
        if(x == n) cout << pre[y - 1] << el;

        else cout << pre[(n - 1) - (x - y)] - pre[n - x - 1] << el;
    }
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}