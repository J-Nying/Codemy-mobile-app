/**
 * @file guessTheNumber.cpp
 * @author github.com/J-Nying
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 *
 * We will create a simple guess the number type game. It will choose a random number between 1
 *  and 100 then challenge the player to guess the number in 10 turns.
 * 
 * After each turn the player would be told if they are right or wrong - and, if they are worng,
 *  if the guess was too low or too high.
 *
 * I would also tell the player what numbers they have previously guessed. The game will end once
 *  the player guesses correctly, or once they run out of turns. When the game ends, the player
 *  should be given an option to start playing again.
**/

#include <iostream>
#include <time.h>
using namespace std;

int main(){

    string clue="";
    //https://www.cplusplus.com/reference/cstdlib/rand/
    srand(time(NULL));
    int number = rand() % 100+1;
    string input;
    int guess;
    cout<<"Guess the which number between 1-100. You have 10 guesses.\nEnter your guess below:\n";

    for(int i=1; i<=10; i++){
        getline(cin, input);
        guess=stoi(input);
        if(guess==number){
            if(i==1){
            cout<<"Amazing! Correct on your first guess!";
            }
            else{
                cout<<"Correct! ";
            }
            break;
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

            if(i==3){
                    if(number%2==0){
                        clue+=" It's an even number.";
                    }
                    else{
                        clue+=" It's an odd number.";
                    }
                }

            if(i==5){
                for(int k=3; k<=10 && k<number; k++){
                    if(number%k==0){
                        clue+=" It's a multiple of " + to_string(k) + ".";
                        break;
                    }
                }
            }           

        }
        cout<<clue<<"\n";
        clue=""; 
    }

    cout<<"The number was "<<number<<"\nWould you like to play again?\n";

    return 0;
}
