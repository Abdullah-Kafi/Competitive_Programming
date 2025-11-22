#include<bits/stdc++.h>
using namespace std;

int totalChaiServed(int chai[], int size)
{
    int total = 0;
    for(int i = 0; i < size; i++)
    {
        total += chai[i];
    }
    return total;
}

int main()
{
    int chaiTemparature[5] = {90, 83, 93, 91, 58};

    // cout << "Chai temparature: " << "\n";

    // for(int i = 0; i < 5; i++)
    // {
    //     cout << chaiTemparature[i] << " degree C" << "\n";
    // }

    int chaiServed[10] = {10, 20, 50, 40, 24, 39, 32, 32, 45, 38};

    int total = totalChaiServed(chaiServed, 10);

    cout << "Total Chai Served: " << total << "\n";

    return 0;
}
