///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<bits/stdc++.h>
using namespace std;

using ll = long long;

#define el "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve()
{
    vector<int> vc;
    int n; cin >> n;

    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        
        vc.push_back(x);
    }

    for(int i = 0; i < n; i++)
    {
        cout << vc[i] << el;
    }
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}