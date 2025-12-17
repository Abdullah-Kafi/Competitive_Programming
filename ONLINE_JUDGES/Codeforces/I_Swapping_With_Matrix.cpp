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

int mat[510][510];
int n;

void swap_row(int x, int y)
{
    int temp[500];
    for(int i = 1; i <= n; i++) temp[i] = mat[x][i];
    for(int i = 1; i <= n; i++) mat[x][i] = mat[y][i];
    for(int i = 1; i <= n; i++) mat[y][i] = temp[i];
}

void swap_column(int x, int y)
{
    int temp[500];
    for(int i = 1; i <= n; i++) temp[i] = mat[i][x];
    for(int i = 1; i <= n; i++) mat[i][x] = mat[i][y];
    for(int i = 1; i <= n; i++) mat[i][y] = temp[i];
}

void solve()
{
    int x, y;
    cin >> n >> x >> y;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++) cin >> mat[i][j];
    }
    
    swap_row(x, y);
    swap_column(x, y);

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++) cout << mat[i][j] << " ";
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