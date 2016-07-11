/* 
 * File:   main.cpp
 * Author: Jake T Wandro
 * Created on July 7, 2016, 9:37 PM
 * Purpose: Membership Fees Increase
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
    
    //Input Data
    cout<<"The membership fee is increasing at 4% a year"<<endl<<endl;
    cout<<"Year       Membership Fee Cost"<<endl;
    cout<<"------------------------------"<<endl;
    
    //Process data
    for(float times=1,year=2016,fee=2500;times<=6;times++,year++){
        cout<<year<<"       $"<<fee<<endl;
        fee+=fee*.04;
    }
    
    //Output data 
    
    //Exit Stage Right!
    return 0;
}

