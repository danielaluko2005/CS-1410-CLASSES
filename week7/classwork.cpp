#include <iostream>
#include <vector>
using namespace std;


int main(){
    // int pound=2;
    for (int i=1; i<=15;i++){
        if (i%5!=0){
            if (i==3 || i==9){
                cout<<"#"<<" ";
                continue;
            }
            cout<<i<<" ";
        }
        else{
            if (i==15){
                cout<<"#"<<endl;
                continue;
            }
            cout<<i<<endl;
        }
    }
}