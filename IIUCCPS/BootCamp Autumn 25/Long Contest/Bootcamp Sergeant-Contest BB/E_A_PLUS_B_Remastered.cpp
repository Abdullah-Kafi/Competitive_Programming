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
    int frq[201] = {0};
    vector<int> va(n), vb(n);

    int f1 = 0, f2 = 0;
    cin >> va[0];
    for(int i = 1; i < n; i++)
    {
        cin >> va[i];
        if(va[i] != va[i - 1]) f1 = 1;
    }
    cin >> vb[0];
    for(int i = 1; i < n; i++)
    {
        cin >> vb[i];
        if(vb[i] != vb[i - 1]) f2 = 1;
    }
    
    if(!f1 && !f2)
    {
        for(int i = n - 1; i >= 0; i--) cout << va[i] << " ";
        cout << el;

        for(int i = n - 1; i >= 0; i--) cout << vb[i] << " ";
        cout << el;
    }
    else if((f1 == 0 && f2 == 1) || (f1 == 1 && f2 == 0)) cout << -1 << el; 

    else
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                frq[va[i] + vb[j]]++;
            }
        }

        int f = 0;
        for(int i = 1; i <= 200; i++) 
        {
            if(frq[i] == n)
            {
                f = 1;
                break;
            }
        }

        if(!f)
        {
            cout << "-1" << el;
        }
        else
        {
            sort(va.begin(), va.end());
            for(int i = n - 1; i >= 0; i--) cout << va[i] << " ";
            cout << el;
            sort(vb.rbegin(), vb.rend());
            for(int i = n - 1; i >= 0; i--) cout << vb[i] << " ";
            cout << el;
        }
    }
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}