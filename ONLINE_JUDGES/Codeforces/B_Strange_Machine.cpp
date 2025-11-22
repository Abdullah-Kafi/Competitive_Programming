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
    int n, q, fa = 0, fb = 0; cin >> n >> q;
    cin.ignore();
    string s;
    cin >> s;
    int len = s.length();
    if(len == 1 && s[0] == 'B') fa = 1;
    if(len == 1 && s[0] == 'A') fb = 1;
    for(int i = 0; i < len - 1; i++)
    {
        if(s[i] == 'B' || s[i] != s[i + 1]) fa = 1;
        if(s[i] == 'A' || s[i] != s[i + 1]) fb = 1; 
    }
    vi v(n);
    
    for(int i = 1; i <= q; i++)
    {
        int mac = 1;
        int cnt = 0;
        cin >> v[i];
        if(!fa) cout << v[i] << el;
        else if(!fb) cout << floor(log2(v[i]) + 1) << el;
        else {
            while(v[i] != 0)
            {
                if(s[mac - 1] == 'A')
                {
                    v[i]--;
                }
                else
                {
                    v[i] /= 2;
                }
                cnt++;
                if(mac < n) mac++;
                else if(mac == n) mac = 1;
            }
            cout << cnt << el;
        }
    }
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}