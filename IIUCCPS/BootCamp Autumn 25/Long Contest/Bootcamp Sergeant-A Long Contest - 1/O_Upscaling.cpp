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
    int n; cin >> n;

    if(n == 1) 
    {
        cout << "##\n##" << el;
        return;
    }

    int hash = 0, cnt = 0;
    for(int i = 1; i <= 2 * n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(hash == 0) cout << "##";
            else cout << "..";
            if(hash == 0) hash = 1;
            else hash = 0;
        }
        if(n % 2)
        {
            if(hash == 1) hash = 0;
            else hash = 1;
        }
        cnt++;
        if(cnt % 2 == 0)
        {
            if(hash == 0) hash = 1;
            else hash = 0;
            cnt = 0;
        }

        cout << el;
    }
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}