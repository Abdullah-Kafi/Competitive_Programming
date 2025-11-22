///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
const int sz = 0;
int ar[sz];
using ll = long long;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pair<int, int>> vpii;
typedef pair<int, int> pii;
typedef vector<bool> vbl;
typedef vector<pair<ll, ll>> vpll;
typedef pair<ll, ll> pll;
#define mem(var, x) memset((var), (x), sizeof(var))
#define PQ priority_queue
#define ff first
#define ss second
#define pb push_back
#define MP make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define el "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve()
{
    int n, c1 = 0, c2 = 0, c3 = 0, cnt = 0; cin >> n;
    vi v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i] == 1) c1++;
        else if(v[i] == 2) c2++;
        else c3++;
    }
    if(c1 >= c3) cnt += c3;
    else if(c3 >= c1) cnt += c1;
    if(!c2) cout << cnt << el;
    else cout << cnt + (c2 - 1) << el;
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}