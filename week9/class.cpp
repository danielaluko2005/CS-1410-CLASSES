#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

float my_pow(float a, float b){
    return pow(a,b);
}

int main(){
    float a= 30;
    float b=3;

    cout<<my_pow(a,b)<<endl;
   
}