#include <iostream>

using namespace std;

int main(){

    string myName;
    string friendsName;
    string myMajor;

    cout<<"\n Enter your name::   ";
    getline(cin,myName);
    // Cin only picks the first character before a space is encountered. 
    // getline gets everything
    cout<<"\n Enter your major::    ";
    getline(cin,myMajor);

    cout<<"\n Displaying name and Major...\n";
    cout<<myName<<"  "<<myMajor;
    // Strings are mutable in C++
    cout<<"\n Processing the name.....\n";
    myName[0]='s';
    myName[1]='o';
    cout<<"New Name "<<myName<<endl;

}