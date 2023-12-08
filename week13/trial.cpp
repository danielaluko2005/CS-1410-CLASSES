#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Employee {
public:
   void SetName(string employeeName) {
      name = employeeName;
   }

   virtual void PrintInfo() {
      cout << name << endl;
   }

protected:
   string name;
};

class Nurse : public Employee {
public:
   void SetHospital(string setHospital) {
      hospital = setHospital;
   }

   void PrintInfo() {
      cout << name << " works at " << hospital << endl;
   }

private:
   string hospital;
};

class Designer : public Employee {
public:
   void SetObject(string setObject) {
      object = setObject;
   }

   void PrintInfo() {
      cout << name << " designs " << object << endl;
   }

private:
   string object;
};

int main() {
   Employee* person1;
   Nurse* person2;
   Designer* person3;

   vector<Employee*> personList;
   unsigned int i;

   person1 = new Employee();
   person1->SetName("Wes");

   person2 = new Nurse();
   person2->SetName("Cora");
   person2->SetHospital("Downtown Clinic");

   person3 = new Designer();
   person3->SetName("Amy");
   person3->SetObject("cars");

   personList.push_back(person3);
   personList.push_back(person1);
   personList.push_back(person2);

   for (i = 0; i < personList.size(); ++i) {
      personList.at(i)->PrintInfo();
   }
   
   return 0;
}