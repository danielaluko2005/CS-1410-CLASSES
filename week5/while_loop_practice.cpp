#include <iostream>

using namespace std;

int main()
{

    int r = 1;
    int c = 0;
    for (r; r <= 5; r++)
    {
        for (c=0; c < r; c++)
        {
            cout << "#"<< " ";
            
        }
        cout << r << endl;
    }

    // const int ROWS = 2;
    // const int COLS =5;

    // int r;
    // int c;

    // for (r=1;r<=3;r++){
    //     for (c=1;c<=5;c++){
    //         cout<<r*c<<" ";
    //     }
    //     cout<<endl;
    // }
}

//     int i;
//     int j;
//     for (i = 2; i <= 3; i++)
//     {
//         for (j = 1; j <= 5; j++)
//         {
//             cout << i * j << " ";
//         };
//         cout << endl;
//     }
//     char letter;
//     while (letter != 'x' && letter != 'X')
//     {
//         cout << "Enter x or X to quit::- ";
//         cin >> letter;
//     }
//     cout << letter;
// }