/// In the name of ALLAH, The Most Gracious and The Most Merciful
/// Praise be to ALLAH

#include <bits/stdc++.h>
using namespace std;

const int sz = 0;
int ar[sz];

using ll = long long;

#define el "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define testCase \
    int __;      \
    cin >> __;   \
    while (__--)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

void solve()
{
    string s;
    cin >> s;
    int l = s.length();
    int cnt = 0;
    for (int i = 0; i < l; i++)
    {
        if (s[i] == 'N' || s[i] == 'W' || s[i] == 'D')
            continue;
        cnt++;
    }
    int ball = cnt % 6;
    int over = cnt / 6;

    if (over == 1 && ball == 0)
        cout << over << " OVER" << el;
    else if (over > 1 && ball == 0)
        cout << over << " OVERS" << el;

    else if (over > 1 && ball > 1)
        cout << over << " OVERS " << ball << " BALLS" << el;
    else if (over == 0 && ball > 1)
        cout << ball << " BALLS" << el;
    else if (over == 1 && ball == 1)
        cout << over << " OVER " << ball << " BALL" << el;
    else
    {
        cout << ball << " BALLS" << el;
    }
}
int main()
{
    optimize();

    testCase
    solve();

    return 0;
}