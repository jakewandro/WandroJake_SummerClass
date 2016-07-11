/* 
 * File:   main.cpp
 * Author: Jake Wandro
 * Created on July 5, 2016, 1:03 PM
 * Purpose:  How To Double Your Money
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
    int pennies=1; //initial pay per day
    int payDay=0;  //pay at the end of the month
    
    //Input Data
    
    //Process the Data
    for(int day=1;day<=30;day++){
        payDay+=pennies;
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"Day "<<setw(2)<<day<<" Pay rate = $"<<setw(11)<<pennies/100;
        cout<<" Pay earned $"<<setw(11)<<payDay/100.0f<<endl;
        pennies*=2;
    }
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}