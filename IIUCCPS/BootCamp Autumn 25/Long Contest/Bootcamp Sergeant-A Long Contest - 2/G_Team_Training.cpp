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
    int n, x; cin >> n >> x;
    
    int grp = 0;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        int t; cin >> t;
        if(t >= x) grp++;
        else v.push_back(t);
    }

    sort(v.begin(), v.end());

    int sz = v.size();

    // for(int i = sz - 1; i >= 1; i -= 2)
    // {
    //     if(min(v[i], v[i - 1]) * 2 >= x)
    //     {
    //         grp++;  
    //     }
    //     else if((v[0] * (i + 1)) >= x) grp++;
    // }

    int i = sz - 1;
    int c = 2;
    while(i > 0)
    {
        if(!(c <= (i + 1))) break;
        if(v[i - (c - 1)] * c >= x)
        {
            grp++;  
            i -= c;
            c = 2;
        }
        else c++;
    }

    cout << grp << el;
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}