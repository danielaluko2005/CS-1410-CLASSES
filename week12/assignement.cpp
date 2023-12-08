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
	Triangle(string n, double b, double h) : Shape(n), base(b), height(h) {}

	void SetBase(double b) { base = b; }
	void SetHeight(double h) { height = h; }

	double GetBase() const { return base; }
	double GetHeight() const { return height; }

	double GetArea() { return (1 / 2.0 * base * height); }
};

// Circular cylinder
// If you see the hierarchy this class is a grand child
class Cylinder : public Circle
{
	double height;

public:
	Cylinder(string n, double r, double h) : Circle(n, r), height(h) {}

	void SetHeight(double h) { height = h; }

	double GetHeight() const { return height; }

	double GetArea()
	{
		/*
		double temp = Circle::GetArea();
		return   temp * height;
		*/
		// OR the below
		return Circle::GetArea() * height;
	}
};

class RectCylinder : public Rectangle
{
private:
	double height;

public:
	RectCylinder(string n, double l, double w, double h) : Rectangle(n, l, w), height(h) {}
	void SetHeight(double h) { height = h; }
	double GetHeight() const { return height; }
	double GetArea() { return Rectangle::GetArea() * height; }
};
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
	cout << "Please choose a shape." << endl;
	cout << "Type c or C for Circle" << endl;
	cout << "Type r or R for Rectangle" << endl;
	cout << "Type t or T for Triangle" << endl;
	cout << "Type d or D for Cylinder" << endl;
	cout << "Type e or E for RectCylinder" << endl;
	cout << "Type p or P for TriangularPrism" << endl;

	char choice;
	cin >> choice;
	cin.ignore();

	Circle *c = nullptr;
	Rectangle *r = nullptr;
	Triangle *t = nullptr;
	Cylinder *d = nullptr;
	RectCylinder *e = nullptr;
	TriPrism *p = nullptr;

	// Creating a shape according to user choice
	switch (choice)
	{
	case 'C':
	case 'c':
		c = new Circle("Circle", 2.2);
		break;

	case 'R':
	case 'r':
		r = new Rectangle("Rectangle", 5, 6.0);
		break;

	case 'T':
	case 't':
		t = new Triangle("Triangle", 5.5, 10.5);
		break;

	case 'd':
	case 'D':
		d = new Cylinder("Cylinder", 2, 10);
		break;

	case 'E':
	case 'e':
		double length;
		double width;
		double height;

		cout << "Length: ";
		cin >> length;
		cout << endl;

		cout << "Width: ";
		cin >> width;   
		cout << endl;

		cout << "Height: ";
		cin >> height;
		cout << endl;

		e = new RectCylinder("RectCylinder", length, width, height);
		break;

	case 'P':
	case 'p':
		double base;
		double depth;
		double heightp;

		cout << "base: ";
		cin >> base;
		cout << endl;
		cout << "depth: ";
		cin >> depth;
		cout << endl;

		cout << "Height";
		cin >> heightp;
		cout << endl;

		p = new TriPrism("TriPrism", base, heightp, depth);
		break;

	default:
		cout
			<< "There is no such choice."
			<< endl;
		break;
	}

	// Displaying the area of the shape selected by the user
	switch (choice)
	{
	case 'C':
	case 'c':
		cout << c->GetName() << ", area: " << c->GetArea() << endl
			 << endl;
		break;

	case 'R':
	case 'r':
		cout << r->GetName() << ", area: " << r->GetArea() << endl
			 << endl;
		break;

	case 'T':
	case 't':
		cout << t->GetName() << ", area: " << t->GetArea() << endl
			 << endl;
		break;

	case 'd':
	case 'D':
		cout << d->GetName() << ", area: " << d->GetArea() << endl
			 << endl;
		break;
	case 'E':
	case 'e':
		cout << e->GetName() << ", area: " << e->GetArea() << endl
			 << endl;
		break;

	case 'P':
	case 'p':
		cout << p->GetName() << ", area: " << p->GetArea() << endl
			 << endl;
		break;

	default:
		cout << "There is no such choice." << endl;
		break;
	}

	cout << endl;
	return 0;
}
