#include <iostream>
#include <vector>
using namespace std;
int main()
{
    const int NUMS = 5;
    vector<int> arr(NUMS);
    int min = 0;
    int max = 0;
    int total = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr.at(i);
    }
    min = arr.at(0);
    max = arr.at(0);
    for (int i = 0; i < arr.size(); i++)
    {
        total += arr.at(i);
        if (min > arr.at(i))
        {
            min = arr.at(i);
        }
        if (max < arr.at(i))
        {
            max = arr.at(i);
        }
    }
    cout << "\n Minimum sum is: " << total - max << endl;
    cout << "\n Maximum sum is: " << total - min << endl;
    return 0;
}
