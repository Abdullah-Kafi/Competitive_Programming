///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<bits/stdc++.h>
using namespace std;

const int sz = 2e5 + 10;
int ar[sz];

using ll = long long;

#define el "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve()
{
    int n, k; cin >> n >> k;

    int min = INT_MAX, minInd, cnt = 0;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i] < min) 
        {
            min = v[i];
            minInd = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(minInd != i)
        {
            cnt += (( k - v[i] ) / min);
        }
    }
    cout << cnt << el;
}
int main()
{
    optimize();
    
    testCase
        solve();
    
    return 0;
}