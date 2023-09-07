
# include <iostream>
using namespace std;
# include <cmath>
int main(){
    double p;
    double r;
    double n;
    double payment;
    cout<<"Enter Principal::--"<<"\n";
    cin>>p;
    cout<<"Enter Rate::--"<<"\n";
    cin>>r;
    cout<<"Enter n::--"<<"\n";
    cin>>n;
    payment=((p*r)/(1-pow((1+r),-n)));
    cout<<"The Payment is "<<payment<<endl;
    return 0;
}