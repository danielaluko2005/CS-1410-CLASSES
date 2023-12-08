// Create a student report
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Student
{
private:
    string name;
    int id;
    string major;
    double Gpa;

public:
    Student()
    {
        name = "";
        id = -1;
    }
    Student(string n, int ID) : name(n), id(ID) {}
    void SetName(string n) // setter or mutator
    {
        name = n;
    }
    string GetName() const // getter or accessor
    {
        return name;
    }

    void SetID(int i)
    {
        id = i;
    }
    int GetID() const
    {
        return id;
    }
    void Setmajor(string funcMajor)
    {
        major = funcMajor;
    }
    string Getmajor()
    {
        return major;
    }

    void SetGPA(double funcGPA)
    {
        Gpa = funcGPA;
    }
    double GetGPA()
    {
        return Gpa;
    }
};
// Creating an array of objects
int main()
{
    const int NUM_STUDS = 10;
    Student studs[NUM_STUDS];
    string sName;
    int sID;
    double gpa;
    string major;
    cout << "Populate student info: ";
    cout << "\n========================";
    for (int i = 0; i < NUM_STUDS; i++)
    {
        cout << endl;
        cout << "Enter name: ";
        getline(cin, sName);
        studs[i].SetName(sName);
        cout << "ID: ";
        cin >> sID;
        studs[i].SetID(sID);

        cout << "GPA: ";
        cin >> gpa;
        studs[i].SetGPA(gpa);

        cin.ignore();
        cout << "Major: ";
        getline(cin, major);
        studs[i].Setmajor(major);
    }

    cout << "\n==========================================================="<<endl;

    cout <<"|"<< setw(20) << left << "Name"
         << "|" << setw(5) << left << "ID";
    cout << "|" << setw(20) << left << "Major"
         << "|";
    cout << setw(10) << left << "OverallGPA" << setw(10) << left << "|" << endl;

    cout << "==========================================================="<<endl;

    for (int i = 0; i < NUM_STUDS; i++)
    {
        cout <<"|"<< setw(20) << left << studs[i].GetName() << "|" << setw(5) << left << studs[i].GetID();
        cout << "|" << setw(20) << left << studs[i].Getmajor() << "|";
        cout << setw(10) << left << studs[i].GetGPA() << setw(10) << left << "|" << endl;
    }
    cout << "==========================================================="<<endl;

    cout << endl;
    return 0;
}
/*
// Syntax help
Student s1("Alice", 13);
Student s2("Zak", 44);
cout << s1.GetName() << " " << s1.GetID() << endl;
cout << s2.GetName() << " " << s2.GetID() << endl;
s2.SetID(46);
cout << s1.GetName() << " " << s1.GetID() << endl;
cout << s2.GetName() << " " << s2.GetID() << endl;
*/
