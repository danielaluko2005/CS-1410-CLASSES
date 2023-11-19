/*
Name: Daniel Aluko
Date: November 17, 2023
Program Name: Mini Car Project
Program Description:  model a car using the C++ class construct.
Time invested: 40 minutes.
*/

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

class Cars
{

private:
    string model;
    int yearMade;
    double milleage;
    string color;
    string make;
    string fuelType;
    string owner;
    int horsePower;
    string transmission;

public:
    void setModel(string funcModel)
    {
        model = funcModel;
    }

    void setYearMade(int funcYearMade)
    {
        yearMade = funcYearMade;
    }

    void setMilleage(double funcMilleage)
    {
        milleage = funcMilleage;
    }

    void setColor(string funcColor)
    {
        color = funcColor;
    }

    void setMake(string funcMake)
    {
        make = funcMake;
    }

    void setFuelType(string funcFuelType)
    {
        fuelType = funcFuelType;
    }

    void setOwner(string funcOwner)
    {
        owner = funcOwner;
    }

    void setHorsePower(int funcHorsePower)
    {
        horsePower = funcHorsePower;
    }

    void setTransmission(string funcTransmission)
    {
        transmission = funcTransmission;
    }

    string GetModel()
    {
        return model;
    }

    int GetYearMade()
    {
        return yearMade;
    }

    double GetMilleage()
    {
        return milleage;
    }

    string GetColor()
    {
        return color;
    }

    string GetMake()
    {
        return make;
    }

    string GetFuelType()
    {
        return fuelType;
    }

    string GetOwner()
    {
        return owner;
    }

    int GetHorsePower()
    {
        return horsePower;
    }

    string GetTransmission()
    {
        return transmission;
    }

    void printInfo()
    {
        cout << "This car is a sleek model a " << yearMade << " " << make << " " << model;
        cout << " boasting a " << color << " color that catches the eye. " << endl;
        cout << "With milleage of " << milleage;
        cout << "miles per gallon, it offers an efficient ride.";
        cout << "Powered by a robust engine delivering " << horsePower << " horsepower";
        cout << "it ensures a powerful driving experience. " << endl;
        cout << "The transmission is " << transmission << " adding convenience to the journey.";
        cout << " Fueled by " << fuelType << " this car is owned by " << owner;
        cout << " who appreciates it's reliability and style." << endl;
    }
};

int main()
{
    Cars car1, car2;

    car1.setModel("Lamborghini Miura");
    car2.setModel("Lamborghini Urus");

    car1.setYearMade(1966);
    car2.setYearMade(2018);

    car1.setMilleage(5012);
    car2.setMilleage(5000);

    car1.setColor("green");
    car2.setColor("blue");

    car1.setMake("Sián Roadster");
    car2.setMake("Essenza SCV12");

    car1.setFuelType("petrol");
    car2.setFuelType("petrol");

    car1.setOwner("Daniel");
    car2.setOwner("Nifemi");

    car1.setHorsePower(666);
    car2.setHorsePower(587);

    car1.setTransmission("automatic");
    car2.setTransmission("automatic");

    car1.printInfo();
    cout << endl;
    car2.printInfo();
    cout << endl;
}