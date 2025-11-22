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
    int n, m, l, r;
    cin >> n >> m >> l >> r;
    if(n == m) cout << l << " " << r << el;
    else if(l == 0) cout << 0 << " " << m << el;
    else if(r == 0) cout << -1 * m << " " << 0 << el;
    else cout << l + (n - m) << " " << r << el;
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}