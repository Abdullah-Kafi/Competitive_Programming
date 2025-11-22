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

bool cut[30] = {0};

void solve()
{
    string s, t;
    cin >> s >> t;
    
    int sl = s.length();
    int tl = t.length();

    int s_frq[26] = {0}, t_frq[26] = {0};
    for(int i = 0; i < sl; i++)
    {
        s_frq[s[i] - 'A']++;
    }

    for(int i = 0; i < tl; i++)
    {
        t_frq[t[i] - 'A']++;
    }

    int cut[sl];
    for(int i = 0; i < sl; i++) cut[i] = 1;

    int f = 0;
    for(int i = 0; i < 26; i++)
    {
        char alpha = (i + 'A');
        int d = s_frq[i] - t_frq[i];
        if(d < 0) 
        {
            f = 1;
            break;
        }
        else
        {
            int cnt = 0;
            for(int k = 0; k < sl; k++)
            {
                if(s[k] == alpha && d != cnt)
                {
                    cut[k] = 0;
                    cnt++;
                }
            }
        }
    }
    
    string ans;
    for(int i = 0; i < sl; i++)
    {
        if(cut[i]) ans.push_back(s[i]);
    }

    if(ans == t && f != 1) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}