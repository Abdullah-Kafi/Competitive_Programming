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
    int q; cin >> q;

    map<string, int> marksOfStudent;

    while(q--)
    {
        int x; cin >> x;
        string s; cin >> s;

        if(x == 1)
        {
            int y; cin >> y;
            if(marksOfStudent.find(s) != marksOfStudent.end())
            {
                marksOfStudent[s] += y;
            }
            else marksOfStudent.insert(make_pair(s, y));
        }
        else if(x == 2) 
        {
            marksOfStudent.erase(s);
        }
        else 
        {
            if(marksOfStudent[s] != 0) cout << marksOfStudent[s] << el;
            else cout << 0 << el;
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