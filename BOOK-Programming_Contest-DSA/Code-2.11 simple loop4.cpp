#include<bits/stdc++.h>
using namespace std;

int main()
{
    ///Given n, we have to calculate:
    /// 1 + (1 + 2) + (1 + 2 + 3) + ... + (1 + 2 + 3 + ... + n)
    int sum = 0;
    int n; cin >> n;
//    for(int i = 1; i <= n; i++)
//    {
//        for(int j = 1; j <= i; j++)
//            sum += j;
//    }
//    cout << sum << "\n";

    for(int i = 1, j = n; i <= n; i++, j--)
    {
        sum += i * j;
    }
    cout << sum << '\n';
    return 0;
}
