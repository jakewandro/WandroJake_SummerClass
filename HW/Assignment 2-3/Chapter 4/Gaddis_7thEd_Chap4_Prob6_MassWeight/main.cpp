/* 
 * File:   main.cpp
 * Author: Jake T Wandro
 * Created on July 4, 2016, 11:05 AM
 * Purpose: Mass and Weight
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
    float mass;   //in kilograms
    float weight; //in newtons
    
    //Input Data
    cout<<"What is the object's mass in kilograms?"<<endl;
    cin>>mass;
    
    //Process data
    weight=mass*9.8;
    
    //Output data 
    if(weight<=1000&&weight>=10)
        cout<<"The object weighs "<<weight<<" newtons"<<endl;
    else weight<10? cout<<"The object is to light"<<endl:
                    cout<<"The object is to heavy"<<endl;
    
    //Exit Stage Right!
    return 0;
}

