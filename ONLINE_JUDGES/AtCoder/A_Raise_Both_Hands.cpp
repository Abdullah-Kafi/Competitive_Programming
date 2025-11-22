///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<bits/stdc++.h>
using namespace std;

const int sz = 2e5 + 10;
int ar[sz];

using ll = long long;

#define el "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve()
{
    int l, r; cin >> l >> r;
    if(l == 0 && r == 1) cout << "No" << el;
    else if(l == 1 && r == 0) cout << "Yes" << el;
    else if((l == 0 && r == 0) || (l == 1 && r == 1)) cout << "Invalid" << el;
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}