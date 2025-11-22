///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH
#include<bits/stdc++.h>
using namespace std;

const int mx = 4e5 + 10;
int ar[mx], freq[mx];

typedef long long ll;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve()
{
    int n; cin >> n;

    for(int i = 1; i <= 4 * n - 1; i++)
    {
        cin >> ar[i];
        freq[ar[i]]++;
    }

    for(int i = 1; i <= n; i++)
    {
        if(freq[i] == 3) cout << i << endl;
    }
}

int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}