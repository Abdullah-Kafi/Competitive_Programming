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

bool checkround(int n)
{
    while(1)
    {
        if(n <= 9 && n >= 1) break;
        if(n % 10 != 0) return false;
        n /= 10;
    }
    return true;
}

void solve()
{
    int n; cin >> n;
    if(checkround(n)) cout << 1 << endl << n << endl;
    else
    {
        // vector<int> ans;
        // int i = 1, cnt = 0;
        // while(1)
        // {
        //     int lstDig = n % (10 * i);
        //     cnt++;
        //     ans.push_back(lstDig);
        //     int dif = n - lstDig;
        //     n = dif;
        //     if(checkround(dif))
        //     {
        //         ans.push_back(dif);
        //         cout << ++cnt << endl;
        //         for(auto u: ans) cout << u << " ";
        //         cout << endl;
        //         break;
        //     } 
        //     i *= 10;
        // }
        int cnt = 0, i = 1;
        vector<int> ans;
        while (n)
        {   
            int d = n % 10;
            if(d != 0)
            {
                ans.push_back(d * i);
                cnt++;
            }
            i *= 10;
            n /= 10;
        }
        cout << cnt << endl;
        for(int x: ans) cout << x << " ";
        cout << endl;
    }
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}