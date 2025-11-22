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
    vector<int> v;
    int n; cin >> n;

    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        v.push_back(x);
    }

    int x; cin >> x;
    v.erase(v.begin() + (x - 1));

    int a, b;
    cin >> a >> b;
    v.erase(v.begin() + (a - 1), v.begin() + (b - 1));

    int l = v.size();

    cout << l << el;

    for(int i = 0; i < l; i++) cout << v[i] << " ";
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}