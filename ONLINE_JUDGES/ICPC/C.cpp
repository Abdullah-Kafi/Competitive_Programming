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
    int t; cin >> t;
    for(int i = 1; i <= t; i++)
    {
        int n, k; cin >> n >> k;
        int sum = 0;
        int tn = n;
        while (tn--)
        {       
            int x, y; cin >> x >> y;
            int d = x - y;
            sum += k / d;
        }
        int ans = sum / n;
        cout << "Case "<< t << ": " << ans << el;
    }
    
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}