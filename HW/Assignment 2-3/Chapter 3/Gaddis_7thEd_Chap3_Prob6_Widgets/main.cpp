/* 
 * File:   main.cpp
 * Author: Jake T Wandro
 * Created on June 29, 2016, 11:29 PM
 * Purpose: How Many Widgets?
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
    float pweight; //weight of just the pallet
    float wweight; //weight of pallet with the widgets on it
    int numw;    //number of widgets on the pallet
    
    //Input Data
    cout<<"How much does the pallet weigh(lbs) without any widgets on it?"<<endl;
    cin>>pweight;
    cout<<"How much does it weigh with the widgets on it?"<<endl;
    cin>>wweight;
    
    //Process data
    numw=(wweight-pweight)/9.2;
    
    //Output data 
    cout<<"Considering that each widget is 9.2 pounds, there are "<<numw<<" widgets on the pallet"<<endl;
    
    //Exit Stage Right!
    return 0;
}

