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
    string s;
    cin >> s;
    int l = s.length();
    int countOne = 0, countZero = 0, f = 1;
    for(int i = 0; i < l; i++)
    {
        if(s[i] == '1') 
        {
            countOne++;
            countZero = 0;
            if(countOne >= 7) 
            {
                f = 0;
                break;
            }
        }
        else if(s[i] == '0')
        {
            countZero++;
            countOne = 0;
            if(countZero >= 7)
            {
                f = 0;
                break;
            }
        }
    }
    if(!f) 
    {
        cout << "YES" << el;
    }
    else cout << "NO" << el;
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}