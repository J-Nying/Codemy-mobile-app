/**
 * @file simpleSubstitutionCipher.cpp
 * @author github.com/J-Nying
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 * The simple substitution cipher is a cipher that has been in use for
 *  hundreds of years (an excellent history is given in Simon Singh's
 *  'The Code Book'). It basically consists of substituting  every
 *  plaintext character for a ciphertext character. It differs from
 *  the Caesar cipher in that the cipher alphabet is not simply
 *  shifted, it is completely jumbled.
 * 
 * The simple substitution cipher offers very little communication
 *  security, and it will be shown that it can be very easily broken
 *  even by hand, especially as the messages become longer (more
 *  than several hundred ciphertext characters).
 * 
 * Input:
 * helloworld
 * 
 * Output:
 * einndtdkng
 * 
 * Keys for the simple substitution cipher usually consist of
 *  26 letters (compared to the Caesar cipher's single number).
 *  An example key is:
 * 
 * plain alphabet:
 * abcdefghijklmnopqrstuvwxyz
 * 
 * cipher alphabet:
 * phqgiumeaylnofdxjkrcvstzwb
 * **/


#include <iostream>
using namespace std;

int main(){

    string input;
    string key;
    int getKey;

    cout<<"Enter the message to be translated:\n";
    getline(cin, input);
    cout<<"Enter the cipher alphabet (26 letters only):\n";
    getline(cin, key);

    for(int i=0; i<input.length(); i++){

        if(islower(input[i])){
            getKey = input[i]-'a';
            input[i] = key[getKey];
        }
        else{
            getKey = input[i]-'A';
            input[i] = toupper(key[getKey]);
        }

    }

    cout<<input;
    
    return 0;
}