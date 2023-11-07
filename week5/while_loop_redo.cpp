#include <iostream>

using namespace std;

#include <vector>

int main()
{
    vector<int> listOfNumbers(5);
    int userInput;
    int sum = 0;

    cout << "Enter FIVE numbers::- ";
    for (int i = 0; i < 5; i++)
    {
        cin >> userInput;
        listOfNumbers.at(i)=userInput;
    }
    int highest = listOfNumbers.at(0);
    int lowest = listOfNumbers.at(0);
    for (int i = 0; i < 5; i++)
    {
        sum += listOfNumbers.at(i);
        
        if (highest < listOfNumbers.at(i))
        {
            highest = listOfNumbers.at(i);
        }
        if (lowest > listOfNumbers.at(i))
        {
            lowest = listOfNumbers.at(i);
        }
    }
    cout << "Maximum is " << sum - lowest << endl;
    ;
    cout << "Minimum is " << sum - highest << endl;
    ;
}