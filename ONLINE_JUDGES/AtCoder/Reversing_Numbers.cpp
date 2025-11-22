///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH
#include<bits/stdc++.h>
using namespace std;

const int mx = 1e5;
int ar[mx];

typedef long long ll;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    for (int i = 0; i < n / 2; i++)
    {
        swap(ar[i], ar[n - 1 - i]);
    }

    for (int i = 0; i < n - 1; i++)
    {       
        cout << ar[i] << " ";
    }

    cout << ar[n - 1] << endl;
}

int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}