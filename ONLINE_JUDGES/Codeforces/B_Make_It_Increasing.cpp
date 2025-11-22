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
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if(v[n - 1] < n - 1) cout << -1 << el; 

    else{
        int cnt = 0, f = 0;
        for(int i = n - 1; i > 0; i--)
        {
            while(!(v[i - 1] < v[i]))
            {
                cnt++;
                v[i - 1] /= 2;
                if(v[i] == 0 && v[i - 1] == 0)
                {
                    f = 1;
                    break;
                }
            }
        }
        
        // for(int i = 0; i < n - 1; i++)
        // {
        //     if(v[i] >= v[i + 1]) f = 1;
        // }
        if(!f) cout << cnt << el;
        else cout << -1 << el;
    }
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}