#include<bits/stdc++.h>
using namespace std;

/// define a structure to store multiple data
struct STD /// user-defined data type
{
    int roll, marks;
};

/// custom comparator function:
/// if marks are equal then sort based on roll(increasing)
/// else sort based on marks(decreasing)
bool comp(STD std1, STD std2)
{
    /// *** Which I want ?
    /// roll in increasing order, then I have to return true if they are already in increasing
    /// otherwise false
    if(std1.marks == std2.marks) return std1.roll < std2.roll;
    /// marks in decreasing order, then I have to return true if they are already in decreasing
    /// otherwise false
    else return std1.marks > std2.marks;
}

int main()
{
    cout << "Enter the number of students: ";
    int numOfStudent; cin >> numOfStudent;

    vector<STD> v;

    cout << "Enter roll number & marks of each student: ";
    for(int i = 0; i < numOfStudent; i++)
    {
        STD student;
        cin >> student.roll >> student.marks;
        v.push_back(student);
    }
    /// pass the custom comparator function to the 3rd parameter in sort function
    /// if the function return false - then swap will happen in the sort function
    /// otherwise do nothing
    sort(v.begin(), v.end(), comp);

    for(int i = 0; i < numOfStudent; i++)
    {
        cout << v[i].roll << " " << v[i].marks << endl;
    }
    return 0;
}
