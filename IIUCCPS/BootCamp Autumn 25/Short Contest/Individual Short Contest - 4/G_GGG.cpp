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
    int n; cin >> n;
    if(n == 1 || n == 2) cout << 1 << el;
    else 
    {
        int Max = INT_MIN;
        int cnt = 0, ans, bit;
        for(int k = 1; k <= n; k++)
        {
            for(int i = k; i <= n; i++)
            {
                cnt = 0, bit = 0;
                int f = 1;
                for(int j = k; j <= i; j++)
                {
                    if(j + 1 <= i && f == 1)
                    {
                        bit = j & (j + 1);
                        f = 0;
                    }
                    else bit &= j;
                    cnt++;
                }
                if(cnt >= Max && bit > 0) 
                {
                    Max = cnt;
                    if(bit > 0) ans = cnt;
                } 
            }
        }
        cout << ans << el;      
    }
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}