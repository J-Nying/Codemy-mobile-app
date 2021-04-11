/**
 * @file caesarCipher.cpp
 * @author github.com/J-Nying
 * @version 0.1
 * @date 2021-04-10
 * 
 * @copyright Copyright (c) 2021
 * 
 * The Caesar cipher is one of the earliest known and simplest ciphers. It is a type of substitution
 *  cipher in which each letter in the plaintext is 'shifted' a certain number of places down the alphabet.
 * 
 * For example, with a shift of 1, A would be replaced by B, B would become C, and so on. The method is named after
 *  Julius Caesar, who apparently used it to communicate to his generals.
 * 
 * To pass an encrypted message from one person to another, it is first necessary that both parties have the
 *  'key' for the cipher, so that the sender may encrypt it and the receiver may decrypt it. For the caesar cipher,
 *  the key is the number of characters to shift the cipher alphabet.
 * 
 * Here is a quick example of the encryption and decryption steps involved with the caesar cipher.
 *  The text we will encrypt is 'hello world' with a shift key of 1.
 * 
 * Input:
 * hello world
 * 
 * Output:
 * ifmmp xpsme
 **/


#include <iostream>
using namespace std;

int main(){

    string s;
    string print;
    int key;
    char c;

    cout<<"Enter the cipher key:\n";
    cin>>key;
    while(key<1||key>25){
        cout<<"The key must be between 1-25 inclusive. Enter the cipher key:\n";
        cin>>key; 
    }
    cout<<"Enter the text to be encrypted:\n";

    //Credit to: https://stackoverflow.com/a/6649914
    cin.ignore();
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        c=s[i];
        if(c>='a' && c<='z'){
            c=s[i]+key;
            if(c>'z'){
                print+= c + 'a' - 'z' - 1;
            }
            else{
                print+=c;
            }
        }

        else if(c>='A' && c<='Z'){
            c=s[i]+key;
            if(c>'Z'){
                print+= c + 'A' - 'Z' - 1;
            }
            else{
                print+=c;
            }
        }

        // else if(isdigit(s[i])){
        //     print+=(int)c+key;
        // }

        else{
            print+=c;
        }
    }

    cout<<print;

    return 0;
}