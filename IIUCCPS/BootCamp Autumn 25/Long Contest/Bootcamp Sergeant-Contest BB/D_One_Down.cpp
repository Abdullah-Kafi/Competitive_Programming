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
    cin >> s;
    cin.ignore();
    cin >> t;

    if(s == t)
    {
        cout << "Yes" << el;
        return;
    }

    else
    {
        int cnt = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '1' && t[i] == '0') cnt++;
        }
        if(cnt % 2) 
        {
            cout << "No" << el;
            return;
        }
    }

    int i = 0, j = n - 1, f = 0;
    while (i <= j)
    {
        if((t[i] == '1' && s[i] == '0') || (t[j] == '1' && s[j] == '0')) f = 1;
        i++;
        j--;
    }
    if(!f) cout << "Yes" << el;
    else cout << "No" << el;
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}