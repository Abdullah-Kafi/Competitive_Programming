///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<bits/stdc++.h>
using namespace std;

const int sz = 1e6;
int ar[sz];

using ll = long long;

#define el "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve()
{
    int n; cin >> n;
    vector<int> v(n);
    vector<ll> b(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        ar[v[i]]++;
    }
    
    vector<int> :: iterator max = max_element(v.begin(), v.end());

    for(int i = 0; i < n; i++)
    {
        ll sum = 0;
        for(int j = v[i] + 1; j <= (*max); j++)
        {
            sum += (j * ar[j]);
        }
        b.push_back(sum);
    }
    for(int i = 0; i < n; i++) cout << b[i] << " ";
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}