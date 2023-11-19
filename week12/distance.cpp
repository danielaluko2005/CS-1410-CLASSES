
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

class Coord
{
private:
    int x;
    int y;

public:
    Coord()
    {
        x = 0;
        y = 0;
    }

    void setx(double funcx)
    {
        x = funcx;
    }
    void sety(double funcy)
    {
        y = funcy;
    }

    double getx()
    {
        return x;
    }

    double gety()
    {
        return y;
    }

    double DistanceToOrig()
    {
        return sqrt(pow(x, 2) + pow(y, 2));
    }
};

int main()
{

    vector<int> points(4);

    for (int i = 0; i <= 4; i++)
    {
        points.at(i) = i;
    }

    for (int i = 0; i < 5; i++)
    {
        Coord points[i];
    }

    Coord p1, p2;
    p1.setx(2);
    p1.sety(2);

    cout << "Distance to origin:: " << p1.DistanceToOrig() << endl;

    p2.setx(10);
    p2.sety(4);
    cout << "Distance to origin:: " << p2.DistanceToOrig() << endl;
}