#include <iostream>
#include <vector>
using namespace std;

int main(){
    const int ROWS=3;
    const int COLS=3;
    int arr[ROWS][COLS]={{5,1,0},
                        {3,2,4},
                        {2,6,-1},};
    int leftSum=0;
    int leftSecondElement=0;
    int rightSecondElement=2;
    int rightSum=0;
                
    for (int i=0; i<ROWS;i++){
        leftSum+=arr[i][leftSecondElement];
        leftSecondElement++;
        rightSum+=arr[i][rightSecondElement];
        rightSecondElement--;
    }
    cout<<"\n The sum of the left diagonal is: "<<leftSum<<endl;
    cout<<"\n The sum of the right diagonal is: "<<rightSum<<endl;

}