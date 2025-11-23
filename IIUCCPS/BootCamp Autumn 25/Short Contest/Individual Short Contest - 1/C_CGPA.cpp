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
    double x, y; cin >> x >> y;

    if((x * x * x * x + 4 * y * y) == 4 * x * x * y) cout << "YES" << el;
    else cout << "NO" << el;
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}