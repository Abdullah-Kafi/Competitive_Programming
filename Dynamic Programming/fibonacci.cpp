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

/// 3 steps to solve dp problem(from recursion)::

// 1. memoization -- 3 steps
    // 1. create dp table - dimension (number of parameters in recursive function) & initialize
    // 2. after base case put condition
    // 3. save value in dp table before returning
// 2. overlapping subproblem
// 3. optimal substructue

// step - 1:
int dp[100]; // dp table

int cnt = 0;

// exponent --> linear: 2^n --> n    
int fib(int n)
{
    cnt++;
    if(n <= 2) return 1;

    //step - 2:
    if(dp[n] != 0) return dp[n];

    int x = fib(n - 1) + fib(n - 2);

    //step - 3:
    dp[n] = x;

    return x; // return dp[n] = x;
}

void solve()
{
    // step - 1:
    mem(dp, -1);
    int n; cin >> n;
    cout << fib(n) << el;
    cout << cnt << el;
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}