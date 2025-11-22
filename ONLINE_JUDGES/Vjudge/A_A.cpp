///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define el "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve()
{
    set<int> s;
    int n; cin >> n;
    while(n--)
    {
        int n, m; cin >> n >> m;

        if(n == 1)
        {
            s.insert(m);
        }
        else if(n == 2)
        {
            s.erase(m);
        }
        else
        {
            if(s.find(m) != s.end()) cout << "Yes" << el;
            else cout << "No" << el;
        }
    }
}

int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}