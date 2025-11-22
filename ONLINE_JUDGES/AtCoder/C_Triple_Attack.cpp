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
    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    //Bruteforce
    ll t = 1;
    
    for(int i = 0; i < n; i++)
    {
        while(1)
        {
            if(ar[i] >= 1) 
            {
                if(t % 3 == 0) ar[i] -= 3;
                else ar[i]--;
                t++;
            }
            else break;
        }
    }
    cout << t - 1 << el;
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}