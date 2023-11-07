#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr(5);
    int userInput;
    int sum = 0;

    cout << "Enter FIVE numbers: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> userInput;
        arr[i] = userInput;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }

    cout << "The sum is " << sum << endl;
}