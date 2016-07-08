/* 
 * File:   main.cpp
 * Author: Jake T Wandro
 * Created on June 23, 2016, 1:37 PM
 * Purpose:  Paycheck Calculation
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float hrsWrkd=50; //hours worked
    float payRate=10; //$s/hr
    char ovrTime=40;  //overtime starts at 40 hours
    float payChck;    //paycheck
    
    //Input Data
    
    //Process the Data
    payChck=hrsWrkd<ovrTime?
        hrsWrkd*payRate:
        ovrTime*payRate+(hrsWrkd-ovrTime)*payRate*1.5;
    
    //Output the processed Data
    cout<<"Hours worked = "<<hrsWrkd<<" (hrs)"<<endl;
    cout<<"Pay rate = $"<<payRate<<"/hr"<<endl;
    cout<<"Overtime starts at 40 hours"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Paycheck = $"<<payChck<<endl;
    
    
    //Exit Stage Right!
    return 0;
}