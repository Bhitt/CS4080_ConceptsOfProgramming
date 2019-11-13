/*
 * Author: Branden Hitt
 */

/* 
 * File:   main.cpp
 * Author: bhitt
 *
 * Created on November 9, 2019, 9:44 AM
 */

#include "Matrix.h"
#include <iostream>
#include <string>
#include <string.h>
#include <chrono>

#include "Rectangle.h"
#include "Square.h"

using std::cout;
using std::endl;
using std::cerr;
using namespace std::chrono;

/*
 * 
 */
int main(int argc, char** argv) {
    //************************************//
    //         Problem 1                  //
    //************************************//
    
    cout<<"Problem 1 ******************"<<endl<<endl;
    
    //Generic Matrix testing
    Matrix<int> m(3,4,false);
//    //fill the integer matrix with values
    m[0][0] = 1;
    m[0][1] = 2;
    m[0][2] = 4;
    m[0][3] = 4;
    
    m[1][0] = 5;
    m[1][1] = 5;
    m[1][2] = 4;
    m[1][3] = 2;
    
    m[2][0] = 3;
    m[2][1] = 1;
    m[2][2] = 1;
    m[2][3] = 5;
    
    cout<<"m: "<<endl;
    cout<< m << endl<<endl;
    int i=0;
    int j=0;
    
    cout<<"max element: "<< m.findMax(i,j);
    cout<<" at m["<<i<<"]["<<j<<"]"<<endl<<endl;
    
    Matrix<const char *> m2(2,5,true);
    m2[0][0] = "David";
    m2[0][1] = "Kelin";
    m2[0][2] = "Peter";
    m2[0][3] = "Zag";
    m2[0][4] = "Diana";
    
    m2[1][0] = "Elin";
    m2[1][1] = "Adam";
    m2[1][2] = "Young";
    m2[1][3] = "Peter";
    m2[1][4] = "Zag";
    
    cout<<"m2: "<<endl;
    cout<< m2 << endl<<endl;
    i=0;
    j=0;
    
    cout<<"max element: "<< m2.findMax(i,j);
    cout<<" at m2["<<i<<"]["<<j<<"]"<<endl;
    
    //************************************//
    //         Problem 2                  //
    //************************************//
    
    cout<<endl<<"Problem 2 ******************"<<endl<<endl;
    
    //Create the object
    Square square(5,5);
    cout<<"Square object 'square' created"<<endl;
    
    //start the first timer
    auto start = high_resolution_clock::now();
    
    //dynamic calls
    for(int i=0;i<1000;i++){
        square.calcArea();
    }
    
    //end the timer
    auto stop = high_resolution_clock::now();
    auto duration1 = duration_cast<nanoseconds>(stop - start);
    
    //start the second timer
    start = high_resolution_clock::now();
    
    //static calls
    for(int i=0;i<1000;i++){
        square.calcArea2();
    }
    
    //end the second timer
    //end the timer
    stop = high_resolution_clock::now();
    auto duration2 = duration_cast<nanoseconds>(stop - start);
    
    cout << "Time taken by dynamic calcArea function: "
         << duration1.count() << " nanoseconds" << endl; 
    
    cout << "Time taken by static calcArea2 function: "
         << duration2.count() << " nanoseconds" << endl; 
    
    return 0;
}

