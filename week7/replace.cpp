#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numberList = {1, 2, 3, 4, 5};
    int userInput;
    int hold;

    for (int i = (numberList.size() / 2); i >= 0; i--)
    {
        hold = numberList.at(i);
        numberList.erase(numberList.begin() + i);
        numberList.push_back(hold);
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout << numberList.at(i)<<" ";
    }
    cout<<endl;
}