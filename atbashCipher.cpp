/**
 * @file atbashCipher.cpp
 * @author github.com/J-Nying
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 * The Atbash cipher is a substitution cipher with a specific key where
 *  the letters of the alphabet are reversed. i.e. all 'A's are
 *  replaced with 'Z's, all 'B's are replaced with 'Y's, and so on. It
 *  was originally used for the Hebrew alphabet, but can be used for
 *  any alphabet.
 * 
 * The Atbash cipher offers almost no security, and can be broken very
 *  easily. Even if an adversary doesn't know a piece of ciphertext has
 *  been enciphered with the Atbash cipher, they can still break it by
 *  assuming it is a substitution cipher and determining the key using
 *  hill-climbing. The Atbash cipher is also an Affine cipher with a=25
 *  and b=25 so breaking it as an affine cipher also works.
 * 
 * Input:
 * hello
 * 
 * Output:
 * svool dliow
 * **/


#include <iostream>
using namespace std;

int main(){

    string input;

    cout<<"Enter the message to be translated:\n";
    getline(cin, input);

    for(int i=0; i<input.length(); i++){

        if(islower(input[i])){
            input[i] = 'z' - input[i] + 'a';
        }
        else{
            input[i] = 'Z' - input[i] + 'A';
        }

    }

    cout<<input;
    
    return 0;
}