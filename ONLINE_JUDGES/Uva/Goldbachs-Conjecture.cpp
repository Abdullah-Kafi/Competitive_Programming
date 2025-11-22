///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<bits/stdc++.h>
using namespace std;

const int sz = 1e6 + 1;
int ar[sz];

using ll = long long;

#define el "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

vector<bool> checkPrime(sz);
set<ll> prime;

void sieve(int n)
{
    checkPrime[0] = 1;
    checkPrime[1] = 1;
    for(ll i = 2; i <= n; i++)
    {
        if(checkPrime[i] != 1)
        {
            for(ll j = i * i; j <= n; j += i)
            {
                checkPrime[j] = 1;
            }
        }
    }
    
    prime.clear();
    for(ll i = 2; i <= n; i++)
    {
        if(!checkPrime[i])
        {
            prime.insert(i);
        }
    }
}

void solve()
{
    int n; cin >> n;

    while(n)
    {
        sieve(n);
        int f = 0;
        int s = prime.size();
        for(auto i: prime)
        {
            int a = n - i;
            if(prime.find(a) != prime.end())
            {
                f = 1;
                cout << n << " = " << i << " + " << a << el;
                break;
            }
        }
        if(!f) cout << "Goldbach's conjecture is wrong." << el;
        cin >> n;
    }
}
int main()
{
    //optimize();
    
    //testCase
        solve();

    return 0;
}