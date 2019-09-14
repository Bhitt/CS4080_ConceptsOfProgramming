/*
Author: Branden Hitt
Purpose: store 8000 randomly generated integers in the range of 1 to 1000
         inclusively using different languages/methods
 */
package java_bindingexercise;

import java.util.ArrayList;
import java.util.Random;

/**
 *
 * @author bhitt
 */
public class Java_bindingExercise {

    /**
     * @param args the command line arguments
     */
    //Global value for size
    public static final int SIZE = 8000;
    
    public static void main(String[] args) {
        //call either stackDynamic or heapDynamic
            //long time = stackDynamic();
        long time = heapDynamic();
        //output results
        System.out.println("Finished computing");
        System.out.println("Execution time in nanoseconds: "+ time);
        System.out.println("Execution time in milliseconds: "+ time/1000000);
        
        
    }
    
    public static long stackDynamic(){
        //create instance of Random class
        Random rand = new Random();
        //start timer
        long startTime = System.nanoTime();
        // declare a stack dynamic Java array
        //final int SIZE = 8000;
        int[] numArray = new int[SIZE];
        //store randomly generated numbers one by one into the array
        for(int i=0;i<SIZE;i++){
            numArray[i] = rand.nextInt(1000)+1;
        }
        //end timer
        long endTime = System.nanoTime();
        long timeElapsed = endTime - startTime;
        //return time
        return timeElapsed;
    }
    
    public static long heapDynamic(){
        //create instance of Random class
        Random rand = new Random();
        //start timer
        long startTime = System.nanoTime();
        //declare a heap dynamic Java ArrayList
        ArrayList<Integer> numList = new ArrayList<>();
        //store randomly generated numbers one by one into the list
        for(int i=0;i<SIZE;i++){
            numList.add(rand.nextInt(1000)+1);
        }
        //end timer
        long endTime = System.nanoTime();
        long timeElapsed = endTime - startTime;
        //return time
        return timeElapsed;
    }
    
}
