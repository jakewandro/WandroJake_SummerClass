/* 
 * File:   main.cpp
 * Author: Jake T Wandro
 * Created on June 29, 2016, 11:34 PM
 * Purpose: How much insurance? 
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
    float rcost;  //replacement cost of the building
    float insure; //minimum amount of insurance they should get
    
    //Input Data
    cout<<"How much would it cost to replace your building?"<<endl;
    cin>>rcost;
    
    //Process data
    insure=rcost*.80f;
    
    //Output data 
    cout<<"It is good to be insured for at least 80% so you should have at least $"<<insure<<" of insurance"<<endl;
    
    //Exit Stage Right!
    return 0;
}

