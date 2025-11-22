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
    int n;
    cin >> n;
    int mincost = 0, maxCost = 0;

    if(n == 2) cout << 4 << endl;
    else if(n % 3 == 0) cout << 5 * (n / 3) << endl;
    else 
    {
        int f = n / 3;
        int d = n - (f * 3);
        if(d == 1) cout << (f - 1) * 5 + 8 << endl;
        else cout << (d / 2) * 4 + f * 5 << endl;
    } 
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}