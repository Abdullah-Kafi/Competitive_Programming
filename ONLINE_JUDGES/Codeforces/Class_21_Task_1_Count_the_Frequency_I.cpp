///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve() // here limit of a[i] is 1e6 so, for counting frequency map is needed(stl part)
{
    int tc; cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        int cnt[100123] = {0};
        int ar[100001];
        int n; cin >> n;

        for(int j = 1; j <= n; j++)
        {
            cin >> ar[j];
            cnt[ar[j]]++;
        }

        int nqr; cin >> nqr;

        cout << "Case " << i << ":" << endl;

        for(int j = 1; j <= nqr; j++)
        {
            int s; cin >> s;
            cout << cnt[s] << endl;
        }
    }

}

int main()
{
    optimize();

    //testCase
        solve();

    return 0;
}
