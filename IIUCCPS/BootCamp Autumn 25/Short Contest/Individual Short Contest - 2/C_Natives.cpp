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
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    
    sort(v.begin(), v.end());

    ll sum = 0;
    if(n % 2 == 1) 
    {
        for(int i = n / 2 + 1; i < n; i++) sum += v[i];
    }
    else
    {
        for(int i = n / 2; i < n; i++) sum += v[i];
    }

    cout << sum << el;
}
int main()
{
    optimize();
    
    // testCase
        solve();

    return 0;
}