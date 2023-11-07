#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int height;

    int rightSpace = 0;
    cout << "Enter tall should the tree be?: ";
    cin >> height;
    int leftSpace = height;
    for (int run = 0; run < 1; run++)
    {
        if (height < 3 || height > 15)
        {
            cout << "The height you entered is an error." << endl;
            break;
        }

        for (int i = 0; i < height; i++)
        {
            for (int ls = 0; ls < leftSpace; ls++)
            {
                cout << " ";
            }
            cout << "/";
            leftSpace--;

            for (int rs = 0; rs < rightSpace; rs++)
            {
                cout << "  ";
            }
            cout << "\\";
            rightSpace++;

            cout << endl;
        }
        cout << " ";
        for (int i = 0; i < (height * 2); i++)
        {
            cout << "-";
        }
        cout << endl;
        for (int bottom = 0; bottom < (height / 2); bottom++)
        {
            for (int i = 0; i < height; i++)
            {
                cout << " ";
            }
            cout << "||";
            for (int i = 0; i < height; i++)
            {
                cout << " ";
            }
            cout << endl;
        }
    }
    for (int i=0;i<10;i++){
    cout<<endl;
    }
}