/* 
 * File:   main.cpp
 * Author: Jake T Wandro
 * Created on June 27, 2016, 12:40 PM
 * Purpose:  Stadium Seating
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
    float clsA;  //Class A tickets
    float clsB;  //Class B tickets
    float clsC;  //Class C tickets
    float profit;//Profit 
    
    //Input Data
    cout<<"How many class A tickets were sold?"<<endl;
    cin>>clsA;
    cout<<"How many class B tickets were sold?"<<endl;
    cin>>clsB;
    cout<<"How many class C tickets were sold?"<<endl;
    cin>>clsC;
    
    //Process the Data
    profit=(clsA*15)+(clsB*12)+(clsC*9);
    
    //Output the processed Data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"You made $"<<profit<<endl;
    
    //Exit Stage Right!
    return 0;
}