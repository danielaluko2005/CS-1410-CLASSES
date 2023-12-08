#include <string>
#include <iostream>
using namespace std;

class Student : public Person {
   private:
      double gpa;

   public:
      Student(string studentName, int studentAge, double studentGPA) {
         this->name = studentName;
         this->age = studentAge;
         this->gpa = studentGPA;
      }

      void printInfo() const {
         string nameAndAge = this->getNameAndAge();

         cout << nameAndAge << endl;
         cout << "GPA: " << this->gpa << endl;
      }
};