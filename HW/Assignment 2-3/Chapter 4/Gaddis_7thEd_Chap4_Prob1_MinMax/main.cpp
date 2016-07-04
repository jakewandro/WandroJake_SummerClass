/* 
 * File:   main.cpp
 * Author: Jake T Wandro
 * Created on July 2, 2016, 9:50 AM
 * Purpose: Minimum and Maximum
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
    float num1;
    float num2;
    
    //Input Data
    cout<<"Enter 2 numbers and I will tell you which one is smaller"<<endl;
    cin>>num1>>num2;
    
    //Process data
    num1>num2 ? cout<<num2<<" is smaller than "<<num1<<endl: 
                cout<<num1<<" is smaller than "<<num2<<endl;
     
    //Output data 
    
    //Exit Stage Right!
    return 0;
}

