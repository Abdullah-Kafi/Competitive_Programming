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
    string s; getline(cin, s);
    stringstream ss(s);

    string word;
    while (ss >> word)
    {
        int len = word.size(), f = 1;
        for(int i = 0; i < len; i++)
        {
            if(!(word[i] >= 'A' && word[i] <= 'Z')) f = 0;
        }
        if(f == 0) cout << word << " "; 
    }
    
}
int main()
{
    optimize();
    
    // testCase
        solve();

    return 0;
}