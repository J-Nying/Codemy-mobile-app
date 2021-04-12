/**
 * @file rail-FenceCipher.cpp
 * @author github.com/J-Nying
 * @version 0.1
 * @date 2021-04-11
 * 
 * @copyright Copyright (c) 2021
 *
 * 
 * The railfence cipher is a very easy to crack cipher. It is a transposition
 *  cipher that follows a simple rule for mixing up the characters in the
 *  plaintext to form the ciphertext.
 * 
 * The railfence cipher offers essentially no communication security, and it
 *  will be shown that it can be easily broken even by hand.
 * 
 * Although weak on its own, it can be combined with other ciphers, such as
 *  substitution cipher, the combination of which is more difficult to break
 *  than either cipher on its own.
 * 
 * Example
 * 
 * Input:
 * hello world
 * key = 3
 * 
 * Output:
 * horel ollwd

I had to use notepad to figure this out.

h   o       r
 e l ' '  o   l
  l     w       d

a[0][0]=h
a[1][0]=e
a[2][0]=l

a[1][1]=l
a[0][1]=o

a[1][2]=' '
a[2][2]=w

a[1][3]=o
a[0][3]=r

a[1][4]=l
a[2][4]=d

ho-rel' 'ollw-d

Input:
just a few words.
key: 4
j        ' '           o 
  u      a  f         w   r
   s  ' '     e    ' '      d    .
     t          w             s

I plan on improving the solution.

**/

#include <iostream>
using namespace std;

int main(){

    string s;
    int key;
    bool goingDown=true;

    cout<<"Enter the text to be encrypted:\n";
    getline(cin, s);

    cout<<"Enter the cipher key:\n";
    cin>>key;
    while(key<1 || key>s.length()){
        cout<<"The key must be between >=1 and less than the length of the text to be encrypted. Enter the cipher key:\n";
        cin>>key;
    }
    
    char array[key][s.length()];
    for(int i=0; i<key; i++){
        for(int j=0; j<s.length(); j++){
            array[i][j]='|';
        }

    }
    int row=0;
    int column=0;

    for(int i; i<s.length(); i++){
        
        if(goingDown){
            array[row][column]=s[i];
            row++;
            if(row>=key-1){
                goingDown=false;
                column++;
            }
        }
        else{
            array[row][column]=s[i];
            row--;
            if(row==0){
                goingDown=true;
                column++;
            }
        }
        


    }

    for(int j=0;j<key; j++){
        for(int k=0; k<s.length(); k++){
            if(array[j][k]!='|')
            cout<<array[j][k];
        }


    }

    return 0;
}
