///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<bits/stdc++.h>
using namespace std;

const int sz = 1e5 + 10;
int ar[sz];

using ll = long long;

#define el "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(a == b) cout << 0 << el;
    else if(a < b)
    {
        if((b - a) % 2 == 0 && ((b - a) / 2) % c == 0)
        {
            cout << ((b - a) / 2) / c << el;
        }
        else
        {
            cout << ((b - a) / 2) / c + 1 << el;
        }
    }
    else 
    {
        if((a - b) % 2 == 0 && ((a - b) / 2) % c == 0)
        {
            cout << ((a - b) / 2) / c << el;
        }
        else
        {
            cout << ((a - b) / 2) / c + 1 << el;
        }
    }
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}