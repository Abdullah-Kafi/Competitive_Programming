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
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> vp(n);

    for(int i = 0; i < n; i++) 
    {
        int x; cin >> x;
        vp[i].first = x;
    }

    for(int i = 0; i < n; i++) 
    {
        int x; cin >> x;
        vp[i].second = x;
    }
    sort(vp.begin(), vp.end());

    int cnt = 0;
    for(int i = n - 1; i >= 0; i--)
    {
        cnt++;
        x -= (vp[i].first * vp[i].second);
        if(x <= 0) break;
    }
    if(x > 0) cout << -1 << el;
    else cout << cnt << el;
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}