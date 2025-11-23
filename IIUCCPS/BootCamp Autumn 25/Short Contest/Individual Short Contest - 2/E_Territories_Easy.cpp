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
#define fraction() cout.unsetf(ios::floatfield); cout.precision(14); cout.setf(ios::fixed,ios::floatfield);

void solve()
{
    int n; cin >> n;
    vector<pair<int, int>> vp(n);
    for(int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;

        vp[i].first = x;
        vp[i].second= y;
    }

    double Min = 999999999, Minx, Miny;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            int x = abs(vp[i].first - vp[j].first);
            int y = abs(vp[i].second - vp[j].second);

            double ans = sqrt(x * x + y * y);
            if(ans < Min)
            {
                Min = ans; 
                Minx = x;  
                Miny = y;  
            }
        }
    }

    fraction() cout << sqrt(Minx * Minx + Miny * Miny) << el;
}
int main()
{
    optimize();
    
    // testCase
        solve();

    return 0;
}