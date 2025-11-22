///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<bits/stdc++.h>
using namespace std;

const int sz = 1000;
int ar[sz];

using ll = long long;

#define el "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve()
{
    char s[1001];
    scanf("%s", s);
    int num[10] = {0};
    for(int i = 0; s[i]; i++)
    {
        if(s[i] >= '0' && s[i] <= '9') num[s[i] - '0']++;
    }
    for(int i = 0; i < 10; i++) printf("%d ", num[i]);
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}