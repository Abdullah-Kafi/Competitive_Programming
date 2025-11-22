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

void f1(int n)
{
    if(n == 0) return;

    f1(n - 1);
    cout << el;
    for(int i = 0; i < n; i++) cout << "*";
}

void f2(int n)
{
    if(n == 0) return;

    for(int i = 0; i < n; i++) cout << "*";
    cout << el;
    f2(n - 1);
}

void f3(int n)
{
    if(n < 10)
    {
        cout << n;
        return;
    }
    f3(n / 10);
    cout << " ";
    cout << n % 10;
}

int sum(int arr[], int n, int i)
{
    if(i == (n - 1)) return arr[i];
    return arr[i] + sum(arr, n, i + 1);
}

int rsum(int arr[], int n, int i)
{
    if(i == -1) return 0;

    int sum = rsum(arr, n, i - 1);
    sum += arr[i];
    return sum;
}

void solve()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    cout << rsum(arr, n, n - 1) << el;
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}