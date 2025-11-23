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
    string s, ans; cin >> s;
    int len = s.length();
    s[0] -= 32;
    for(int i = 0; i < len; i++)
    {
        if(s[i] == 's') ans.push_back('$');
        else if(s[i] == 'i') ans.push_back('!');
        else if(s[i] == 'o') 
        {
            ans.push_back('(');
            ans.push_back(')');
        } 
        else ans.push_back(s[i]);
    }
    ans.push_back('.');
    cout << ans << el;
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}