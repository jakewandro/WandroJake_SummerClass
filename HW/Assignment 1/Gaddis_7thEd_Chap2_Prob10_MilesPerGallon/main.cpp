/* 
 * File:   main.cpp
 * Author: Jake T Wandro
 * Created on June 22, 2016, 7:07 PM
 * Purpose: Miles Per Gallon
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
    float gals=12;    //Gallons the car holds
    float miles=350;  //distance the car can go in miles
    float mpg;        //miles per gallon
    
    //Input Data
    
    //Process data
    mpg=miles/gals;
    
    //Output data 
    cout<<"The car gets "<<mpg<<" miles per gallon"<<endl;
    
    //Exit Stage Right!
    return 0;
}

