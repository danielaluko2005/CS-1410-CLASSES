
#include <iostream>

using namespace std;

class Students
{
private:
    string name;
    int rollNo;
    string gender;
    double funcgpa;

public:
    void Setname(string n)
    {
        name = n;
    }

    void Setrollno(int num)
    {
        rollNo = num;
    }

    void SetGender(string gen)
    {
        gender = gen;
    }

    void Setgpa(double gpa)
    {
        funcgpa = gpa;
    }

    void PrintInfo()
    {
        cout << "Name is: " << name << endl;
        cout << "Roll number is: " << rollNo << endl;
        cout << "Gender is: " << gender << endl;
        cout << "GPA is: " << funcgpa << endl;
    }
};

class Human
{

private:
    double height;
    string name;
    string gender;

public:
    void SetName(string n)
    {
        name = n;
    }
    void IntroduceMyself()
    {
        cout << "I am: " << name << endl;
    }
};

int main()
{
    Human person1;
    Human person2;

    person1.SetName("Adam Smith");
    person2.SetName("Eve Dart");

    person1.IntroduceMyself();
    person2.IntroduceMyself();

    cout << endl;
    cout << sizeof(Human) << endl;

    Students student1,student2;
    student1.Setname("Daniel");
    student2.Setname("Tomison");

    student1.SetGender("Male");
    student2.SetGender("Male");

    student1.Setrollno(20);
    student2.Setrollno(25);

    student1.Setgpa(4.0);
    student2.Setgpa(3.97);

    student1.PrintInfo();
    student2.PrintInfo();



    return 0;
}