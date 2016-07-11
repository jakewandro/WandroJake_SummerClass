/* 
 * File:   main.cpp
 * Author: Jake T Wandro
 * Created on July 7, 2016, 8:54 PM
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
    
    //Input Data
    cout<<"Amount The Ocean Level is Rising(millimeters)"<<endl<<endl<<endl;
    cout<<"Year       Amount it has Risen"<<endl;
    cout<<"------------------------------"<<endl;
    
    //Process data
    for(float times=0,year=2016,level=1.5;times<=25;times++,year++){
        cout<<year<<"       "<<level<<endl;
        level+=1.5;
    }
    
    //Output data 
    
    //Exit Stage Right!
    return 0;
}

