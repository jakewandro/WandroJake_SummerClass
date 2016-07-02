/* 
 * File:   main.cpp
 * Author: Jake T Wandro
 * Created on June 22, 2016, 6:55 PM
 * Purpose: Ocean Levels
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
    float yrs5;  //ocean after 5 years
    float yrs7;  //ocean after 7 years
    float yrs10; //ocean after 10 years
    
    //Input Data
    
    //Process data
    yrs5=1.5+1.5+1.5+1.5+1.5;
    yrs7=1.5+1.5+1.5+1.5+1.5+1.5+1.5;
    yrs10=1.5+1.5+1.5+1.5+1.5+1.5+1.5+1.5+1.5+1.5;
    
    //Output data 
    cout<<"After 5 years the ocean will be "<<yrs5<<" millimeters higher then it is now"<<endl;
    cout<<"After 7 years the ocean will be "<<yrs7<<" millimeters higher then it is now"<<endl;
    cout<<"After 10 years the ocean will be "<<yrs10<<" millimeters higher then it is now"<<endl;
    
    //Exit Stage Right!
    return 0;
}

