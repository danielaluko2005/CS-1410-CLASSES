
class Teacher : public Person {
   private:
      string subject;

   public:
      Teacher(string teacherName, int teacherAge, string teacherSubject) {
         this->name = teacherName;
         this->age = teacherAge;
         this->subject = teacherSubject;
      }

      void printInfo() const {
         string nameAndAge = this->getNameAndAge();

         cout << nameAndAge << endl;
         cout << "Subject: " << this->subject << endl;
      }
};