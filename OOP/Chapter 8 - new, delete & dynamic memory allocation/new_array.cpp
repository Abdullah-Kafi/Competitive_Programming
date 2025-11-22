#include<iostream>
#include<string.h>

using namespace std;

int* makeArray(int element)
{
    int* Array = new int[element];
    for(int i = 0; i < element; i++)
    {
        *(Array + i) = 10 + i;
    }
    return Array;
}

int main()
{
    cout << "Enter Number of Element: ";
    int n; cin >> n;
    int* ptr = makeArray(n);
    for(int i = 0; i < n; i++) cout << *(ptr + i) << " ";

    return 0;
}
