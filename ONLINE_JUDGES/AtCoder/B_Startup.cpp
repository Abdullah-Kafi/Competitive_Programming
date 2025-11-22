///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<bits/stdc++.h>
using namespace std;

const int sz = 1000;
int ar[sz];

using ll = long long;

#define el "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve()
{
    int n, k; cin >> n >> k;
    int sum = 0;
    vector<int> price(k, 0);
    for(int i = 1; i <= k; i++)
    {
        int bi, ci;
        cin >> bi >> ci;
        sum += ci;
        price[bi - 1] += ci;
    }
    if(n >= k) cout << sum << el;
    else
    {
        sum = 0;
        sort(price.rbegin(), price.rend());
        for(int i = 0; i < n; i++)
        {
            sum += price[i];
        }
        cout << sum << el;
    }
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}