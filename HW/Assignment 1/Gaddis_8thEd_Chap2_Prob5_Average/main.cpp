/* 
 * File:   main.cpp
 * Author: Jake T Wandro
 * Created on June 21, 2016, 1:34 PM
 * Purpose: Average
 */

//System Libraries
#include <iostream> //Input/Output Stream Library
using namespace std; //iostream uses the strand namespace

//user libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables Here, no doubles
    int x1=28, x2=32, x3=37, x4=24, x5=33; //Values to average
    float avg;
    
    
    //Input Data
    
    //Process data
    avg=(x1+x2+x3+x4+x5)/5;
            
    //Output data
            cout<<"The average = "<<avg<<endl;
    
    //Exit Stage Right!
    return 0;
}

