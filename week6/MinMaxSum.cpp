#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> listOfNumbers(5);
    int userInput = 0;
    int totalSum = 0;
    vector<int> listOfTotalSum(5);
    int highest = 0;
    int lowest = 0;
    int newHighest = 0;

    cout << "Enter numbers" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << " ";
        cin >> userInput;
        listOfNumbers.at(i) = userInput;
    }

    for (int numOfIterations = 0; numOfIterations < 5; numOfIterations++)
    {
        totalSum = 0;
        for (int i = 0; i < listOfNumbers.size(); i++)
        {
            if (numOfIterations != i)
            {
                totalSum += listOfNumbers.at(i);
            }
        }
        listOfTotalSum.at(numOfIterations) = totalSum;
        cout << totalSum << endl;
    }
    for (int i = 0; i < 5; i++)
    {
        if (listOfTotalSum.at(i) > highest)
        {
            highest = listOfTotalSum.at(i);
        }
    }
    newHighest = highest;
    for (int i = 0; i < 5; i++)
    {
        if ((newHighest) > listOfTotalSum.at(i))
        {
            lowest = listOfTotalSum.at(i);
            newHighest = lowest;
        }
    }
    cout << lowest << " " << highest << endl;
}
