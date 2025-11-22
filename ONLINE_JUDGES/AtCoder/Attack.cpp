///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve()
{
    ll a, b; cin >> a >> b;
    if(a % b != 0) cout << a / b + 1 << endl;
    else cout << a / b << endl;

}

int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}