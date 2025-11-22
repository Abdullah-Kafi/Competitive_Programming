///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve()
{
    int cnt[1000] = {0}, ar[1000];
    int n; cin >> n;
    int max = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        cin >> ar[i];
        if(ar[i] >= max) max = ar[i];
        cnt[ar[i]]++;
    }
    
    int f = 0;
    for(int i = 1; i <= max - 1; i++)
    {
        if(cnt[1] == cnt[i + 1])
        {
            f = 1;
            break;
        }
    }
    if(!f) cout << "YES" << endl;
    else cout << "NO" <<endl;
}

int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}