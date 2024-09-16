#include <iostream>
#include <exception>
using std::cout;
using std::cin;
using std::endl;

class SafeArray{
    public:
    SafeArray(const int capacity);
    ~SafeArray(); //Destructor
    void set(const int index, const int& data);
    int get(const int index) const;
    private:
        int capacity {0};
        int* arr{nullptr};
};

SafeArray::SafeArray(const int capacity){
    this->capacity=capacity;
    this->arr= new int[capacity];
}

SafeArray::~SafeArray(){
    delete[] this->arr;
}

void SafeArray::set(const int index, const int& data){
    if (index>=capacity || index<0){
        cout<<"The index was out of bounds"<<endl;
        throw ;
    }
    this->arr[index]=data;
}

int SafeArray::get(const int index) const{
    return this-> arr[index];
}










int main() {
  
  // Make an array on the stack
  // Heap
  // Stack everything known at compile time
  // How big is it? ~10MB ish
  // Heap is for dynamic stuff
  // How big is it? The rest of your RAM (usually)
  // Who manages it. The operating system manages it
  // A program requests some amount of space in the heap from the operating system
  // If there is room (and almost always there is), then it sets aside a region
  // to contain enough room for the program's request
  // The operating system then internally has a table where it knows that 
  // program is associated with that chunk of memory
  // The C++ "new" keyword does this. Plain new for a single item or new [] for arrays
  // What does the OS give you, the program, back
  // It gives the program an address
  // What should we store that address in? A pointer
  
  int* myArray = new int[100];

  // What is this an address to...the very first byte of all the data
  // What can you as a program do with that pointer
  // I can read from it, and write to it
  cout << *myArray << endl; // This reads the first 4 bytes as an int
                            // The * dereferences

  cout << *(myArray + 1) << endl; 

  cout << myArray[0] << endl;
  cout << myArray[1] << endl;

  cout << myArray[42] << endl;
  myArray[1] = 123;
  *(myArray + 1) = 123;

  cout << myArray[100] << endl;
  cout << myArray[-1] << endl;

  // Does the operating system know if you read data outside of your bounds
  // It might if your address is wildly out bounds
  // Does the operating system know if when you're done with your array
  // How do we tell the operating system we no longer need that chunk of memory
  // delete, or delete[]
  delete[] myArray;
  
  SafeArray myObject(100);
  for (int i = 0; i < 100; i++) {
    myObject.set(i, i * i);
  }
  for (int i = 0; i < 100; i++) {
    cout << "At item " << i << ": " << myObject.get(i);
  }
  myObject.set(100, 666); // This won't crash but it won't assign
  myObject.set(-1, 666); // This won't crash but it won't assign

  // Get something bad
  try {
    cout << myObject.get(100) << endl;
  }
  catch (std::exception& myerror) {
    cout << "An index was out of bounds" << endl;
  }

  cin.get();
  return 0;
}