#include <iostream>

using namespace std;


int main(){

    int numberOfTimes;
    int howManyLetters;
    cout<<"Enter number of times::- ";
    cin>>numberOfTimes;
    cout<<"Enter number of letters::- ";
    cin>>howManyLetters;
    for(int letterNumber=0; letterNumber<howManyLetters;letterNumber++){
        
        for (int i=1; i<=numberOfTimes;i++){
            cout<<static_cast<char>('A'+letterNumber)<<i<<" ";
        }
        cout<<endl;
    }
}
