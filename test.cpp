#include <iostream>
#include <string>
#include <vector>

using namespace std;

double slope(double x1,double y1,double x2,double y2){
    return ((y2-y1)/(x2-x1));
}

int main(){
    double x1,x2,y1,y2;
    
    cout<<"Enter Values for coordinate 1: "<<endl;
    cin>>x1;
    cin>>y1;

    cout<<"Enter values for coordinate 2: "<<endl;
    cin>>x2;
    cin>>y2;

    cout<<"The slope of the line given by points x1, y1 and x2, y2 is: "<<slope(x1,y1,x2,y2)<<endl;

    cout<<"Press any Key to continue. . ."<<endl;
}