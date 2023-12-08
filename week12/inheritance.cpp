/*
// Week 14: April xx, 2023
// zyBooks Chapter 10: Inheritance
// Original version: Fall 2020: PP7_02_Part1.cpp
.
.
// Edited April 3, 2023
*/
#include <iostream>
#include <string>
using namespace std;

// Pure virtual class, aka Abstract class
class Shape
{
    string name;

public:
    Shape(string n) : name(n) {}
    string GetName() { return name; }
    void SetName(string n) { name = n; }
    virtual double GetArea() = 0;
};

class Circle : public Shape
{
    double radius;

public:
    Circle(string n, double r) : Shape(n), radius(r) {}
    void SetRadius(double r) { radius = r; }
    double GetRadius() const { return radius; }
    double GetArea()
    {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape
{
    double length;
    double width;

public:
    Rectangle(string n, double l, double w) : Shape(n), length(l), width(w) {}
    void SetLength(double l) { length = l; }
    void SetWidth(double w) { width = w; }
    double GetLength() const { return length; }
    double GetWidth() const { return width; }
    double GetArea() { return length * width; }
};

class Triangle : public Shape
{
	double base;
	double height;

public:

	Triangle(string n, double b, double h) : Shape(n), base(b), height(h) { }

	void SetBase(double b) { base = b; }
	void SetHeight(double h) { height = h; }

	double GetBase() const { return base; }
	double GetHeight() const { return height; }

	double GetArea() { return  (1 / 2.0 * base * height); }

};
// New class RectCylinder inheriting from Rectangle
class RectCylinder : public Rectangle
{
    double height;

public:
    RectCylinder(string n, double l, double w, double h) : Rectangle(n, l, w), height(h) {}
    void SetHeight(double h) { height = h; }
    double GetHeight() const { return height; }
    double GetArea() { return Rectangle::GetArea() * height; }
};

// New class TriPrism inheriting from Triangle (assuming there's a Triangle class)
class TriPrism : public Triangle
{
    double depth;

public:
    TriPrism(string n, double base, double height, double d) : Triangle(n, base, height), depth(d) {}
    void SetDepth(double d) { depth = d; }
    double GetDepth() const { return depth; }
    double GetArea() { return Triangle::GetArea() * depth; }
};

int main()
{
    // Your existing code...

    // Extended menu
    cout << "N:\tRectCylinder" << endl;
    cout << "P:\tTriangularPrism" << endl;

    char choice;
    cin >> choice;

    switch (choice)
    {
    // Your existing cases...

    // New cases for RectCylinder and TriPrism
    case 'N':
    {
        double length, width, height;
        cout << "Enter length, width, and height of RectCylinder: ";
        cin >> length >> width >> height;
        RectCylinder rectCylinder("RectCylinder", length, width, height);
        cout << "Area of RectCylinder: " << rectCylinder.GetArea() << endl;
        break;
    }
    case 'P':
    {
        double base, height, depth;
        cout << "Enter base, height, and depth of TriPrism: ";
        cin >> base >> height >> depth;
        TriPrism triPrism("TriPrism", base, height, depth);
        cout << "Area of TriPrism: " << triPrism.GetArea() << endl;
        break;
    }
    // Your existing default case...
    }

    return 0;
}
