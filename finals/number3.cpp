#include <iostream>
#include <string>
#include <vector>

using namespace std;

void Triple(int& num){
    num=num*3;
}


int main(){
    int number=10;
    Triple(number);
    cout<<"Number is "<<number<<endl;

}