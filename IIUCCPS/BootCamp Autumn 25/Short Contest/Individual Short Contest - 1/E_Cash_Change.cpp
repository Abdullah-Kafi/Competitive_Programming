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
    vector<pair<int, int>> ans;

    if(n % 500 == 0)
    {
        ans.push_back({n / 500, 500});
        n %= 500;
    }
    else
    {
        ans.push_back({n / 500, 500});
        n %= 500;
        if(n % 100 == 0)
        {
            ans.push_back({n / 100, 100});
            n %= 100;
        }
        else
        {
            ans.push_back({n / 100, 100});
            n %= 100;
            if(n % 50 == 0)
            {
                ans.push_back({n / 50, 50});
                n %= 50;
            }
            else
            {
                ans.push_back({n / 50, 50});
                n %= 50;
                if(n % 10 == 0)
                {
                    ans.push_back({n / 10, 10});
                    n %= 10;
                }
                else
                {
                    ans.push_back({n / 10, 10});
                    n %= 10;
                    if(n % 5 == 0)
                    {
                        ans.push_back({n / 5, 5});
                        n %= 5;
                    }
                    else 
                    {
                        ans.push_back({n / 5, 5});
                        n %= 5;
                        if(n % 1 == 0)
                        {
                            ans.push_back({n / 1, 1});
                            n %= 1;
                        }
                        else 
                        {
                            ans.push_back({n / 1, 1});
                            n %= 1;
                        }
                    }
                }
            }
        }
    }
    reverse(ans.begin(), ans.end());

    for(int i = 0; i < 6; i++)
    {
        if(ans[i].first != 0)
        {
            for(int j = 0; j < ans[i].first; j++)
            {
                cout << ans[i].second << " ";
            }
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