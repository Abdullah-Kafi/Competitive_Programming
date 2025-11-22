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
    int n; cin >> n;
    int ar[20];
    int cnt[21] = {0};
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
        cnt[ar[i]]++;
    }
    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        if(cnt[i] >= 2) ans += cnt[i] / 2;
    }
    cout << ans << el;
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}