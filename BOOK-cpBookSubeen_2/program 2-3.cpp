#include<bits/stdc++.h>
using namespace std;
int main()
{
    double pi = 3.14159265358;

    int* ptr;

    ptr = &pi;

    cout << "Value of pi : " << *ptr << "\n";
    cout << "Value of pi : " << pi << "\n";

    return 0;
}


