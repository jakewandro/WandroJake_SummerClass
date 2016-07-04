/* 
 * File:   main.cpp
 * Author: Jake T Wandro
 * Created on June 29, 2016, 10:33 PM
 * Purpose: Box Office Profit
 */

//System Libraries
#include <iostream> //Input/Output Stream Library
#include <iomanip>
#include <string>
using namespace std; //iostream uses the strand namespace

//user libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables Here, no doubles
    float grossp; //gross profit
    float netp;   //net profit
    string mname;  //movie name
    float atick;  //adult tickets
    float ctick;  //child tickets
    float paid;   //amount paid to the distibutor
    
    //Input Data
    cout<<"What is the name of the movie?"<<endl;
    getline (cin,mname);
    cout<<"How many adult tickets were sold?"<<endl;
    cin>>atick;
    cout<<"How many child tickets were sold?"<<endl;
    cin>>ctick;
    
    //Process data
    grossp=(atick*6)+(ctick*3);
    netp=grossp*.20f;
    paid=grossp-netp;
    
    //Output data
    cout<<"Movie Name:                  "<<setw(7)<<mname<<endl;
    cout<<"Adult Tickets Sold:          "<<setw(7)<<atick<<endl;
    cout<<"Child Tickets Sold:          "<<setw(7)<<ctick<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Gross Box Office Profit:    $"<<setw(7)<<grossp<<endl;
    cout<<"Net Box Office Profit:      $"<<setw(7)<<netp<<endl;
    cout<<"Amount Paid to Distributor  $"<<setw(7)<<paid<<endl;
    
    //Exit Stage Right!
    return 0;
}

