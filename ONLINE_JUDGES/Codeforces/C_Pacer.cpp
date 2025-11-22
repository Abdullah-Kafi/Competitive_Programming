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
    int n, m; cin >> n >> m;

    pair<int, int> arr[n + 1];
    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        arr[i] = {a, b};
    }

    int sum = 0;

    if((arr[0].first - 0) % 2 == 0 && arr[0].second != 0) sum += (arr[0].first - 1);
    else if((arr[0].first - 0) % 2 == 0 && arr[0].second == 0) sum += (arr[0].first);
    else if((arr[0].first - 0) % 2 != 0 && arr[0].second != 0) sum += (arr[0].first);
    else if((arr[0].first - 0) % 2 != 0 && arr[0].second == 0) sum += (arr[0].first - 1);

    for(int i = 0; i < n - 1; i++)
    {
        if((arr[i + 1].first - arr[i].first) % 2 == 0 && arr[i + 1].second != arr[i].first) sum += (arr[i + 1].first - arr[i].first - 1);

        if((arr[i + 1].first - arr[i].first) % 2 == 1 && arr[i + 1].second != arr[i].first) sum += (arr[i + 1].first - arr[i].first);

        if((arr[i + 1].first - arr[i].first) % 2 == 1 && arr[i + 1].second == arr[i].first) sum += (arr[i + 1].first - arr[i].first - 1);

        if((arr[i + 1].first - arr[i].first) % 2 == 0 && arr[i + 1].second == arr[i].first) sum += (arr[i + 1].first - arr[i].first);
    }
    if(arr[n - 1].first != m) sum += (m - arr[n - 1].first);
   
    cout << sum << endl;

}
int main()
{
    optimize();
    
    testCase
        solve();

    return 0;
}