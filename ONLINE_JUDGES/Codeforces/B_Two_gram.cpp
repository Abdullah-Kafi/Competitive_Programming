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
    int n; cin >> n; cin.ignore();
    string s; cin >> s;

    if(n == 2) cout << s << endl;
    
    vector<string> vs;
    for(int i = 0; i < n - 1; i++)
    {
        vs.push_back(s.substr(i, 2));
    }

    int vsl = vs.size();
    int cnt = 0, maxSub = INT_MIN;
    string fs;
    for(int i = 0; i < vsl - 1; i++)
    {
        cnt = 0;
        for(int j = i + 1; j < vsl; j++)
        {
            if(vs[i] == vs[j]) cnt++;
        }
        if(cnt > maxSub)
        {
            maxSub = cnt;
            fs = vs[i];
        }
    }
    cout << fs << endl;
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}