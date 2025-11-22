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
    int n, k; cin >> n >> k;
    vector<int> c(n + 1);
    vector<pair<int, int>> vp(n + 1);
    
    for(int i = 1; i <= n; i++)
    {
        cin >> vp[i].first;
        vp[i].second = i;
    }
    for(int i = 1; i <= n; i++) cin >> c[i];

    sort(vp.begin() + 1, vp.begin() + n + 1);
    sort(c.begin() + 1, c.begin() + n + 1);

    vector<int> ans(n + 1);
    for(int i = 1; i <= n; i++)
    {
        ans[vp[i].second] = c[i];
    }
    for(int i = 1; i <= n; i++) cout << ans[i] << " ";

    cout << el;
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}