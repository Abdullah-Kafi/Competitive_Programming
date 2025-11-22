///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<bits/stdc++.h>
using namespace std;

const int sz = 2e5 + 10;
int ar[sz];

using ll = long long;

#define el "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve()
{
    int n, sum, f = 1; cin >> n;
    vector<int> v(n);

    int mx = INT_MIN, mxInd;

    cin >> v[0];
    for(int i = 1; i < n; i++)
    {
        cin >> v[i];
        if(v[i] != v[i - 1]) f = 0;
        if(v[i] > mx)
        {
            mx = v[i];
            mxInd = i;
        }
    }

    if(f == 1) cout << "NO" << el;

    else
    {
        cout << "YES" << el;
        cout << mx << " ";
        for(int i = 0; i < n; i++)
        {
            if(i != mxInd) cout << v[i] << " ";
        }
        cout << el;
    }
 //    for(int i = 0; i < n; i++)
//    {
//        sum = 0;
//        for(int j = 0; j < i; j++)
//        {
//            sum += v[j];
//        }
//        if(sum == v[i])
//        {
//            f = 1;
//            cout << "Ugly" << el;
//            break;
//        }
//    }
//    if(!f) cout << "beautiful" << el;

}
int main()
{
    optimize();

    testCase
        solve();

    return 0;
}
