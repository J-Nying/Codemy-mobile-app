/*
This question is from the Codemy app.

From this problem we will learn a popular programming trick used in many variants
 of statistic calculations.

Imagine that a forester is trying to count pines, firs and birches on some section of
 wood. Hee can go through this section three times counting only pines on the first pass,
 only firs on the second and only birches on the third.

More efficient way is to make only one pass through wood and for each tree add a dot to one of the pages 
 in his notebook - first page for pines, the next for firs and last birches. That is the idea of counting similar elements
 in the sequence using array of counters (instead of notebook).

Here is an array of length M with numbers in the range 1...N,
 where N is less than or equal to 20. We are to go through it and count how many times
 each number is encountered.

Input:
3 2 1 2 3 1 1 1 1 3

Output:
1: 5
2: 2
3: 3

github.com/J-Nying
*/

import java.util.Arrays;
import java.util.Scanner;


class arrayCounters{
   
    public static void main(String[] args){

        String[] input = {};
        int[] counter = new int[20];
        ArrayList<String> results = new ArrayList();


        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter numbers 1-20 each separated by space(s):");
        input = scanner.nextLine().split("\\s+");
        scanner.close();
            
        
        try{
            for(String s : input){
                counter[Integer.parseInt(s)-1]++;                
            }

            for(int i=0; i<counter.length; i++){
                if(counter[i]>0){
                    System.out.println((i+1)+": "+counter[i]);
                }
            }
        }
        catch(Exception e){
            System.out.println("Error, kindly only enter numbers 1-20.");
        }

    } 
}
