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
    int n, k; cin >> n >> k;;

    for(int i = 0; i < n; i++)
        cin >> ar[i];
    
    for(int i = n - k; i < n; i++)
        cout << ar[i] << " ";

    for(int i = 0; i < n - k; i++)
        cout << ar[i] << " ";


}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}