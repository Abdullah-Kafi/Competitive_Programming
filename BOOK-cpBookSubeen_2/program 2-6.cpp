#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x = 10;
    int y;
    int * p;

    cout << "Value of x : " << x << "\n";
    cout << "Address of x : " << &x << "\n";

    p = &x;
    y = *p;
    *p = 15;

    cout << "Value of x : " << x << "\n";
    cout << "Value of y : " << y << "\n";
    cout << "Value of *p : " << *p << "\n";
    cout << "Address of x : " << &x << "\n";
    cout << "Address of y : " << &y << "\n";
    cout << "Value of p : " << p << "\n";

    return 0;
}


