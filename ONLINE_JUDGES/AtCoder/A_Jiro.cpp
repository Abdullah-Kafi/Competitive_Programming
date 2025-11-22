///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<bits/stdc++.h>
using namespace std;

const int sz = 1e5 + 10;
int ar[sz];

using ll = long long;

#define el "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve()
{
    char a, b, c; cin >> a >> b >> c;
    if(a == '<')
    {
        if(b == '<')
        {
            if(c == '<')
            {
                cout << "B" << el;
            }
            else if(c == '>')
            {
                cout << "C" << el;
            }
        }
        else if(b == '>')
        {
            if(c == '<')
            {
                //cout << "" << el;
            }
            else if(c == '>')
            {
                cout << "A" << el;
            }
        }
    }
    else if(a == '>')
    {
        if(b == '<')
        {
            if(c == '<')
            {
                cout << "A" << el;
            }
            else if(c == '>')
            {
                //cout << "" << el;
            }
        }
        else if(b == '>')
        {
            if(c == '<')
            {
                cout << "C" << el;
            }
            else if(c == '>')
            {
                cout << "B" << el;
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