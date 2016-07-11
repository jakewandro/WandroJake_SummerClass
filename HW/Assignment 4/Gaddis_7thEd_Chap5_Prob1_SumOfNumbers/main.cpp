/* 
 * File:   main.cpp
 * Author: Jake T Wandro
 * Created on July 7, 2016, 8:36 PM
 * Purpose: Sum Of Numbers
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
    float num;
    float total;
    
    //Input Data
    cout<<"Sum Of Numbers"<<endl;
    cout<<"Enter a positive integer"<<endl;
    cin>>num;
    
    //Process data
    if(num>=1){    //Make sure its positive
        for(float times=0;times<=num;times++){
            total+=times;
        }
        //Output Data
        cout<<"The sum of all numbers from 1 - "<<num<<" is equal to "<<total<<endl;
    }else cout<<"Invalid number"<<endl;
    
    //Exit Stage Right!
    return 0;
}

