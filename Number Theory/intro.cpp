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


// prime generation
int totalNumber = 1e7 + 1;
vector<int> primes(totalNumber, 1); // mark all as 1(prime)

void sieve() // O(N * log(log(N)))
{
    for(int i = 2; i * i <= totalNumber; i++)
    {
        if(primes[i])
        {
            for(int j = i * i; j <= totalNumber; j += i) primes[j] = 0; // mark as not prime
        }
    }
}


// Lowest Prime Factor generation
// modified Sieve of Eratosthenes
vector<int> LPF(totalNumber, 1);
void mod_sieve()
{
    for(int i = 2; i * i <= totalNumber; i++)
    {
        if(LPF[i] == 1)
        {
            LPF[i] = i;
            for(int j = i * i; j <= totalNumber; j += i)
            {
                LPF[j] = i;
            }
        }
    }
}


// find prime factors of a number
map<ll, int> primeFactorize(ll num) // O(sqrt(N))
{
    map<ll, int> factors;

    // divide by 2 until it's odd
    while(num % 2 == 0)
    {
        factors[2]++;
        num /= 2;
    }

    // odd divisors from 3 up to sqrt(n)
    for(ll i = 3; i * i <= num; i++)
    {
        while(num % i == 0)
        {
            factors[i]++;
            num /= i;
        }
    }

    // if num is still greater than 1, it's a prime
    if(num > 1) factors[num]++;
    return factors;
}


// find all divisor of a number
vi all_divisor(int num) // O(sqrt(N))
{
    vi ans;
    for(int i = 1; i * i <= num; i++)
    {
        if(num % i == 0)
        {
            ans.push_back(i);
            if(num / i != i) ans.push_back(num / i);
        }
    }
    return ans;
}


ll fact(int n)
{
    if(n == 0) return 1;
    return n * fact(n - 1);
}


int NoD(int n)
{
    int cnt = 0;
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0) cnt++;
    }
    return cnt;
}


void solve()
{
    int n; cin >> n;

    // brute force solution to the problem discussed: https://codeforces.com/blog/entry/143150
    // vi vA(n), vB(n);
    // for(int i = 0; i < n; i++) cin >> vA[i];
    // int M; cin >> M;
    // ll ans = fact(M);
    // for(int i = 0; i < n; i++)
    // {
    //     vB[i] = vA[i] * ans;
    //     cout << NoD(vB[i]) << " ";
    // }


    // printing all divisor of a number
    // vi divisors = all_divisor(n);
    // for(int i : divisors) cout << i << " ";
    // cout << el; 


    // printing prime factors of a number
    // map<ll, int> ans;
    // ans = primeFactorize(n);
    // int size = ans.size();
    // int p = 2;
    // for(int i = 1; i <= size; i++)
    // {
    //     if(ans[p] != 0)
    //     {
    //         for(int j = 1; j <= ans[p]; j++) cout << p << " ";
    //     }
    //     p++;
    // }


    // find all primes till n
    // sieve();
    // for(int i = 2; i <= n; i++)
    // {
    //     if(primes[i]) cout << i << el;
    // }

    mod_sieve();
    for(int i = 1; i <= n; i++) cout << LPF[i] << " ";
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}