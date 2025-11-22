#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[5] = {1, 2, 3, 4, 5};

    for(int i = 0; i < 5; i++) cout << "Value of Array : " << ar[i] << endl;
    cout << &ar << endl;

    for(int i = 0; i < 5; i++) cout << "Address of " << ar[i] << " is " << &ar[i] << endl;
    return 0;
}
