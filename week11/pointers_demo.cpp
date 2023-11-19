
#include <iostream>

using namespace std;

int main(){
    int x,y=90;
    x=234;

    int *pInt= nullptr; //Don't point to any location. 

    pInt=&x;

    cout<<"\nNormal way x: "<<x<<endl;
    cout<<"\nX resides at memory location: "<<&x<<endl;

    cout<<"\nValue of x using the pointer: "<<*pInt<<endl;

    *pInt=789;
    cout<<"\nAfter change: Normal way x: "<<x<<endl;

    pInt=&y;
    cout<<"\nValue of ? using the pointers: "<<*pInt<<endl;
    
}