# include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double v;
    double u;
    double t;
    double a;

    cout<<"Enter value for V::-";
    cin>>v;
    cout<<"Enter value for u::-";
    cin>>u;
    cout<<"Enter value for t::-";
    cin>>t;
    a=(v-u)/t;
    cout << fixed << setprecision(2);
    cout<<a<<endl;
}