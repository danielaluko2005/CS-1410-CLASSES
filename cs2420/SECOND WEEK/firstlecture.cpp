#include <iostream>
#include <exception>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


int main(){
    // Basic rules of pointers.
    int random=8;
    int* randomptr= &random;
    *randomptr=40;
    cout<<"Pointer : "<<*randomptr<<endl;
    cout<<"Real Value : "<<random<<endl;


    // Heap
    int* heapValue = new int[3];
    for (int i=0;i<3;i++){
        heapValue[i]=i;
    }

    // *heapValue=90;


    heapValue[2]=8;
    // cout<<"Heap : "<<heapValue[2]<<endl;

    for (int i=0;i<3;i++){
        cout<<"Heap : "<<heapValue[i]<<endl;
    }

    delete[] heapValue;
    


    return 0;

}