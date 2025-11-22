#include<bits/stdc++.h>
using namespace std;

void sortTheArray(int ar[], int x)
{
    for(int i = 0; i < x; i++)
    {
        for(int j = i + 1; j < x; j++)
        {
            if(ar[i] > ar[j])
            {
                int t = ar[i];
                ar[i] = ar[j];
                ar[j] = t;
            }
        }
    }
}

int getMax(int ar[], int x)
{
    int mx;
    for(int i = 1; i < x; i++)
    {
        if(ar[i] > ar[i - 1]) mx = ar[i];
    }
    return mx;
}

int main()
{
    ///Take input of n numbers, then print the sorted numbers & maximum number:

    int n;
    cout << "Enter the number of element : ";
    cin >> n;
    int ar[n];
    cout << "Enter each element : ";
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    sortTheArray(ar, n);
    cout << "The sorted numbers are : ";
    for(int i = 0; i < n; i++) cout << ar[i] << " ";
    cout << endl << "Maximum among them : ";
    cout << getMax(ar, n) << endl;
    return 0;
}
