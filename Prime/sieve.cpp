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

vector<bool> checkPrime(sz, 0);
vector<int> prime;

/// pre-calculate primes up to n
void sieve(int n)
{
    checkPrime[0] = 1;
    checkPrime[1] = 1;
    for(int i = 2; i * i <= n; i++)
    {
        if(checkPrime[i] != 1)
        {
            for(int j = i * i; j <= n; j += i)
            {
                checkPrime[j] = 1;
            }
        }
    }

    /// storing primes into an vector
    for(int i = 2; i <= n; i++)
    {
        if(!checkPrime[i])
        {
            prime.push_back(i);
        }
    }
}

void solve()
{
    sieve(1000000);
    cout << "Enter up to which number you want to know the total count of prime: ";
    int n; cin >> n; /// enter the number

    auto it = upper_bound(prime.begin(), prime.end(), n);
    int cnt = it - prime.begin();

    cout << "Number of prime up to " << n << " is: " << cnt << el;
}
int main()
{
    //optimize();

    //testCase
        solve();

    return 0;
}
