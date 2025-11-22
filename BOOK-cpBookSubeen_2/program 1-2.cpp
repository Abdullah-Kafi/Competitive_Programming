#include<bits/stdc++.h>
using namespace std;

bool isDigit(char c)
{
    int digit = c - '0';

    if(digit >= 0 && digit <=9) return true;
    else return false;
}

int main()
{
    /// Small Letter To Capital Letter :
//    char small_letter, capital_letter;
//
//    cout << "Please Enter a small letter: ";
//    cin >> small_letter;
//    capital_letter = small_letter - 32;
//    cout << "The Capital Letter is: " << capital_letter << endl;

    /// Character Digit To Integer Digit :
    char digit;
    cout << "Enter a Digit : ";
    cin >> digit;
    while(!isDigit(digit))
    {
        cout << "Please Enter a Valid Digit : ";
        cin >> digit;
    }
    cout << "The Integer form of the Character " << digit << " is " << digit - '0' << endl;

    return 0;
}
