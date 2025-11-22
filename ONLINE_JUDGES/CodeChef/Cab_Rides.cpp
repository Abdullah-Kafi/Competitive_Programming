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
    if(n == 1) cout << 200 << endl;
    else 
    {
        int cnt = 0;
        while (n == 3)
        {
            n -= 2;
            cnt++;
        }
        cout << cnt * 200 + n * 100 << endl;
    }
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}