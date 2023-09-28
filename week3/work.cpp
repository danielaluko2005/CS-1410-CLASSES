#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    // :: Is called scope resolution operator.
    int someNumber;
    std::cout<<"Enter any integer:: ?"<<endl;
    cin>>someNumber;

    cout<<"someNumber is: "<<someNumber<<endl;

    cout<<"\nLearning static_cast<type>(exp)"<<endl;

    int num1=23;
    int num2=10;

    int intResult=num1/num2;

    double realResult=static_cast<double>(num1)/static_cast<double>(num2);

    cout<<"\n Integer val: "<<intResult<<"\nReal Value: "<<realResult<<endl;

    cout<<"(double)num1/num2:   "<<(double)num1/num2<<endl;
    cout<<"double(num1/num2):   "<<double(num1/num2)<<endl;
    cout<<"double(num1/num2)    "<<((double)(num1/num2))<<endl;

    cout<<"\n Learning Literals"<<endl;

    cout<<"Integer literal"<<123<<endl;
    cout<<"Double literal"<<123.456<<endl;
    cout<<"Character Literal"<<"x"<<endl;
    cout<<"String Literal"<<"My name is 007"<<endl;

    cout<<"Bool literal true"<<true<<endl;
    cout<<"just A"<<"A"<<endl;
    cout<<"Static_char<char>(97)"<<static_cast<char>(97);

}