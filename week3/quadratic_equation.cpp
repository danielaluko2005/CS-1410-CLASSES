/*
Date: September 14, 2023
Program Name: Calculating the roots of an equation. 
Time invested: 5 minutes.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double a;
    double b;
    double c;
    double x1;
    double x2;

    cout<<"\nEnter value for a: ";
    cin>>a;
    cout<<"\nEnter value for b: ";
    cin>>b;
    cout<<"\nEnter value for c: ";
    cin>>c;

    x1=(-b+(sqrt(pow(b,2)-(4*a*c))))/(2*a);
    x2=(-b-(sqrt(pow(b,2)-(4*a*c))))/(2*a);

    cout<<"x1 is equal to: "<<x1<<endl;
    cout<<"x2 is equal to: "<<x2<<endl;

    return 0;

}
