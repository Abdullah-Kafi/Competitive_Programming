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
    int n, m, cnt; cin >> n >> m;

    while (1)
    {
        if(n == 0 && m == 0) break;
        else 
        {
            map<int, int> mp;

            for(int i = 0; i < n; i++) 
            {
                int x;
                cin >> x;
                mp[x]++;
            }
            for(int i = 0; i < m; i++) 
            {
                int x;
                cin >> x;
                mp[x]++;
            }
            cnt = 0;
            for(auto i: mp)
            {
                if(i.second == 2) cnt++;
            }
            cout << cnt << el;
        }
        cin >> n >> m;
    }
    
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}