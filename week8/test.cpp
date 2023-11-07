#include <iostream>
#include <vector>
using namespace std;

int main(){
    int x;
    int y=1;
    x=++y;
    cout<<"y: "<<y<<endl;
    cout<<"x: "<<x<<endl;
    int p=(x<y)?x:y;
    cout<<p<<endl;
}