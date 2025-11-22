///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<bits/stdc++.h>
using namespace std;

const int sz = 100;
int ar[sz];

void mySort(int ar[], int n)
{
   for(int i = 0; i < n - 1; i++)
   {
       for(int j = i + 1; j < n; j++)
       {
           if(ar[i] < ar[j])
               swap(ar[i], ar[j]);
       }
   }
}

using ll = long long;

#define el "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve()
{
    int n; cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    mySort(ar, n);

    int cnt = 0;

    while(1)
    {
        mySort(ar, n);
        ar[0]--; ar[1]--;
        if(ar[1] < 0) break;
        cnt++;
    }

    cout << cnt << el;

}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}