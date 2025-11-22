#include<bits/stdc++.h>
using namespace std;

/// Base class
class Human
{
    string religion, color;
protected:
    string name;
    int age, weight;
public:
    /// parameterized constructor
    Human(string name, int age, int weight)
    {
        this->name = name;
        this->age = age;
        this->weight = weight;
    }
    void display()
    {
        cout << "Name :" << name << endl;
        cout << "Age :" << age << endl;
        cout << "Weight :" << weight<< endl;
    }
};

/// derived class
class Student: public Human
{
    int roll;
    string ID;
public:
    void setData(string s, int a, int w);
    void display();
    /// explicitly call the base class parameterized constructor
    Student(string name, int age, int weight, int roll, string ID) : Human(name, age, weight)
    {
        this->roll = roll;
        this->ID = ID;
    }
};

void Student::setData(string s, int a, int w)
{
    name = s;
    age = a;
    weight = w;
}

void Student::display()
{
    cout << "Name:" << " " << name << endl;
    cout << "Age:" << " " << age << endl;
    cout << "Weight:" << " " << weight << endl;
    cout << "Roll:" << " " << roll << endl;
    cout << "ID:" << " " << ID << endl;
}

int main()
{
    Student kafi("Abdullah", 21, 60, 241036, "C241036");
    /// when an object is created of a derived class
    /// firstly, it will call the constructor of base class and then constructor of derived class

    kafi.display();
    /// if display method present in derived class then it will be called
    /// otherwise it will be called from base class
    return 0;
}
