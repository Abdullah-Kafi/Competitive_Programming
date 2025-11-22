#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x = 10;
    int * p;

    cout << "Value of x : " << x << "\n";

    p = &x;
    *p = 20;

    cout << "Value of x : " << x << "\n";

    x = 15;

    cout << "Value of x : " << x << "\n";
    cout << "Value stored at location " << p << " is " << *p << "\n";

    cout << "Addrsess of x : " << &x << "\n";
    cout << "Value of p : " << p << "\n";

    return 0;
}


