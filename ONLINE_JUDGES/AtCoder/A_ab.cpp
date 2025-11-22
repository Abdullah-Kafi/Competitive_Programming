///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<bits/stdc++.h>
using namespace std;

const int sz = 101;
char ar[sz];

using ll = long long;

#define el "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve()
{
    int n, f = 1; cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for(int i = 0; i < n - 1; i++)
    {
        if((ar[i] == 'a' && ar[i + 1] == 'b') || (ar[i] == 'b' && ar[i + 1] == 'a'))
        {
            f = 0;
            break;
        }
    }
    if(!f) cout << "Yes" << el;
    else cout << "No" << el;
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}