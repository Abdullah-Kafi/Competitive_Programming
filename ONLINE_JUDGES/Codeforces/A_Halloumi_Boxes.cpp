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
    int n, k; cin >> n >> k;
    cin >> ar[0];
    int f = 0;
    for(int i = 1; i < n; i++)
    {
        cin >> ar[i];
        if(ar[i - 1] > ar[i]) f = 1;
    }
    if(!f) cout << "YES" << el;
    else if(n == k) cout << "YES" << el;
    else if(k >= 2) cout << "YES" << el;
    else cout << "NO" << el;
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}