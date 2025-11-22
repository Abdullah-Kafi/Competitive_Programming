#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();
    char c1, c2;
    cin >> c1 >> c2;

    if(c1 == 'R' && c2 == 'P') cout << "Second Player" << endl;
    else if(c1 == 'P' && c2 == 'R') cout << "First Player" << endl;
    else if(c1 == 'R' && c2 == 'S') cout << "First Player" << endl;
    else if(c1 == 'S' && c2 == 'R') cout << "Second Player" << endl;
    else if(c1 == 'P' && c2 == 'S') cout << "Second Player" << endl;
    else if(c1 == 'S' && c2 == 'P') cout << "First Player" << endl;
    else if(c1 == c2) cout << "Draw" << endl;

    return 0;
}