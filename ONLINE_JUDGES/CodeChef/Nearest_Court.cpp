///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<bits/stdc++.h>
using namespace std;

const int sz = 1e3 + 10;
int ar[sz];

using ll = long long;

#define el "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve()
{
    int x, y;
    cin >> x >> y;
    if(x > y) swap(x, y);
    int min = INT_MAX, f = 1;
    for(int i = x + 1; i < y; i++)
    {
        if(max(abs(x - i), abs(y - i)) < min)
        {
            min = max(abs(x - i), abs(y - i));
            f = 0;
        }
    }
    if(!f) cout << min << el;
    else cout << f << el;
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}