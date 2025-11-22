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
    if(n == 1) cout << 0 << el;
    else if(n % 3 == 0 || n % 6 == 0)
    {
        int cnt = 0;
        while(1)
        {
            cnt++;
            if(n % 6)
            {
                n *= 2;
                if(n % 6)
                {
                    cout << -1 << el;
                    return;
                }
            }
            else 
            {
                n /= 6;
                if(n == 1) break;
            }
        }
        cout << cnt << el;
    }

    else cout << -1 << el;

}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}