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
    string alpha = "qwertyuiopasdfghjkl;zxcvbnm,./";
    int l = alpha.size();

    char ch; cin >> ch;
    cin.ignore();
    string s; cin >> s;
    int len = s.length();
    if(ch == 'R') 
    {
        for(int i = 0; i < len; i++)
        {
            for(int j = 0; j < l; j++)
            {
                if(s[i] == alpha[j])
                {
                    cout << alpha[j - 1];
                }
            }
        }
    }
    else
    {
        for(int i = 0; i < len; i++)
        {
            for(int j = 0; j < l; j++)
            {
                if(s[i] == alpha[j])
                {
                    cout << alpha[j + 1];
                }
            }
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