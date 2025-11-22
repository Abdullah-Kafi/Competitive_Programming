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

    if(count(s.begin(), s.end(), 'a') == l || count(s.begin(), s.end(), 'b') == l) 
    cout << s[0] << " " << s.substr(1, l - 2) << " " << s[l - 1] << el;

    else if(s[0] == 'a')
    {
        if(s[1] == 'a')
        {
            cout << s[0] << " " << s[1] << " " << s.substr(2, l - 2) << el;
        }
        else
        {
            int indx = -1;
            for(int i = 2; i < l; i++)
            {
                if(s[i] == 'a')
                {
                    indx = i;
                    break;
                }
            }
            if(indx == -1) cout << s[0] << " " << s.substr(1, l - 2) << " " << s[l - 1] << el;
            else 
            {
                cout << s[0] << " " << s.substr(1, indx - 1) << " ";
                for(int i = indx; i < l; i++) cout << s[i];
                cout << el;
            }
        }
    }
    else if(s[0] == 'b')
    {
        if(s[1] == 'a')
        {
            cout << s[0] << " " << s[1] << " " << s.substr(2, l - 2) << el;
        }
        else
        {
            int indx = -1;
            for(int i = 2; i < l; i++)
            {
                if(s[i] == 'a')
                {
                    indx = i;
                    break;
                }
            }
            if(indx == -1) cout << s[0] << " " << s.substr(1, l - 2) << " " << s[l - 1] << el;
            else
            {
                cout << s[0] << " " << s.substr(1, indx - 1) << " ";
                for(int i = indx; i < l; i++) cout << s[i];
                cout << el;
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