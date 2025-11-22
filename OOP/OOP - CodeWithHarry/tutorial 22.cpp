#include<iostream>
using namespace std;

class Binary
{
private:
    string s;
    void chk_binary();
    /// this member function is defined as private,
    /// so can't be accessed outside of class
    /// but can be accessed through public method
public:
    void read();
    //void chk_binary();
    void Ones_complement();
    void showBinary();
};

void Binary :: read()
{
    cout << "Enter a binary number: ";
    cin >> s;
}

void Binary :: chk_binary()
{
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] != '0' && s[i] != '1')
        {
            cout << "Not a Valid Binary Number.\n";
            return;
        }
    }
    cout << "Valid Binary Number.\n";
}

void Binary::Ones_complement()
{
    chk_binary();
    /// Nested Member function
    /// as it is a private member method
    /// So, It can only be accessed by Ones_complement() public member method

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '0') s[i] = '1';
        else s[i] = '0';
    }
    cout << "After Ones Complement: " << s << endl;
}

void Binary::showBinary()
{
    cout << "The binary Number is: " << s << endl;
}

int main()
{
    Binary bin;
    bin.read();
    //bin.chk_binary();
    bin.showBinary();
    bin.Ones_complement();

    return 0;
}
