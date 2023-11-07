#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

double deviation(vector<int> &listOfNumbers, double average)
{
    double sd = 0;
    double numerator = 0;

    for (int i = 0; i < listOfNumbers.size(); i++)
    {
        numerator += pow(listOfNumbers.at(i) - average, 2);
    }
    sd = sqrt(numerator / listOfNumbers.size());
    return sd;
}

double mean(vector<int> &listOfNumbers)
{
    double sum = 0;
    for (int i = 0; i < listOfNumbers.size(); i++)
    {
        sum += listOfNumbers.at(i);
    }
    return (sum / listOfNumbers.size());
}

void histogram(vector<int> &scores, vector<int> &bins)
{
    for (int i = 0; i < scores.size(); i++)
    {
        if (scores.at(i) >= 90)
        {
            bins[9]++;
        }
        else if (scores.at(i) >= 80 && scores.at(i) < 90)
        {
            bins[8]++;
        }
        else if (scores.at(i) >= 70 && scores.at(i) < 80)
        {
            bins[7]++;
        }
        else if (scores.at(i) >= 60 && scores.at(i) < 70)
        {
            bins[6]++;
        }
        else if (scores.at(i) >= 50 && scores.at(i) < 60)
        {
            bins[5]++;
        }
        else if (scores.at(i) >= 40 && scores.at(i) < 50)
        {
            bins[4]++;
        }
        else if (scores.at(i) >= 30 && scores.at(i) < 40)
        {
            bins[3]++;
        }
        else if (scores.at(i) >= 20 && scores.at(i) < 30)
        {
            bins[2]++;
        }
        else if (scores.at(i) >= 10 && scores.at(i) < 20)
        {
            bins[1]++;
        }
        else if (scores.at(i) < 10)
        {
            bins[0]++;
        }
    }
}

int main()
{

    vector<int> numbers;
    int number = 0;
    double average;
    double standardDeviation = 0;
    vector<int> bins(10);

    int count = 0;
    cout << "Enter a number:: ";
    while (true)
    {
        
        cin >> number;
        if (number == -1)
        {
            break;
        }
        numbers.push_back(number);
        count++;
        if (count > 100)
        {
            break;
        }
    }

    average = mean(numbers);

    histogram(numbers, bins);

    for (int i = 9; i >= 0; i--)
    {
        cout << i << "| ";
        for (int j=0;j<bins.at(i);j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    standardDeviation = deviation(numbers, average);
    cout << "SD: " << standardDeviation << endl;
}
