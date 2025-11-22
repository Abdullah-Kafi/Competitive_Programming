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
    string s; cin >> s;
    char search = s[0];
    int l = s.length();
    int cnt = 0;
    for(int i = 0; i < l - 1; i++)
    {
        if(s[i] != s[i + 1]) cnt++;
    }
    cnt++;
    
    if(cnt != 3 || (s[0] != s[l - 1])) cout << 0 << el;
    else
    {
        int ffind = 0;
        for(int i = 0; i < l; i++)
        {
            if(s[i] == search) ffind++;
        }
        if(ffind >= 3 && (l - ffind) >= 2) cout << l - ffind + 1 << el;
        
        else cout << 0 << el;
    }
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}