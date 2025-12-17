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

vi v(110);

int max_num(int n)
{
    int Max = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        if(v[i] > Max) Max = v[i];
    }
    return Max;
}

int min_num(int n)
{
    int Min = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        if(v[i] < Min) Min = v[i];
    }
    return Min;
}

int cnt_prime(int n)
{
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        int f = 0;
        for(int j = 2; j * j <= v[i]; j++)
        {
            if(v[i] % j == 0) f = 1;
        }
        if(!f && v[i] != 1) cnt++;
    }
    return cnt;
}

int cnt_pal(int n)
{
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        if(v[i] >= 1 && v[i] <= 9) cnt++;
        else if(((v[i] % 10) == (v[i] / 10)) && v[i] != 100) cnt++;
    }
    return cnt;
}

int num_max_div(int n)
{
    int temp, Max = INT_MIN, ans;
    for(int i = 0; i < n; i++)
    {
        int cnt = 0;
        for(int j = 1; j <= v[i]; j++)
        {
            if(v[i] % j == 0) cnt++;
        }
        if(cnt > Max)
        {
            temp = v[i];
            Max = cnt;
            ans = v[i];
        }
        else if(cnt == Max && v[i] > temp) ans = v[i];
        else if(cnt == Max && v[i] < temp) ans = v[i];
    }
    return ans;
}

void solve()
{
    int n; cin >> n;
    for(int i = 0; i < n; i++) cin >> v[i];

    cout << "The maximum number : " << max_num(n) << el;
    cout << "The minimum number : " << min_num(n) << el;
    cout << "The number of prime numbers : " << cnt_prime(n) << el;
    cout << "The number of palindrome numbers : " << cnt_pal(n) << el;
    cout << "The number that has the maximum number of divisors : " << num_max_div(n) << el;
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}