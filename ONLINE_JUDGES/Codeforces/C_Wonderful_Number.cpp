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

bool is_odd(int n)
{
    if(n % 2 == 0) return false;
    else return true;
}

bool is_bin_pal(int n)
{
    vi v;
    while(n)
    {
        int c = n % 2;
        v.push_back(c);
        n /= 2;
    }

    int i = 0, j = v.size() - 1, f = 1;
    while(i <= j)
    {
        if(v[i] != v[j]) f = 0;
        i++;
        j--;
    }
    if(!f) return false;
    else return true;
}

void solve()
{
    int n; cin >> n;
    if(is_odd(n) && is_bin_pal(n)) cout << "YES" << el;
    else cout << "NO" << el;
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}