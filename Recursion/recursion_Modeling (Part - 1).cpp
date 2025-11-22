#include<bits/stdc++.h>
using namespace std;

/// in the first year I will give you 10 /=
/// every year it will be double
int salamiSchemeOne(int n)
{
    if(n == 1) return 10;
    return 2 * salamiSchemeOne(n - 1);
}

/// in the first year I will give you 100 /=
/// every year I will add 100 /= to it
int salamiSchemeTwo(int n)
{
    if(n == 1) return 100;
    return 100 + salamiSchemeTwo(n - 1);
}

/// in every year I will give you the sum of previous valid 3 years
int salamiScheme3(int n)
{
    if(n == 1) return 100;
    else if(n == 2) return 200;
    else if(n == 3) return 300;
    return salamiScheme3(n - 3) + salamiScheme3(n - 2) + salamiScheme3(n - 1);
}

int main()
{
    int n; cin >> n;
    cout << salamiSchemeOne(n) << endl;
    cout << salamiSchemeTwo(n) << endl;
    cout << salamiScheme3(n) << endl;

    return 0;
}
