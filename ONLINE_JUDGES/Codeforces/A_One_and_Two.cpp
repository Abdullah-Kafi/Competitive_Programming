///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<bits/stdc++.h>
using namespace std;

const int sz = 1010;
int ar[sz];

using ll = long long;

#define el "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve()
{
    //O(N) solution:
    int n, cnt2 = 0; cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> ar[i];
        if(ar[i] == 2) cnt2++;
    }

    if( ( n - cnt2 ) == n ) cout << 1 << el;
    else if(cnt2 % 2) cout << -1 << el;
    else
    {
        int cnt = 0;
        cnt2 /= 2;
        for(int i = 1; i <= n; i++)
        {
            if(ar[i] == 2) cnt++;
            if(cnt == cnt2) 
            {
                cout << i << el;
                break;
            }
        }
    }

    //Bruteforce
    // int f = 0;
    // for(int k = 1; k <= n - 1; k++)
    // {
    //     double ml1 = 1, ml2 = 1;
    //     int i;
    //     for(i = 1; i <= k; i++)
    //         ml1 *= ar[i];
    //     for( ; i <= n; i++)
    //         ml2 *= ar[i];

    //     if(ml1 == ml2)
    //     {
    //         f = 1;
    //         cout << k << el;
    //         break;
    //     }
    // }
    // if(!f) cout << -1 << el;

}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}