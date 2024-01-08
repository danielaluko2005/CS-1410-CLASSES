#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int someNumber;
    int* numberPointer;

    someNumber = 10;
    numberPointer = &someNumber;

    *numberPointer = 11;

    cout << someNumber << " " << *numberPointer;
}