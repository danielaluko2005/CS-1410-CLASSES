
#include <iostream>

using namespace std;

int main(){
    double num1;
    double num2;
    char inChoice;
    double result;
    cout<<"Please enter a number "<<endl;
    cin>>num1;
    cout<<"Please enter another number"<<endl;
    cin>>num2;

    cout<<"Please enter your choice of operation"<<endl;
    cout<<"Enter a for addition"<<endl;
    cout<<"Enter s for subtraction"<<endl;
    cout<<"Enter m for multiplication"<<endl;
    cout<<"Enter d for divition"<<endl;
    cin>>inChoice;
    if (inChoice=='a'){
        result=num1+num2;
    }
    else if( inChoice=='s'){
        result=num1-num2;
    }
    else if( inChoice=='m'){
        result=num1*num2;
    }
    else if( inChoice=='d'){
        result=num1/num2;
    }
    else{
        cout<<"Not a valid choice."<<endl;
        result=99999;
    }
    cout<<"Result is: "<<result<<endl;

}