#include <iostream>
#include <string>
#include <vector>

using namespace std;

double Average(vector<double> numbers)
{
    double sum = 0;
    for (int i = 0; i < numbers.size(); i++)
    {
        sum += numbers.at(i);
    }
    return (sum / numbers.size());
}

int main()
{
    vector<double> allNumbers;
    allNumbers.push_back(3.5);
    allNumbers.push_back(0);
    allNumbers.push_back(3.5);

    cout<<"The Average is: "<<Average(allNumbers)<<endl;
}