// Create a student report
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class MyClass {
    // No access specifier is provided, so members are private by default
    int myPrivateMember;

public:
    // This member is explicitly declared as public
    void myPublicFunction() {
        // Some code here
    }
};

int main() {
    MyClass obj;
    // obj.myPrivateMember; // This would be a compilation error since it's private
    obj.myPublicFunction(); // This is accessible because it's public

    return 0;
}
