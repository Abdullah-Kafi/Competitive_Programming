///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<bits/stdc++.h>
using namespace std;

const int sz = 6;
int ar[sz];

using ll = long long;

#define el "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve()
{
    vector<int> v(10);
    for(int i = 0; i < 4; i++) cin >> v[i];
    int a = v[0] + v[1];
    int b = v[2] - v[1];
    int c = v[3] - v[2];
    // int min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    v[4] = v[3];
    v[3] = v[2];

    v[2] = a;
    int cnt1 = 0;
    for(int i = 0; i < 3; i++)
    {
        if(v[i] + v[i + 1] == v[i + 2]) cnt1++;
    }
    v[2] = b;
    int cnt2 = 0;
    for(int i = 0; i < 3; i++)
    {
        if(v[i] + v[i + 1] == v[i + 2]) cnt2++;
    }
    v[2] = c;
    int cnt3 = 0;
    for(int i = 0; i < 3; i++)
    {
        if(v[i] + v[i + 1] == v[i + 2]) cnt3++;
    }
    int max = (cnt1 > cnt2) ? ((cnt1 > cnt3) ? cnt1 : cnt3) : ((cnt2 > cnt3) ? cnt2 : cnt3);
    cout << max << el;
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}