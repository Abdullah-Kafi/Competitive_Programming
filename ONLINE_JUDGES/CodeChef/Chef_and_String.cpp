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
    int n, k; cin >> n >> k;
    cin.ignore();
    string s; cin >> s;
    for(int i = 0; i < n - 1; i++)
    {
        if(s[i] == 'I' && s[i + 1] != 'I') s[i] = s[i + 1];
        if(s[i] != 'I' && s[i + 1] == 'I') s[i + 1] = s[i];
    }
    
    for(int i = n - 1; i > 0; i--)
    {
        if(s[i] == 'I' && s[i - 1] != 'I') s[i] = s[i - 1];
        if(s[i] != 'I' && s[i - 1] == 'I') s[i - 1] = s[i];
    }

    ll cnt = 0;
    for(int i = 0; i < n - 1; i++)
    {
        if(s[i] == s[i + 1]) cnt++;
    }

    if(s[0] == s[n - 1] && k > 1) cout << (cnt * k) + (k - 1) << el;
    else cout << cnt * k << el;
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}