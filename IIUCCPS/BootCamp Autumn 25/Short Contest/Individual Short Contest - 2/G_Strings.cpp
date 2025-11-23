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
    vector<pair<char, char>> vp(n);

    for(int i = 0; i < n; i++)
    {
        string s; cin >> s;
        cin.ignore();

        vp[i].first = s[0];
        vp[i].second = s[1];
    }

    ll cnt = 0;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if((vp[i].first == vp[j].first) && (vp[i].second != vp[j].second)) cnt++;
            else if((vp[i].first != vp[j].first) && (vp[i].second == vp[j].second)) cnt++;
        }
    }
    cout << cnt << el;
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}