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
    vpii vp(3);
    int n; cin >> n;
    cin.ignore();
    int cnt0 = 0, cnt1 = 0;
    bool ans = true;
    for(int i = 0; i < 3; i++)
    {
        string s;
        cin >> s;
        cin.ignore();
        int c0 = 0, c1 = 0, f0 = 0, f1 = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] != '0') f0 = 1;
            if(s[i] != '1') f1 = 1;

            if(s[i] == '0') c0++;
            else c1++;
        }
        
        ans = ans && (f0 != f1);
        cnt0 += c0;
        cnt1 += c1;
        vp[i] = {c0, c1};
    }
    if(ans) cout << 0 << el;
    else if(cnt0 % n == 0 && cnt1 % n == 0)
    {
        if((vp[0].ff == vp[1].ff && vp[1].ff == vp[2].ff))
        {
            cout << max(vp[0].ff, vp[0].ss) << el;
        }
        else
        {
            for(int i = 0; i < 3; i++)
            {
                if(vp[i].ff == n || vp[i].ss == n) 
                {
                    if(i - 1 >= 0 && i - 1 <= 2) cout << min(vp[i - 1].ff, vp[i - 1].ss) << el;
                    else if(i + 1 >= 0 && i + 1 <= 2) cout << min(vp[i + 1].ff, vp[i + 1].ss) << el;
                    break;
                }
            }
        }
    }
    else cout << -1 << el;
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}