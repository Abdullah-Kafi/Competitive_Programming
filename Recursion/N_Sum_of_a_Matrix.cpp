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

int matA[101][101], matB[101][101], matSum[101][101];
int r, c;
int dp[101][101];

void f(int i, int j)
{
    if(j == c) return;
    if(i == r) return;

    if(dp[i][j] != INT_MIN) return;
    dp[i][j] = matA[i][j] + matB[i][j];

    f(i, j + 1);
    i = i + 1, j = 0;
    f(i, j);
}

void solve()
{
    cin >> r >> c;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++) cin >> matA[i][j];
    }

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++) cin >> matB[i][j];
    }

    for(int i = 0; i < 100; i++)
    {
        for(int j = 0; j < 100; j++) dp[i][j] = INT_MIN;
    }

    f(0, 0);

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++) cout << dp[i][j] << " ";
        cout << el;
    }
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}