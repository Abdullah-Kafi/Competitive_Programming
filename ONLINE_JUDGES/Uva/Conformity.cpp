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
    int n; cin >> n;
    while(1)
    {
        if(n == 0) break;
        else
        {
            vector<vector<int>> v;
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < 5; j++)
                {
                    int x;
                    cin >> x;
                    v[i].push_back(x);
                }
                sort(v[i].begin(), v[i].end());
            }
            int cnt = 0;
            for(int i = 0; i < n - 1; i++)
            {
                for(int j = i + 1; j < 5; j++)
                {
                    if(v[i] == v[j]) cnt++;
                }
            }
            if(cnt)
            {
                n -= (n - cnt);
                cout << n << el;
            }         
            else cout << n << el;
        }
        cin >> n;
    }
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}