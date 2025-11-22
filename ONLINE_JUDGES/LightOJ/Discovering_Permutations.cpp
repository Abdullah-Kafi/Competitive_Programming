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
    int tc; cin >> tc;
    string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i = 1; i <= tc; i++)
    {
        int n, k, cnt = 0;
        cin >> n >> k;
        vector<char> v;
        for(int j = 0; j < n; j++)
        {
            v.push_back(alpha[j]);
        }
        cout << "Case" << " " << i << ":" << el;
        do
        {
            for(auto s: v) cout << s;
            cout << el;
            cnt++;
            if(cnt == k) break;
        } while (next_permutation(v.begin(), v.end()));
    }
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}