#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int num, cnt = 0; cin >> num;
        while(num)
        {
            int mod = num % 2;
            if(mod == 1) cnt++;
            num /= 2;
        }
        int sum = 1, j = 1;
        for(int i = 1; i < cnt; i++)
        {
            j *= 2;
            sum += j;
        }
        cout << sum << endl;
    }
}