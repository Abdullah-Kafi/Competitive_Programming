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

vi v(100000);
int n, m;

// 35 mins + 32 mins = 67 mins
// took a lot of time because of a silly mistake of declaring a local and global variable with the same name.

ll f(int i) // calculates sum of last M numbers
{
    if(i == n) return 0;

    return f(i + 1) + v[i];
}

void solve()
{
    cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> v[i];
    int ind = n - m;
    cout << f(ind) << el;
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}