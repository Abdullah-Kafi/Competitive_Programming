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
    string s, str;
    cin >> s;
    int l = s.length();
    for(int i = 0; i < 16; i++) 
    {
        str.push_back('Y');
        str.push_back('e');
        str.push_back('s');
    }
    str.push_back('Y');
    str.push_back('e');
    
    int l2 = str.length();
    int j = 0;
    int f = 0;
    for(int i = 0; i < l; i++)
    {
        for(; j < l2; j++) 
        {
            if(s[i] != str[j])
            {
                f = 1;
                j++;
                break;
            }
            else break;
        }
    }
    if(f == 1) cout << "NO" << el;
    else cout << "YES" << el; 
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}