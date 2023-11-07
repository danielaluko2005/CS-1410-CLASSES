#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> items(2);
    
    cout<<"\n**************push_back() add (PUT) DATA"<<endl;
    items.push_back(44);  //PUSHBACK adds data to the last of the vector
    items.push_back(-1);
    items.push_back(505);
    items.push_back(76);

    cout<<"\nHow many items in the list: "<<items.size()<<endl;

    for (auto item: items){
        cout<<item<<" "<<endl;
    }
}