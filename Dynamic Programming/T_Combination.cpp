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

ll dp[31][31];
ll nCr(int n, int r) // exists overlapping subproblem -- dp
{
    if(r > n) return 0;
    if(n == r) return 1;
    else if(r == 1) return n;
    else if(r == 0) return 1;
    if(dp[n][r] != -1) return dp[n][r];

    ll x = nCr(n - 1, r) + nCr(n - 1, r - 1);
    return dp[n][r] = x;
}

void solve()
{
    mem(dp, -1);
    int n, r; cin >> n >> r;
    cout << nCr(n, r) << el;
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}