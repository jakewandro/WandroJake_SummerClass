/* 
 * File:   main.cpp
 * Author: Jake T Wandro
 * Created on June 27, 2016, 12:33 PM
 * Purpose:  Miles Per Gallon
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float gals; //Gallons
    float dist; //Distance the car can travel on a full tank of gas
    float mpg;  //Miles per gallon
    
    //Input Data
    cout<<"How many gallons of gas can your car hold?"<<endl;
    cin>>gals;
    cout<<"How many miles can your car go on a full tank of gas?"<<endl;
    cin>>dist;
    
    //Process the Data
    mpg=dist/gals;
    
    //Output the processed Data
    cout<<"Your car gets "<<mpg<<" miles per gallon"<<endl;
    
    //Exit Stage Right!
    return 0;
}