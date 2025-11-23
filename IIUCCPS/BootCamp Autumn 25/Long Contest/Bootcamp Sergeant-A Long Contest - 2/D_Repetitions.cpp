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
    int len = s.length();

    char ch = s[0];
    int cnt = 1, Max = INT_MIN;
    for(int i = 1; i < len; i++)
    {
        if(s[i] == ch) cnt++;
        else 
        {
            if(!(ch == 'A' || ch == 'C' || ch == 'G' || ch == 'T')) ch = 'x';

            else 
            {
                ch = s[i];
                if(cnt > Max) Max = cnt;
                cnt = 1;
            }
        }
    }
    cout << Max << el;
}
int main()
{
    optimize();
    
    // testCase
        solve();

    return 0;
}