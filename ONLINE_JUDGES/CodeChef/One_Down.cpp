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
    string s, t;
    cin >> s >> t;
    int cnt = 0, f = 1;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '1' && t[i] == '0') cnt++;
        if(s[i] != t[i]) f = 0; 
    }
    if(f == 1) cout << "Yes" << el;
    else if(cnt % 2 == 0 && cnt != 0) cout << "Yes" << el;
    else cout << "No" << el;
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}