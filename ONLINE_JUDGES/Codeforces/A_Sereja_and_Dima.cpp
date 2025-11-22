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
    int sumS = 0, sumD = 0;

    for(int i = 0; i < n; i++) cin >> v[i];
    
    // O(n * n)
    // int i = 1;
    // while(!v.empty())
    // {
    //     if(i % 2)
    //     {
    //         if(*v.begin() > v.back())
    //         {
    //             sumS += *v.begin();
    //             v.erase(v.begin());
    //         }
    //         else
    //         {
    //             sumS += v.back();
    //             v.pop_back();
    //         }
    //     }
    //     else
    //     {
    //         if(*v.begin() > v.back())
    //         {
    //             sumD += *v.begin();
    //             v.erase(v.begin());
    //         }
    //         else
    //         {
    //             sumD += v.back();
    //             v.pop_back();
    //         }
    //     }
    //     i++;
    // }

    //O(n)
    int f = 1;
    for(int i = 0, j = n - 1; i <= j; )
    {
        if(f == 1)
        {
            if(v[i] > v[j])
            {
                sumS += v[i];
                i++;
            }
            else 
            {
                sumS += v[j];
                j--;
            }
            f = 2;
        }
        else if(f == 2)
        {
            if(v[i] > v[j])
            {
                sumD += v[i];
                i++;
            }
            else 
            {
                sumD += v[j];
                j--;
            }
            f = 1;
        }
    }
    cout << sumS << " " << sumD << el;
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}