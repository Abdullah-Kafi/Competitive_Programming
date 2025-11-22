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
    ll a, b, n1, n2; cin >> a >> b;
    if(a > b) swap(a, b);

    cout << ( b  * (b + 1) ) / 2 - ( a * (a - 1) ) / 2 << el;

    int t1 = a, t2 = b;

    if(t1 % 2) t1++;
    if(t2 % 2) t2--;

    n2 = (t2 - 2) / 2 + 1;
    n1 = (t1 - 4) / 2 + 1;
    
    cout << n2 * (n2 + 1) - n1 * (n1 + 1) << el;
    
    if(a % 2 == 0) a++;
    if(b % 2 == 0) b--;

    n2 = (b - 1) / 2 + 1;
    n1 = (a - 3) / 2 + 1;

    // cout << (((n2 - 1) * n2) + n2) - (((n1 - 1) * n1) + n1) << el;
    cout << n2 * n2 - n1 * n1 << el;
    
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}