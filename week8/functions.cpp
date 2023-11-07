#include <iostream>
#include <vector>
using namespace std;



void PrintGreeting()
{
    cout << "\nHi There!" << endl;
}

void Printing(string s)
{
    cout << s << endl;
}

double calcAreaCircle(double radius)
{
    double result;
    result = 3.1415 * radius * radius;
    return result;
}

double calcAreaCylinder(double radius, double height)
{
    double result;
    result = calcAreaCircle(radius) * height;
}

int main()
{
    PrintGreeting();
    for (int i = 0; i < 5; i++)
    {
        Printing("Too confusin\n");
    }
    cout << endl;
    cout << "\nArea of circle with radius 3 is " << calcAreaCircle(3) << endl;
    cout << "\nArea of Cylinder with radius 3 and height 10 is " << calcAreaCylinder(3, 10) << endl;
    return 0;
}
