///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve()
{
    int tc; cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        int n; cin >> n;
        int cnt = 0;

        for (int j = 1; j <= n; j++)
        {
            if(n % j == 0) cnt++; 
        }
        cout << "Case " << i << ": " << cnt << endl;
    }
    
}

int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}