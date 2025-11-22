#include<bits/stdc++.h>
using namespace std;

int main()
{

//    vector<int> myVec;
//
//    if(myVec.begin() == myVec.end()) cout << "Equal" << endl;
//    else cout << "Not Equal" << endl;
//
//    for(int i = 10; i >= 1; i--) myVec.push_back(i);
//
//    cout << "Size: " << myVec.size() << endl;
//
//    for(int i = 0; i < myVec.size(); i++) cout << myVec[i] << " ";
//    cout << endl;
//
//    sort(myVec.begin(), myVec.end());
//    for(int i = 0; i < myVec.size(); i++) cout << myVec[i] << " ";
//    cout << endl;
//
//    myVec.pop_back();
//    cout << "Size: " << myVec.size() << endl;
//    for(int i = 0; i < myVec.size(); i++) cout << myVec[i] << " ";
//    cout << endl;

    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    /// Printing from reverse
//    for(int i = v.size() - 1; i >= 0; i--) cout << v[i] << " ";
//    cout << endl;

//    while(!v.empty())
//    {
//        cout << v.back() << " ";
//        v.pop_back();
//    }

    return 0;
}
