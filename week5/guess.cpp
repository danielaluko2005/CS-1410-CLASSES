/*
Date: September 27, 2023
Program Name: Guessing game
Program Description:    [ Generate a random number in the range of 1 to 100 
                        and it will prompt the player to enter a guess and 
                        then tell the player if his/her guess was high or low. ]
Time invested: 5 minutes.
*/

#include <iostream>
#include <random>
#include <chrono>
using namespace std;

int main()
{
    int guess;
	default_random_engine rng((unsigned)(chrono::system_clock::now().time_since_epoch().count()));
	uniform_int_distribution<int> range(1, 100);
	int target = range(rng);
	do{
        cout<<"Please guess a number between 1 and 100:: ";
        cin>>guess;

        if (guess==0){
            break;
        }
        else if (guess==target){
            cout<<"You win"<<endl;
            break;
        }
        else if (guess<target){
            cout<<"You have guessed low, try again..."<<endl;
        }
        else{
            cout<<"You have guessed high, try again..."<<endl;;
        }
        
    }while(guess>=0);
    
    cout<<"done";
    
}