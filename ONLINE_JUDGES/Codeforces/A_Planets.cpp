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
    int mx = 100;
    int ar[mx] = {0}, freq[mx] = {0};

    int n, c; cin >> n >> c;

    for(int i = 1; i <= n; i++)
    {
        cin >> ar[i];
        freq[ar[i]]++;
    }
    int cnt = 0, oneOrbt = 0;
    for(int i = 1; i <= 100; i++)
    {
        if(freq[i] != 0 && freq[i] == 1) cnt++;
        if(freq[i] == 1) oneOrbt++;
    }
    if(cnt * c < freq[cnt]) cout << cnt * c + oneOrbt << el;
    else cout << freq[cnt] + oneOrbt << el;
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}