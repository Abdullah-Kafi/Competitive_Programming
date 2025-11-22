#include<bits/stdc++.h>
using namespace std;

class Chai
{
    public:
        // data members(attributes)
        string teaName; // Name of the tea
        int servings; // Number of Servings
        vector<string> ingredients; // list of ingredients of the tea

        // Member function - Method
        void displayChaiDetails()
        {
            cout << "Tea Name: " << teaName << endl;
            cout << "Servings: " << servings << endl;
            cout << "Ingredients: ";
            // for(auto ingredient : ingredients)
            // {
            //     cout << ingredient << " ";
            // }
            for(int i = 0; i < ingredients.size(); i++)
            {   
                cout << ingredients[i];
                if((i + 1) != ingredients.size()) cout << ", ";
            }
            cout << endl;
        }
};

int main()
{
    Chai chai;
    chai.teaName = "lemon tea";
    chai.servings = 10;
    chai.ingredients = {"lemon", "water", "chaiPata", "Honey"};

    chai.displayChaiDetails();

    Chai cha;

    cha.teaName = "Dudh Cha";
    cha.servings = 4;
    cha.ingredients = {"Water", "Milk", "chaPata"};

    cha.displayChaiDetails();

    return 0;
}
