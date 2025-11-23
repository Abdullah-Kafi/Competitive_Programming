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
    int n, k; cin >> n >> k;
    cin.ignore();
    string s; cin >> s;
    string t = s, tmp = s;
    reverse(t.begin(), t.end());

    int len = s.size(), f = 0;
    for(int i = 1; i < len; i++)
    {
        if(s[i] != s[i - 1]) f = 1;
    }
    if(!f) cout << "NO" << el;
    else if(s < t) cout << "YES" << el;
    else if(s >= t && k == 0) cout << "NO" << el;
    else
    {
        cout << "YES" << el;
    }

}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}