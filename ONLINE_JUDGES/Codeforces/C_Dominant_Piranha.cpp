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
    vector<int> v(n + 10);
    
    cin >> v[1];
    int f = 0, ans = 0;
    for(int i = 2; i <= n; i++)
    {
        cin >> v[i];
        if(v[1] != v[i]) f = 1;
    }
    if(!f) cout << -1 << el;
    else
    {
        int mx = *max_element(v.begin(), v.end());
        if(v[1] == mx && v[1] > v[2]) cout << 1 << el;
        else if(v[n] == mx && v[n] > v[n - 1]) cout << n << el;
        else 
        {
            for(int i = 2; i <= n; i++)
            {
                if(v[i] == mx && (v[i] > v[i - 1] || v[i] > v[i + 1]))
                {
                    ans = i;
                    break;
                }
            }
            cout << ans << el;
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