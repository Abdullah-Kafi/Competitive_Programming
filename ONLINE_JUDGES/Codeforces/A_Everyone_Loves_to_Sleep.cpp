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
    int n, H, M, Min = INT_MAX;
    cin >> n >> H >> M;
    while(n--) {
        int h, m, min;
        cin >> h >> m;
        if(h == H && m == M) min = 0;
        else if(h > H || (h == H && m > M)) min = ((h - H) * 60) + (m - M);
        else min = 1440 - (((H - h) * 60) + (M - m));
        if(min < Min) Min = min;
    }
    cout << Min / 60 << " " << Min % 60 << endl;
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}