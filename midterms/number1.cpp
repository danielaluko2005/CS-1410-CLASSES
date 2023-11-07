#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int spaces = 4;
    for (int myChar = 65; myChar < 69; myChar++)
    {
        spaces--;
        for (int i = 0; i < spaces; i++)
        {
            cout << " ";
        }
        cout << static_cast<char>(myChar) << endl;
    }
}