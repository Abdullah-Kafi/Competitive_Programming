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
    int sum = 0;
    int n; cin >> n;
    vector<int> vL, vR;
    for(int i = 1; i <= n; i++)
    {
        int x; char s;
        cin >> x >> s;
        if(s == 'L') vL.push_back(x);
        else vR.push_back(x);
    }    
    
    if(vL.size() != 0) 
    {
        for (int i = 0; i < vL.size() - 1; i++)
        {
            sum += abs(vL[i] - vL[i + 1]);
        }
    }
    if(vR.size() != 0)
    {
        for (int i = 0; i < vR.size() - 1; i++)
        {
            sum += abs(vR[i] - vR[i + 1]);
        }
    }
    cout << sum << el;
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}