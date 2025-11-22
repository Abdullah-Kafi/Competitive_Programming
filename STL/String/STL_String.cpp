#include<bits/stdc++.h>
using namespace std;
/// STL - String
int main()
{
//    string s;

    /// "" + 'a' = "a" ---> "a" + 'b' = "ab" ---> "ab" + 'c' = "abc"
//    s = s + 'a';
//    s = s + 'b';
//    s += 'c';

//    s = "Abdullah";

//    cout << s << endl;
//    cout << s.size() << endl;
//    cout << s[0] << " " << s[1] << " " << s[2] << endl;

//    s = "Abdullah";
//    char sp = ' ';
//    string s1 = "Kafi";

//    s += sp;
//    s += s1;

//    cout << s << endl;

//    s.clear(); /// string will be clear and it will a empty string

//    cout << s << endl;

    /// String assignment
//    s1 = "Abdullah";
//    string s2= "Kafi";
//    s1 = s2;
//    cout << s1 << endl;

//    cout << s1.empty() << endl;

//    string name = "Abdullah Kafi Chowdhury";
//    for(auto u : name) cout << u;
//    cout << endl;

    /// Declaring iterator
//    string :: iterator it;

//    for(it = name.begin(); it != name.end(); it++)
//        cout << *it;
//    cout << endl;

    /// String Comparison
//    string st = "Abdullah", str = "Kafi";

//    if(st == str) cout << "Equal" << endl;
//    else cout << "Not Equal" << endl;

//    string s = "abfbajdhf";
    /// print last element of string
//    cout << s.back() << endl;
    /// delete last element of string
//    s.pop_back();
//    cout << s.back() << endl;

//    vector<string> vs;

//    vs.push_back("Abdullah");
//    vs.push_back("Rafi");
//    vs.push_back("Rafi");
//    vs.push_back("Rafi");
//    vs.push_back("Rafi");
//    vs.push_back("Rafi");
//    vs.push_back("Tanjim");
//    vs.push_back("Tanjim");
//    vs.push_back("Tanjim");
//    vs.push_back("Ahad");
//    vs.push_back("Abdul");
//    vs.push_back("Kafi");
//    vs.push_back("Abdullah");

    /// Must Be sorted before counting unique number
//    sort(vs.begin(), vs.end());

//    int sizeOfuniqueString = unique(vs.begin(), vs.end()) - vs.begin();
//    cout << "Number of unique string: " << sizeOfuniqueString << endl;

    /// printing unique string
//    for(int i = 0; i < sizeOfuniqueString; i++)
//    {
//        cout << vs[i] << endl;
//    }

    /// convert number to string
    int num = 2133;
//    string s = to_string(num);
//    cout << s << endl;
//    s[0] = '9';
//    cout << s << endl;

    /// convert string to int - stoi()
//    string str = "3901";
//    int i = stoi(str);
//    cout << i << endl;
//    i++;
//    cout << i << endl;

    /// check if a char is upper?
//    char ch = 'A';
//    bool f = isupper(ch);
//    cout << f << endl;

    /// check if a char is lower?
//    f = islower(ch);
//    cout << f << endl;

    /// check if a char is space?
//    f = isspace(ch);
//    cout << f << endl;

    /// convert to upper(char) - must be assigned to same/another char variable
//    ch = toupper(ch);
//    cout << ch << endl;

    /// convert to lower(char) - must be assigned to same/another char variable
//    ch = tolower(ch);
//    cout << ch << endl;

    /// erase a segment from a string
//    string myName = "AbdullahAbdulAhadKafiChowdhury";
//    myName.erase(myName.begin() + 8, myName.begin() + 17); /// will erase AbdulAhad
//    cout << myName << endl;

    /// add a substring to another string
    /// copy(begin()_iterator, end()_iterator, back_inserter(ToThestring))
//    string name = "Abdul Ahad";
//    string my = "He is a friend of Kafi";
//    copy(my.begin()+7, my.end(), back_inserter(name));
//    cout << name << endl;

    /// erase specific character from a string
//    string str = "Axbxdxxxulxxxlxxxaxxxxh xKxxaxxfxxixxxxx";
//    str.erase( remove( str.begin(), str.end(), 'x' ), str.end() );
//    cout << str << endl;

    /// find if a substring is present in a string
//    string nam = "Abdullah Kafi Chowdhury";
//    if(nam.find( "Kafi" ) != -1) cout << "Sub-string found" << endl;
//    else cout << "Not found" << endl;

    /// getting input of a string using getline(cin, s) function
//    string s;
//    getline(cin, s);
//    cout << s << endl;
//    int n; cin >> n; /// this enter will cout in the input of s
//    vector<string> vs;
//    for(int i = 0; i < n; i++)
//    {
//        char c;
//        cin >> c; /// first character will be taken
//        string s;
//        getline(cin, s); /// then the string after first character
//        s = c + s; /// first character + rest of the string = full string
//        vs.push_back(s);
//    }
//    for(auto s: vs)
//    {
//        cout << s << endl;
//    }

    /// next_permutation(string.begin(), string.end()) - returns 1 if found else 0
    /// string becomes the next permuatation
//    string s;
//    cin >> s;
//    bool bl = next_permutation(s.begin(), s.end());
//    if(bl == 1) cout << s << endl;
//    else cout << s << " is the smallest permutation can be found" << endl;

    vector<int> v = {1, 2, 3};

    do
    {
        for(auto i: v) cout << i << " ";
        cout << endl;
    } while(next_permutation(v.begin(), v.end()));

    return 0;
}
