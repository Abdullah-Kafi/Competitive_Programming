// Problem - Creating Expression (is divisible by X version) (https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/V)
//     - DP by preserving the full sum
//     - DP by taking modulo along the way trick

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
int n, x;

int f(int i, int curr_sum)
{
    if(i == n - 1) return curr_sum % x == 0;
    int a, b;
    a = f(i + 1, curr_sum + v[i + 1]);
    b = f(i + 1, curr_sum - v[i + 1]);
    // have to optimise for curr_sum
    return a || b;
}

void solve()
{
    cin >> n >> x;
    for(int i = 0; i < n; i++) cin >> v[i];
    cout << f(0, v[0]) << el;
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}