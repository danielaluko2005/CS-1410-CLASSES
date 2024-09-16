#include <iostream>
#include <string>
#include <memory>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::shared_ptr;
using std::make_shared;


int main() {
// When do you use "new"
// Modern computers have something called a stack (always), and usually a heap
// The stack is fixed knowledge. Fixed sizes. Compiled variable data is exact.
// Use dynamic memory, the heap, if A) the amount is known at runtime, or B) the data
// is larger than the stack.
// Use new if you are in C++, use delete to clean up
// Use malloc if you are in C, use free to clean up
// Use other variations if you really know what you're doing

// When you have a pointer, what does it mean, what's in it
// A pointer is just an address.
//  Can I change that address?
//int* arr = new int[5];
//// suppose arr is at 0x00004088
//arr[0] = 42;
//arr[1] = 43;
//// ++arr;
//// now what is the value of arr: 0x0000408C
//cout << "What index in the array is this data: " << arr[0] << endl;
//int* cpyArr = arr;

//delete[] arr; // reclaim a chunk of memory starting at that address
//arr = nullptr;
//cout << "What index in the array is this data: " << cpyArr[0] << endl;

// Raw pointer array
int* arr = new int[10];
for (int i = 0; i < 10; i++) {
arr[i] = i + 100;
}
delete[] arr;

    // Shared pointers
shared_ptr<int[]> shArr = make_shared<int[]>(10);
for (int i = 0; i < 10; i++) {
shArr[i] = i * 100;
}

{
// This copies the pointer
// It also increments the internal reference counter to 2
shared_ptr<int[]> copyshArr = shArr;

cout << "Number of things pointing to the array: " << copyshArr.use_count() << endl;
cout << "The data at index 4 is: " << copyshArr[4] << endl;
// Change data at index 4
shArr[4] = 1004;
cout << "The data at index 4 is: " << copyshArr[4] << endl;
cout << "The data at index 4 is: " << shArr[4] << endl;

}
cout << "Number of things pointing to the array: " << shArr.use_count() << endl;
//shArr.reset();
shArr = make_shared<int[]>(10000);

cout << "Number of things pointing to the array: " << shArr.use_count() << endl;

cin.get();
return 0;
}