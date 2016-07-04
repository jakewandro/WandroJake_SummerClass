/* 
 * File:   main.cpp
 * Author: Jake T Wandro
 * Created on June 27, 2016, 1:22 PM
 * Purpose: Equal Monthly Payments
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <cmath>
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float loanAmt, intRate, nPymnts; //Inputs to the problem
    float mPymnt, totPaid, intPaid;  //outputs
    
    //Input Data
    cout<<"Loan Calculator for Equal Monthly Payments"<<endl;
    cout<<"Input all 3 at once"<<endl;
    cout<<"Loan Amt $'s, Interest Rate %, Number of Monthly Payments"<<endl;
    cin>>loanAmt>>intRate>>nPymnts;
    
    //Process the Data
    
    float temp=exp(nPymnts*log(1+intRate));
    mPymnt=intRate*temp*loanAmt/(temp-1);
    totPaid=nPymnts*mPymnt;
    intPaid=totPaid-loanAmt;
    
    //Output the processed Data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Monthly Payment = $"<<setw(10)<<mPymnt<<endl;
    cout<<"Total Paid      = $"<<setw(10)<<totPaid<<endl;
    cout<<"Interest Paid   = $"<<setw(10)<<intPaid<<endl;
    
    //Exit Stage Right!
    return 0;
}