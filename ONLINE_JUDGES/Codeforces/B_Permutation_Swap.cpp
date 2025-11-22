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
    int n, ans = 0; cin >> n;

    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        int indx = abs(i - x);
        ans = __gcd(ans, indx);
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