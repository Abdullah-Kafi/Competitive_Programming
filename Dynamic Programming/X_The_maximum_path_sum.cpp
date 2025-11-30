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

int mat[11][11];
int n, m;
int dp[20][20];

int maxSum(int i, int j)
{
    if(i == n || j == m) return INT_MIN;
    if(i == n - 1 && j == m - 1) return mat[i][j];
    if(dp[i][j] != INT_MAX) return dp[i][j]; 

    int path_1, path_2;
    if(i < n) path_1 = maxSum(i + 1, j);
    if(j < m) path_2 = maxSum(i, j + 1);

    return dp[i][j] = mat[i][j] + max(path_1, path_2);
}

void solve()
{
    for(int i = 0; i < 20; i++)
    {
        for(int j = 0; j < 20; j++) dp[i][j] = INT_MAX;
    }
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++) cin >> mat[i][j];
    }
    cout << maxSum(0, 0) << el;
} 
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}