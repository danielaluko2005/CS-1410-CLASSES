
#include <iostream>

using namespace std;

int main(){
    int customerAge;
    int price;
    cout<<"Please enter customer age::-";
    getline(cin,customerAge);
    if (customerAge>65){
        cout<<customerAge;
    }


}
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main(){
//     double x=4;
//     cout<<static_cast<double>(x)/3<<endl;
//     cout<<(1>2?1:2)<<endl; // Tenary operands.
// }