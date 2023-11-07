/*
Create a vector in main
Create a function that deals witht the above vector.

*/

#include <iostream>
#include <vector>

using namespace std;

void ShowVect(vector<int> &inVec)
{
    for (auto i : inVec)
    { // Works like for char in loop in python. Has limitations.
        cout << i;
    }
    inVec.push_back(40);
    inVec.push_back(50);
}

int main()
{

    vector<int> vect{1, 2, 3, 4};
    ShowVect(vect);

    vect.push_back(10);
    vect.push_back(20);

    cout << "\nShow the vector nowww: " << endl;

    ShowVect(vect);
    cout << endl;
    return 0;
}