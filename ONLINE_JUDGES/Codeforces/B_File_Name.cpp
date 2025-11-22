///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<bits/stdc++.h>
using namespace std;

const int sz = 101;
char ch[sz];

using ll = long long;

#define el "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ch[i];
    }

    int cnt = 0;

    for (int i = 0; i < n - 2; i++)
    {
        if(ch[i] == 'x' && ch[i + 1] == 'x' && ch[i + 2] == 'x') cnt++;
    }
    
    cout << cnt << el;
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}