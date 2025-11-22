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
    int n, q;
    cin >> n >> q;

    vector<vector<int>> v(n);

    while (q--)
    {
        int x; cin >> x;
        if(x == 0)
        {
            int t, a; cin >> t >> a;
            v[t].push_back(a);
        }
        else if(x == 1)
        {
            int t;
            cin >> t; 
            if(!v[t].empty())
            {
                int l = v[t].size();
                for(int i = 0; i < l - 1; i++) cout << v[t][i] << " ";
                cout << v[t][l - 1] << el;
            }
            else cout << el;
        }
        else {
            int t; cin >> t;
            if(!v[t].empty()) v[t].clear();
        }
    }
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}