#include<bits/stdc++.h>
using namespace std;

int currentSalami(int n)
{
    if(n == 1) return 10; /// year 1 salami 10/=
    return 2 * currentSalami(n - 1);
}

int totalSalami(int n)
{
    if(n == 1) return 10; /// total salami in year 1
    else if(n == 0) return 0;
    return totalSalami(n - 1) + 2 * (totalSalami(n - 1) - totalSalami(n - 2));
}

/// A man runs 1.1 times than the day previous
/// in the day 1, he runs 100m
/// Find, in n days, total distance cover

int totalDist(int n)
{
    if(n == 0) return 0;
    else if(n == 1) return 100; /// in the day 1, he runs 100m
    return totalDist(n - 1) + 1.1 * (totalDist(n - 1) - totalDist(n - 2));
}

int main()
{
    int n; cin >> n;
//    cout << totalSalami(n) << endl;
    cout << totalDist(n) << endl;

    return 0;
}
