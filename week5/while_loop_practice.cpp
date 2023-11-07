
// Name: Daniel Aluko
// Date:7/10/2023
// Program Description: Finding the maximum values that can be calculated by summing exactly four of the five integers. Then print the respective maximum and minimum values as a single line of two space-seperated long integers.
// Time Invested: 30 minutes.

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
        cout << "";
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

// #include <iostream>

// using namespace std;6

// int main()
// {

//     int r = 1;
//     int c = 0;
//     for (r; r <= 5; r++)
//     {
//         for (c=0; c < r; c++)
//         {
//             cout << "#"<< " ";

//         }
//         cout << r << endl;
//     }

//     // const int ROWS = 2;
//     // const int COLS =5;

//     // int r;
//     // int c;

//     // for (r=1;r<=3;r++){
//     //     for (c=1;c<=5;c++){
//     //         cout<<r*c<<" ";
//     //     }
//     //     cout<<endl;
//     // }
// }

// //     int i;
// //     int j;
// //     for (i = 2; i <= 3; i++)
// //     {
// //         for (j = 1; j <= 5; j++)
// //         {
// //             cout << i * j << " ";
// //         };
// //         cout << endl;
// //     }
// //     char letter;
// //     while (letter != 'x' && letter != 'X')
// //     {
// //         cout << "Enter x or X to quit::- ";
// //         cin >> letter;
// //     }
// //     cout << letter;
// // }