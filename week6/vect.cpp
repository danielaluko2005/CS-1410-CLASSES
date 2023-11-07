#include <iostream>
#include <vector>
using namespace std;

int main()
{

    cout << "\nDeclaration of an integer vector..." << endl;

    vector<int> scores(4);

    int userNum;

    int sumfirstHalf = 0;

    cout << "\nPopulate the data" << endl;
    for (int i = 0; i < scores.size(); i++)
    {
        cout << "Enter number:: " << endl;
        cin >> userNum;
        scores.at(i) = userNum;
        // cout << scores.at(i) << endl;
    }

    cout << "\nDisplay the data" << endl;
    for (int i = 0; i < scores.size(); i++)
    {
        cout << scores.at(i) << endl;
    }

    cout << "\nDisplay the data in reverse order" << endl;
    for (int i = scores.size() - 1; i >= 0; i--)
    {
        cout << scores.at(i) << endl;
    }

    cout << "\nSum of the first half of the collection" << endl;
    for (int i = 0; (i < (scores.size() / 2)); i++)
    {
        sumfirstHalf += scores.at(i);
    }
    cout << "The sum of the first of the collevtion is " << sumfirstHalf << endl;

    cout << endl;
    return 0;
}
