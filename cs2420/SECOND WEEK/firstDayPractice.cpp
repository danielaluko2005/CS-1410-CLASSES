#include <iostream>
#include <exception>
using std::cout;
using std::cin;
using std::endl;

class SafeArray{
    private:
    int capacity =0;
    int* arr{nullptr};
    public:
    SafeArray(const int capacity);
    ~SafeArray();
    void FillArray();
    void PrintArray();

};

SafeArray::SafeArray(const int capacity){
    this->capacity=capacity;
    this->arr=new int[capacity];
}

SafeArray::~SafeArray(){
    delete[] this-> arr;
}

void SafeArray::FillArray(){
    for(int i=0;i<capacity;i++){
        arr[i]=10*i;
    }
}

void SafeArray::PrintArray(){
    for (int i=0;i<capacity;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    SafeArray Example(4);
    Example.FillArray();
    Example.PrintArray();

  return 0;  
}