/*
This question is from the Codemy app.

This is one of the most mysterious math problems of the last century
 - both because its statement is extremely simple - and because the proof is still unknown.
However, it offers good programming exercise for beginners.

Suppose we select some initial number X and then build the sequence of values by
 the following rules.

if X is even (X % 2 == 0) then
    Xnext = X / 2

else
    Xnext = 3 * X + 1;

If X is odd, the sequence grows - and if it is even, sequence decreases.
For example, with X = 15 we have the sequence:

15 46 23 70 35 106 53 160 80 40 20 10 5 16 8 4 2 1

After the sequence reaches 1 it enters the loop 1 4 2 1 4 2 1...

The intrigue is in the fact that any starting number X gives the sequence
 which sooner or later reaches 1 - however though this Collatz Conjecture was expressed
 in 1937, up to now no one could find a proof that it is really so for any X
 or could not find a counterexample (i.e. number for which sequence did not end with 1
 - either entering some bigger loop or growing infinitely).

Your task is for given numbers to calculate how many steps are necessary
 to come to 1.

Input:
2 15 97

Output:
1 17 118

github.com/J-Nying
*/

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;


class collatzSequence{
   
    public static void main(String[] args){

        String[] input={};
        int remainder;
        int count;
        ArrayList<Integer> results = new ArrayList();


        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter numbers each separated by space(s):");
        input = scanner.nextLine().split("\\s+");
        scanner.close();

        try{
            for(int i = 0; i<input.length; i++){
                
                remainder = Integer.parseInt(input[i]);
                count=0;

                while(remainder!=1){
                    if(remainder%2==0){
                        remainder/=2;
                    }
                    else{
                        remainder=3*remainder+1;
                    }
                    count++;
                }   
                results.add(count);
            }

        }
        catch(Exception e){
            results.clear();
            System.out.println("Kindly only enter numbers.");
        }
        for(int j=0; j<results.size(); j++){
            if(j<results.size()-1){
                System.out.print(results.get(j) + " ");
            }
            else{
                System.out.println(results.get(j));
            }
        }
    }
}