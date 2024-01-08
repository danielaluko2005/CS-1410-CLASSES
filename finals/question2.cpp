#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Vehicle
{
private:
    string make;
    string model;

public:
    Vehicle(string funcMake, string funcModel)
    {
        make = funcMake;
        model = funcModel;
    }
    void setMake()
    {
        cout << "Enter the make: " << endl;
        cin >> make;
    }

    void setModel()
    {
        cout << "Enter the model: " << endl;
        cin >> model;
    }
    string getMake()
    {
        return make;
    }
    string getModel()
    {
        return model;
    }


};

class Car : public Vehicle
{
private:
    string color;
private:
    int numOfDoors;

public:
    Car(string m, string md, string c, int n) : Vehicle(m, md), color(c), numOfDoors(n) {}

    void setColor()
    {
        cout << "What is the color of the car: " << endl;
        cin >> color;
    }

    void setNumOfDoors()
    {
        cout << "How many doors: " << endl;
        cin >> numOfDoors;
    }

    string getColor()
    {
        return color;
    }

    int getNumOfDoors()
    {
        return numOfDoors;
    }
    void DispCarInfo()
    {
        cout << "The make of the Car is: " << Vehicle::getMake() << endl;
        cout << "The model of the Car is: " << Vehicle::getModel() << endl;
        cout << "The color of the Car is: " << color << endl;
        cout << "The Number of Doors of the Car is: " << numOfDoors << endl;
    }
};

int main()
{
    Vehicle Vehicle1("Lamboghini","Urus");

    Car car1("Mercedes","Benz 2021","blue",4);
    car1.DispCarInfo();


}