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
    int ar[101][101];
    int n; cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cin >> ar[i][j];
        }
    }
    int i = 1, j = 1;
    while (n--)
    {
        if(i >= j) i = ar[i][j];
        else i = ar[j][i];
        j++;
    }
    cout << i << el;
    
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}