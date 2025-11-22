///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve()
{
    char s[51]; cin >> s;
    int len = strlen(s);

    int f = 0;

    for(int i = 0; i < len - 1; i++)
    {
        if(s[i] != s[i + 1])
            f = 1;
    }
    
    if(!f) cout << "-1" << endl;
    else cout << len - 1 << endl;
}

int main()
{
    //optimize();
    
    testCase
        solve();

    return 0;
}