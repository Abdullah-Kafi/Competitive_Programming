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
    cin >> v[0];
    int f = 0;
    ll sum = v[0];
    for(int i = 1; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
        if(v[i] != v[i - 1]) f = 1;
    }
    if(!f && (n % 2 == 1)) cout << v[0] << el;
    else if(!f) cout << 0 << el;
    else 
    {
        if(sum % 2 == 0) cout << 0 << el;
        else
        {
            sort(v.begin(), v.end());
            ll rsum = v[n - 1], ans = INT_MAX, diff;
            for(int i = 0; i < n; i++)
            {
                rsum += v[i];
                diff = abs((sum - rsum) - rsum);
                if(diff < ans) ans = diff;
            }
            cout << ans << el;
        }
    }
}
int main()
{
    optimize();
    
    // testCase
        solve();

    return 0;
}