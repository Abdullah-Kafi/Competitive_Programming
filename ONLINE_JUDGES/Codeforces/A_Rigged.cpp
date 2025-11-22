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
    int n;
    cin >> n;
    int s1, e1;
    cin >> s1 >> e1;
    map<int, int> mp;
    n--;
    while (n--)
    {
        int s, e;
        cin >> s >> e;
        if(s >= s1)
        {
            mp.insert({s, e});
        }
    }
    if(mp.empty()) cout << s1 << el;
    else 
    {
        int max = -1;
        for(auto i : mp)
        {
            if(i.second > max) max = i.second;
        }
        if(e1 > max) cout << s1 << el;
        else cout << -1 << el;
    }
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}