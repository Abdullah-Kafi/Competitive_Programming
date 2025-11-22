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
    ll n, k;
    cin >> n >> k;

    ll frstOdd;
    if(n % 2) frstOdd = n / 2 + 1;
    else frstOdd = n / 2;

    if(k <= frstOdd) cout << 2 * k - 1 << endl;
    else cout << (k - frstOdd) * 2 << endl;
}
int main()
{
    optimize();
    
   //testCase
        solve();

    return 0;
}