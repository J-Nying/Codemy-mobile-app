/**
 * @file guessTheNumber.cpp
 * @author github.com/J-Nying
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 *
**/

#include <iostream>
#include <time.h>
using namespace std;

int main(){

    string clue="";
    //https://www.cplusplus.com/reference/cstdlib/rand/
    srand(time(NULL));
    int number = rand() % 100+1;
    int guess;
    int numberOfTries=10;
    cout<<"Guess the which number between 1-100. You have 10 guesses.\nEnter your guess below:\n";

    for(int i=1; i<=numberOfTries; i++){
        cin.ignore();
        cin>>guess;
        if(guess==number){
            if(i=1){
            cout<<"Amazing! Correct on your first guess!";
            }
            else{
                cout<<"Correct!";
            }
        }
        else{

            if(i>=1){
                if(guess<number){
                    clue+="Too low.";
                }
                else{
                    clue+="Too high.";
                }

                
                }

                if(i=2){
                    if(number%2==0){
                        clue+=" It's an even number.";
                    }
                    else{
                        clue+=" It's an odd number.";
                    }
                }

                if(i=3){
                    for(int k=3; k<=10 && k<number; k++){
                        if(number%k==0){
                            clue+=" It's a multiple of " + to_string(k) + ".";
                        }
                    }
            }
            
            cout<<clue<<endl;
            clue="";

        }
        
    }

    cout<<"The number was: "<<number;
    return 0;
}