///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH
#include<bits/stdc++.h>
using namespace std;

const int mx = 1e6 + 10;
bool isSquare[mx];

typedef long long ll;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);


void solve()
{
    for(int i = 1; i <= 1000; i++)
    {
        isSquare[i * i] = 1;
    }

    int tc; cin >> tc;

    for(int i = 1; i <= tc; i++)
    {
        int n; cin >> n;

        if(isSquare[n]) cout << "Case " << i << ": YES" << endl;
        else cout << "Case " << i << ": NO" << endl;
    }
    
}

int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}