///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<bits/stdc++.h>
using namespace std;

const int sz = 1e7 + 10;
int ar[sz];

using ll = long long;

#define el "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve()
{
//    int n;
//    cin >> n;
//    int cnt = 0;
    /// Number of Divisor : O(sqrt(n))
//    for(int i = 1; i * i <= n; i++)
//    {
//        if(i * i == n) cnt++;
//        else if(n % i == 0) cnt += 2;
//    }
//    cout << cnt << el;

    int lim = 1e7;
    /// Calculating Number of Divisor Up to n:
    for(int i = 1; i <= lim; i++)
    {
        for(int j = i; j <= lim; j += i)
        {
            ar[j]++;
        }
    }

    /// Printing Number of Divisors from 1 to n:
//    for(int i = 1; i <= lim; i++)
//    {
//        cout << i << ": " << ar[i] << el;
//    }
}
int main()
{
    optimize();

    //testCase
        solve();

    return 0;
}
