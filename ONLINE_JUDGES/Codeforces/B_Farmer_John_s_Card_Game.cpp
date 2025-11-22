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
    int n, m; cin >> n >> m;

    int f = 1;
    map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
        vector<int> v;
        for(int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        mp[v[0]] = i + 1;
        for(int j = 0; j < m - 1; j++)
        {
            if((v[j + 1] - v[j]) != n)
            {
                f = 0;
            }
        }
        v.clear();
    }
    if(!f)
    {
        cout << "-1";
    }
    else
    {
        for(auto i: mp)
        {
            cout << i.second << " ";
        }
    }
    cout << el;
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}