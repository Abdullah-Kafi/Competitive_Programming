///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<bits/stdc++.h>
using namespace std;

using ll = long long;

#define el "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve()
{
    int a, b, c, d; cin >> a >> b >> c >> d;
    int ans = ((a % 100) * (b % 100) * (c % 100) * (d % 100)) % 100;
    if(ans == 0) cout << "00" << el;
    else if(ans >= 1 && ans <= 9) cout << "0" << ans << el;
    else cout << ans << el;
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}