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
    string s1, s2;
    cin >> s1 >> s2;
    
    int l1 = s1.length(), l2 = s2.length();
    int cnt = 0;
    for(int k = 0; k < l1; k++)
    {
        for(int i = k; i < l1; i++)
        {
            int f = 0;
            for(int j = k; j <= i; j++)
            {
                if((s1[j] != s2[j]) && j < l2) f = 1;
            }
            if(!f) cnt++;
        }
    }
    cout << cnt << el;
    // for(int i = 0; i < l1; i++)
    // {
    //     if(s2[0] == s1[i])
    //     {
    //         cout << i;
    //         break;  
    //     }
    // }
    // cout << el;
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}