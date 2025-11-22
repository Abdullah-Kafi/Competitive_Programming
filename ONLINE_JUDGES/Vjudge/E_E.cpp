///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH
#include<bits/stdc++.h>
using namespace std;

const int mx = 1000000;
int newAr[mx];

typedef long long ll;

#define el "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve()
{
    int n; cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];

    int q; cin >> q;
    while(q--)
    {
        int x;
        cin >> x;
        auto it = lower_bound(v.begin(), v.end(), x);
        if(*it == x)
        {
            cout << "Yes" << " " << it - v.begin() + 1 << el;
        }
        else cout << "No" << " " << it - v.begin() + 1 << el;
    }
}

int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}