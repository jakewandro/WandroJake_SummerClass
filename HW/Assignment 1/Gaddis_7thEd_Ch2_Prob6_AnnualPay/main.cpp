/* 
 * File:   main.cpp
 * Author: Jake T Wandro
 * Created on June 22, 2016, 6:50 PM
 * Purpose: Annual Pay
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
    float payAmount=1700; //Amount payed
    float payPeriods=26;  //Times payed in a year
    float annualPay;      //Annual pay
    
    //Input Data
    
    //Process data
    annualPay=payAmount*payPeriods;
    
    //Output data 
    cout<<"The annual pay is $"<<annualPay<<endl;
    
    //Exit Stage Right!
    return 0;
}

