#include <iostream>
#include <vector>
using namespace std;


int main(){
    const int NUM_STUDS=2;
    vector<string> studNames(NUM_STUDS);
    vector<int> studScores(NUM_STUDS);

    cout<<"Populate the vector."<<endl;
    for(int i=0; i<NUM_STUDS;i++){
        cin>>studNames.at(i);
        cin>>studScores.at(i);
    }

    cout<<"Display the data..."<<endl;
    for (int i=0; i<NUM_STUDS; i++){
        cout<<studNames.at(i)<<" "<<studScores.at(i)<<endl;
    }

    cout<<"current size of studNames: "<<studNames.size()<<endl;

    studNames.resize(5);
    studScores.resize(5);
}