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
    while (n--)
    {
        int num; cin >> num;
      
        map<int, int> mp;
        for(int i = 1; i <= num; i++)
        {
            int tem = i;
            while(tem)
            {
                int t = tem % 10;
                mp[t]++;
                tem /= 10;
            }
        }
 
        for(int i = 0; i < 9; i++)
        {
            cout << mp[i] << " ";
        }
        cout << mp[9];
        cout << el;
    }
    
}
int main()
{
    optimize();
    
    // testCase
        solve();

    return 0;
}