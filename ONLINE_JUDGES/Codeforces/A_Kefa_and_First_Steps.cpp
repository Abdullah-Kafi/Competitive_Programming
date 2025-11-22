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
    int arr[n + 1];
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    int cnt = 1;
    int cmp = arr[0];
    vector<int> mx;
    mx.push_back(cmp);

    if(n == 1) cout << 1 << endl;
    else 
    {
        int finl = INT_MIN;
        for(int i = 1; i < n; i++)
        {
            if(cmp > arr[i])
            {
                mx.clear();
            }
            mx.push_back(arr[i]);
            cmp = arr[i];
            int mxVal = mx.size();
            if(finl < mxVal) finl = mxVal;
        }
        cout << finl << endl;
    }
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}