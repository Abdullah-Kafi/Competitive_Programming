///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<bits/stdc++.h>
using namespace std;

const int sz = 0;
int ar[sz];

using ll = long long;

#define el "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

bool isVowel(char ch)
{
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

void solve()
{
    string phase1, phase2, phase3;

    getline(cin, phase1);
    getline(cin, phase2);
    getline(cin, phase3);


    int cntPhase1 = 0;
    int cntPhase2 = 0;
    int cntPhase3 = 0;

    for(auto i: phase1)
    {
        if(isVowel(i)) cntPhase1++;
    }

    for(auto i: phase2)
    {
        if(isVowel(i)) cntPhase2++;
    }

    for(auto i: phase3)
    {
        if(isVowel(i)) cntPhase3++;
    }

    if(cntPhase1 == 5 && cntPhase2 == 7 && cntPhase3 == 5) cout << "YES" << el;
    else cout << "NO" << el;
}
int main()
{
    optimize();
    
    //testCase
        solve();

    return 0;
}