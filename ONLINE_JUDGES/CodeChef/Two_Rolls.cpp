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
    int x, y; cin >> x >> y;
    vector<int> v;
    for(int i = 0; i < 6; i++)
    {
        v.push_back(y + i);
    }
    int d = 50 - x;
    for(int i = 0; i < 6; i++)
    {
        for(int j = i; j < 6; j++)
        {
            if(v[i] + v[j] == d)
            {
                cout << "Yes" << endl;
                return;
            }
        }
    }
    cout << "No" << endl;
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}