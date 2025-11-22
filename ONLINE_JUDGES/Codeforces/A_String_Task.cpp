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

bool isVowel(char ch)
{
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y');
}

void solve()
{
    string s, ans;
    cin >> s;

    for(auto i: s)
    {
        if(i >= 'A' && i <= 'Z') i += 32;

        if(!isVowel(i))
        {
            ans += '.';
            ans += i;
        }
    }

    cout << ans << el;
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}