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
    if(n == 1) cout << 0 << el;
    else if(n == 2 || n == 4) cout << 3 << el;
    else if(n == 5 || n == 7) cout << 6 << el;
    else if(n == 8 || n == 10) cout << 9 << el;
    else if(n == 3) cout << 3 << el;
    else if(n == 6) cout << 6 << el;
    else if(n == 9) cout << 9 << el;
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}