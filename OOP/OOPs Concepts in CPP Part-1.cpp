#include<iostream>
using namespace std;

/// class is user-defined data type:
/// * empty class allocate 1 byte memory for object
class Hero
{
    /// properties / data members:
public: /// can be access from anywhere(inside/outside of class)
    string name;
    int health;
private: /// can only be accessed inside of class
    char level;

    void print()
    {
        cout << level << endl;
    }

};

int main()
{
    /// declare a object of Hero type
    //Hero phHero;
    /// * empty class allocate 1 byte memory for object
//    cout << "Size: " << sizeof(phHero) << endl;
//    cout << "Health of Hero: " << phHero.health << endl;
//    cout << "Level of Hero: " << phHero.level << endl;

    return 0;
}
