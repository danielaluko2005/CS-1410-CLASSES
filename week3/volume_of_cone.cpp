/*
Date: September 14, 2023
Program Name: Calculating volume and surface area of a cone. 
Time invested: 5 minutes.
*/


#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double r;
    double h;
    double volume;
    double surfaceArea;

    cout<<"\nEnter value of radius: ";
    cin>>r;
    cout<<"\nEnter value of height: ";
    cin>>h;
    
    volume= (1.0/3) * M_PI * pow(r,2) * h;
    surfaceArea=((M_PI * r) * sqrt((pow(r,2) + pow(h,2)))) + (M_PI * pow(r,2));

    cout<<"The volume of cone is: "<<volume<<endl;
    cout<<"The surface area of a cone is: "<<surfaceArea<<endl;


    return 0;

}