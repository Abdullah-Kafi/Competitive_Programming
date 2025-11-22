///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<bits/stdc++.h>
using namespace std;

const int sz = 50;
int ar[sz];

using ll = long long;

#define el "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(ar[i] == ar[j])
            {
                ar[i] = 0;
                cnt++;
            }
        }
    }

    cout << n - cnt << el;

    for (int i = 0; i < n; i++)
    {
        if(ar[i] != 0) cout << ar[i] << " ";
    }
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}