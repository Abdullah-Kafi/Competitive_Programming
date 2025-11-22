#include<bits/stdc++.h>
using namespace std;

int Binary_Search(vector<int> v, int r, int srch)
{
    /// Binary Search::
    int l = 0;
    while(l <= r)
    {
        int mid = l + (r - l) / 2;
        if(v[mid] == srch) return mid;
        else if(v[mid] < srch) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

int main()
{
    /// Taking total Number of Input:
    cout << "Enter Number of Elements: ";
    int n; cin >> n;
    vector<int> v(n);

    /// Taking each Number:
    cout << "Enter Each Number: ";
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    /// Sorting the vector as it is mandatory for Binary Search
    sort(v.begin(), v.end());

    /// Taking the target value to find:
    cout << "Enter the Number to find: ";
    int srch; cin >> srch;

    int r = n - 1;

    int ans = Binary_Search(v, r, srch);
    if(ans != -1) cout << v[ans] << " Is Found." << endl;
    else cout << "Not Found" << endl;

    return 0;
}
