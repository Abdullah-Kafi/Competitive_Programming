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
    map<int, int> mp;
 
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }

    int x = n - 2;

    for(int i = 0; i < n; i++)
    {
        if(x % v[i] == 0)
        {
            int f = x / v[i];
            if(mp.count(f))
            {
                if(f != v[i])
                {
                    cout << f << " " << v[i] << el;
                    break;
                }
                else if(mp[f] > 1)
                {
                    cout << f << " " << v[i] << el;
                    break;
                }
            }
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