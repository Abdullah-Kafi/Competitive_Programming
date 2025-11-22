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

    int l1 = s1.length();
    int l2 = s2.length();

    for(int i = 0; i < l1; i++)
    {
        if(s1[i] >= 'A' && s1[i] <= 'Z') s1[i] += 32;
    }

    for(int i = 0; i < l2; i++)
    {
        if(s2[i] >= 'A' && s2[i] <= 'Z') s2[i] += 32;
    }

    if(s1 < s2) cout << "-1" << el;
    else if(s1 > s2) cout << 1 << el;
    else cout << 0 << el; 
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}