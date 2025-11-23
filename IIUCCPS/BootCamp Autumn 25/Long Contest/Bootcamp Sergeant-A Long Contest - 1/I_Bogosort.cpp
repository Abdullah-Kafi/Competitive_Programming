///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<bits/stdc++.h>
using namespace std;

const int sz = 0;
int ar[sz];

using ll = long long;

#define el "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve()
{
    int n; cin >> n;
    vector<int> v(n + 10);

    for(int i = 1; i <= n; i++)
    {
        cin >> v[i]; 
    }

    int f;
    while (1)
    {
        f = 1;
        for(int i = 1; i <= n - 1; i++)
        {
            for(int j = i + 1; j <= n; j++)
            {
                if((j - v[j]) == (i - v[i]))
                {
                    f = 0;
                    swap(v[i], v[j]);
                } 
            }
        }
        if(f == 0) continue;
        else break;
    }
    
    for(int i = 1; i <= n; i++) cout << v[i] << " ";
    cout << el;
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}