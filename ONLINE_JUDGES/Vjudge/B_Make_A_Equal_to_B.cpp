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
    int ar1[101], ar2[101];
    int n; cin >> n;
    int cnt1 = 0; int cnt2 = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> ar1[i];
        if(ar1[i] == 1) cnt1++; 
    }
    for(int i = 0; i < n; i++)
    {
        cin >> ar2[i];
        if(ar2[i] == 1) cnt2++;
    }
    int f = 0;
    for(int i = 0; i < n; i++) 
    {
        if(ar1[i] != ar2[i]) f++;
    }
    if(f == 0) cout << 0 << el;
    else if(cnt1 == cnt2) cout << 1 << el;
    else if(cnt2 == 0) cout << cnt1 << el;
    else if(f > 1) cout << abs(cnt1 - cnt2) + 1 << el;
    else if(f == 1) cout << 1 << el;
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}