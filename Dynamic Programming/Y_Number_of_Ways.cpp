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

int mod_add(int a, int b)
{
    return (a % mod + b % mod) % mod;
}

int dp_Y[16][16];
int dp[1000];
int s, e, n;
vi v(1010);

int f(int cur) // example of counting dp
{
    if(cur >= e)
    {
        if(cur == e) return 1;
        else return 0;
    } 

    if(dp[cur] != -1) return dp[cur];

    int c = 0;

    for(int i = 0; i < n; i++)
        c = mod_add(c, f(cur + v[i]));

    return dp[cur] = c;
}

int way(int s, int e)
{
    if(s == e) return 1;
    else if(s > e) return 0;
    if(dp_Y[s][e] != -1) return dp_Y[s][e];
    
    int x = way(s + 1, e) + way(s + 2, e) + way(s + 3, e);
    return dp_Y[s][e] = x;
}

void solve()
{
    mem(dp_Y, -1);
    cin >> s >> e;
    cout << way(s, e) << el;
}

// how many ways(counting problem) are there so that, we can go from 's' to 'e' by adding value from 'v' array[]

void solve_class_problem()
{
    mem(dp, -1);
    cin >> s >> e;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> v[i];
    cout << f(s) << el;
}

int main()
{
    optimize();
    
    //testCase
        //solve();
        solve_class_problem();

    return 0;
}