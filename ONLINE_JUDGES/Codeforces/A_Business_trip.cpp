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
    int k; cin >> k; 
    vector<int> v(12);
    for(int i = 0; i < 12; i++) cin >> v[i];
    if(k == 0)
    {
        cout << 0 << el;
        return;
    }
    
    sort(v.begin(), v.end());

    int cnt = 0, sum = 0;
    for(int i = 11; i >= 0; i--)
    {
        cnt++;
        sum += v[i];
        if(sum >= k)
        {
            cout << cnt << el;
            return;
        }
    }
    cout << -1 << el;

    // int sum = 0, min = INT_MAX, cnt = 0;
    // for(auto it = v.begin(); it != v.end(); it++)
    // {
    //     sum += *(it);
    //     cnt++;
    //     if(sum >= k && cnt < min) 
    //     {
    //         sum = *it;
    //         min = cnt;
    //         cnt = 0;
    //     }
    // }
    // cout << min << el;
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}