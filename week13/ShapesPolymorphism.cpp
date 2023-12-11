/*
Name: Daniel Aluko
Date: 12/9/2023
Description: With polymorphism implemented, for each respective user shape choice, 
this program would display the area of that shape using Shape's pointer variable. 
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

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
    double GetArea() override
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
    double GetArea() override { return length * width; }
};

class Triangle : public Shape
{
    double base;
    double height;

public:
    Triangle(string n, double b, double h) : Shape(n), base(b), height(h) {}
    void SetBase(double b) { base = b; }
    void SetHeight(double h) { height = h; }
    double GetBase() const { return base; }
    double GetHeight() const { return height; }
    double GetArea() override { return ((1 / 2.0) * base * height); }
};

class RectCylinder : public Rectangle
{
    double height;

public:
    RectCylinder(string n, double l, double w, double h) : Rectangle(n, l, w), height(h) {}
    void SetHeight(double h) { height = h; }
    double GetHeight() const { return height; }
    double GetArea() override { return Rectangle::GetArea() * height; }
};

class TriPrism : public Triangle
{
    double depth;

public:
    TriPrism(string n, double base, double height, double d) : Triangle(n, base, height), depth(d) {}
    void SetDepth(double d) { depth = d; }
    double GetDepth() const { return depth; }
    double GetArea() override { return Triangle::GetArea() * depth; }
};

int main()
{
    vector<Shape*> shapes; 
    shapes.push_back(new Circle("Circle", 2.0));
    shapes.push_back(new RectCylinder("RectCylinder", 10.0, 5.5, 20.0));

    for (Shape* shape : shapes)
    {
        cout << "Area of " << shape->GetName() << ": " << shape->GetArea() << endl;
    }
    
    for (int i=0;i<10;i++){
        cout<<endl;
    }

    
    for (Shape* shape : shapes)
    {
        delete shape;
    }

    return 0;
}
