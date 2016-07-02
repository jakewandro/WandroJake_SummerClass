/* 
 * File:   main.cpp
 * Author: Jake T Wandro
 * Created on June 22, 2016, 6:21 PM
 * Purpose: Sales Prediction
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
    float total; //amount of money the company made
    
    //Input Data
    
    //Process data
    total=4600000*.62; //62% of the total sales
    
    //Output data 
    cout<<"The company's total sales were $4.6 million and they make 62% of total sales"<<endl;
    cout<<"The company made $"<<total<<endl;
    
    //Exit Stage Right!
    return 0;
}

