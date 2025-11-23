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
    int n; cin >> n;
    vector<int> v(n);
    int Max = INT_MIN;
    map<int, int> mp;

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i] > Max) Max = v[i];   
        mp[v[i]]++;
    }

    int Max_ele = INT_MIN;
    for(int i = 1; i <= Max; i++)
    {
        if(mp[i] != 0)
        {
            if(mp[i] > Max_ele) Max_ele = mp[i]; 
        }
    }
    if(Max_ele != 1) cout << n - Max_ele << el;
    else cout << n - 1 << el;
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}