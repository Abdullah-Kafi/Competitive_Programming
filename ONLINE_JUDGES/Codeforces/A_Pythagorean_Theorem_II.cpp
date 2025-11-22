#include<bits/stdc++.h>
using namespace std;

const int mx = 2e8 + 10;
bool isPerfectSqr[mx];

int main()
{
    int n; cin >> n;
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        isPerfectSqr[i * i] = 1;
    }
    

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            int sqr = i * i + j * j;
            if(isPerfectSqr[sqr])
                count++;
        }
    }

    cout << count << endl;
    
    return 0;
}