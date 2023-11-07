#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float r;
    float a;
    float b;
    float c;

    cout << "Enter a value for A: ";
    cin >> a;
    cout << "Enter a value for B: ";
    cin >> b;
    cout << "Enter a value for C: ";
    cin >> c;

    for (int i = 0; i < 1; i++)
    {
        if (a == 0 || b == 0 || c == 0)
        {
            cout << "Error!"<<endl;
            break;
        }
        else
        {
            r = (pow(a, 2) + pow(b, 2) + pow(c, 2)) / (a * b * c);
            cout<<"R is "<<r<<endl;
        }
    }
    
}
