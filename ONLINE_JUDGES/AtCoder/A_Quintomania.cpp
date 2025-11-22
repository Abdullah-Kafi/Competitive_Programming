///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<bits/stdc++.h>
using namespace std;

const int sz = 100;
int ar[sz];

using ll = long long;

#define el "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve()
{
    int n; cin >> n;
    for(int i = 0; i < n; i++) cin >> ar[i];
    int f = 1;
    for(int i = 0; i < n - 1; i++)
    {
        if(abs(ar[i] - ar[i + 1]) != 5 && abs(ar[i] - ar[i + 1]) != 7)
        {
            f = 0;
        }
    }
    if(!f) cout << "NO" << el;
    else cout << "YES" << el;
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}