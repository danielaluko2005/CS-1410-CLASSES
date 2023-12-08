#include "Person.h"
#include "Student.h"
#include "Teacher.h"
using namespace std;

int main() {
   Student myStudent = Student("James", 16, 3.3);
   Teacher myTeacher = Teacher("Einstein", 31, "Math");

   myStudent.printInfo();
   cout << endl;
   myTeacher.printInfo();
}