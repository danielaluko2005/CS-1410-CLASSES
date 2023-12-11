#include <iostream>
#include <string>

using namespace std;

class School
{
private:
    string schoolName;

public:
    School(string sc) : schoolName(sc) {}
    void printInfo()
    {
        cout << "School Name: " << schoolName << endl;
    }
};

class Teacher : public School
{
private:
    string teacherName;
    string teacherClass;

public:
    Teacher(string n, string c, string schName) : School(schName), teacherName(n), teacherClass(c) {}

    void printInfo()
    {
        cout << "Teacher Name: " << teacherName << endl;
        cout << "Teacher Class: " << teacherClass << endl;
        School::printInfo();
    }
};

class Student : public School
{
private:
    int age;
    string name;

public:
    Student(string sName, int sAge, string schName) : School(schName), name(sName), age(sAge) {}

    // Getter for age
    int getAge() const
    {
        return age;
    }

    // Getter for name
    string getName() const
    {
        return name;
    }

    // Function to print age and name
    void printAll() 
    {
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << endl;
        School::printInfo();
    }
};

int main()
{
    // Creating instances of the Teacher and Student classes
    Teacher myTeacher("Mr. Smith", "Math", "MySchool");
    Student myStudent("John Doe", 20, "MySchool");

    // Printing teacher info
    myTeacher.printInfo();

    cout << endl;

    // Printing student info
    myStudent.printAll();

    return 0;
}
