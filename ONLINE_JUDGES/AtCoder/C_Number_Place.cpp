///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<bits/stdc++.h>
using namespace std;

const int sz = 9;
int ar[sz][sz];

using ll = long long;

#define el "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int forEachBlock(int x, int y)
{
    int sum = 0, l, m, o, p;
    if(x == 0 && y == 0)
    {
        l = 0, m = 3;
        o = 0, p = 3;
    }
    if(x == 0 && y == 3)
    {
        l = 0, m = 3;
        o = 3, p = 6;
    }
    if(x == 0 && y == 6)
    {
        l = 0, m = 3;
        o = 6, p = 9;
    }
    if(x == 3 && y == 0)
    {
        l = 3, m = 6;
        o = 0, p = 3;
    }
    if(x == 3 && y == 3)
    {
        l = 3, m = 6;
        o = 3, p = 6;
    }
    if(x == 3 && y == 6)
    {
        l = 3, m = 6;
        o = 6, p = 9;
    }
    if(x == 6 && y == 0)
    {
        l = 6, m = 9;
        o = 0, p = 3;
    }
    if(x == 6 && y == 3)
    {
        l = 6, m = 9;
        o = 3, p = 6;
    }
    if(x == 6 && y == 6)
    {
        l = 6, m = 9;
        o = 6, p = 9;
    }
    for(int i = l; i < m; i++)
    {
        for(int j = o; j < p; j++)
        {
            sum += ar[i][j];
        }
    }
    if(sum == 45) return 1;
    else return 0;
}

void solve()
{
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            cin >> ar[i][j];
        }
    }

    int sum = 0, f = 0;

    for(int i = 0; i < 9; i++)
    {
        sum = 0;
        for(int j = 0; j < 9; j++)
        {
            sum += ar[i][j];
        }
        if(sum != 45)
        {
            f = 1;
            break;
        }
    }

    if(!f)
    {
        for(int i = 0; i < 9; i++)
        {
            sum = 0;
            for(int j = 0; j < 9; j++)
            {
                sum += ar[j][i];
            }
            if(sum != 45)
            {
                f = 1;
                break;
            }
        }
    }
    
    if(!f)
    {
        if(forEachBlock(0, 0) == 1)
        {
            if(forEachBlock(0, 3) == 1)
            {
                if(forEachBlock(0, 6) == 1)
                {
                    if(forEachBlock(3, 0) == 1)
                    {
                        if(forEachBlock(3, 3) == 1)
                        {
                            if(forEachBlock(3, 6) == 1)
                            {
                                if(forEachBlock(6, 0) == 1)
                                {
                                    if(forEachBlock(6, 3) == 1)
                                    {
                                        if(forEachBlock(6, 6) == 1) f = 0;
                                        else f = 1;
                                    }
                                    else f = 1;
                                }
                                else f = 1;
                            }
                            else f = 1;
                        }
                        else f = 1;
                    }
                    else f = 1;
                }
                else f = 1;
            }
            else f = 1;
        }
        else f = 1;
    }
    else f = 1;

    if(!f) cout << "Yes" << el;
    else cout << "No" << el;
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}