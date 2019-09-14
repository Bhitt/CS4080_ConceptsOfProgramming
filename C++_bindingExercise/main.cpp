/* 
 * File:   main.cpp
 * Author: Branden Hitt
 * Purpose: Store 8000 randomly generated integers in the range of 1 to 1000 
 *          inclusively using different languages/methods.
 * Created on September 14, 2019, 10:54 AM
 */

//System libraries
#include <cstdlib> // rand
#include <chrono>  //timing
#include <iostream>

//Globals
const int SIZE = 8000;

//Function prototypes
void stackDynamic();
void heapDynamic();

using namespace std;
using namespace std::chrono; 
/*
 * 
 */
int main(int argc, char** argv) {
    //set the random seed
    srand(static_cast<unsigned int>(time(0))); //set random seed
    //call stackDynamic or heapDynamic
        //stackDynamic();
    heapDynamic();
    return 0;
}

void stackDynamic(){
    //start timer
    auto start = high_resolution_clock::now(); 
    //declare a stack dynamic array and store randomly generated integers
    int numbers[SIZE];
    for(int i=0;i<SIZE;i++){
        numbers[i] = rand()%1000+1;
    }
    //end timer
    auto stop = high_resolution_clock::now(); 
    //output the time
    auto duration = duration_cast<nanoseconds>(stop - start); 
    cout << "Time taken by stack dynamic: "
         << duration.count() << " nanoseconds" << endl; 
    
}

void heapDynamic(){
    //start timer
    auto start = high_resolution_clock::now(); 
    //declare a stack dynamic array and store randomly generated integers
    int *numbers = new int[SIZE];
    for(int i=0;i<SIZE;i++){
        numbers[i] = rand()%1000+1;
    }
    //end timer
    auto stop = high_resolution_clock::now(); 
    //output the time
    auto duration = duration_cast<nanoseconds>(stop - start); 
    cout << "Time taken by heap dynamic: "
         << duration.count() << " nanoseconds" << endl; 
    
    delete []numbers;
    
}
