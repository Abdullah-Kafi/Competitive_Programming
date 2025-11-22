///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<bits/stdc++.h>
using namespace std;
const int mx = 1e5 + 10;
int ar[mx];
using ll = long long;

#define el "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve()
{
    int n, sum = 0, cnt = 0; cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if(ar[i] == 1) cnt++;
    }
    
    if(cnt == n) cout << n - 4 << el;

    else
    {
        for(int i = 0; i < n - 1; i++)
        {  
            if(ar[i] == -1 && ar[i + 1] == -1) 
            {
                ar[i] = 1, ar[i + 1] = 1;
                break;
            }
        }
        
        for(int i = 0; i < n; i++)
        {
            sum += ar[i];
        }

        cout << sum << el;
    }

    
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}