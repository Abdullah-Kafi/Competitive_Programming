///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH
#include<bits/stdc++.h>
using namespace std;

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
    
    int x; cin >> x;
    v.erase(v.begin() + (x - 1));

    int s, e; cin >> s >> e;
    v.erase(v.begin() + (s - 1), v.begin() + (e - 1));

    int l = v.size(); 
    cout << l << el;
    for(int i = 0; i < l; i++) cout << v[i] << " ";
    cout << el;
} 

int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}