/* 
 * File:   main.cpp
 * Author: Jake T Wandro
 * Created on June 23, 2016, 1:09 PM
 * Purpose:  Death In A Can
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float msMass=35;    //Mass of the mouse
    float msKill=5;     //5 grams of sweetener will kill a mouse
    float hmMass=45400; //Grams for about 100 pound human
    float msSoda=350;   //350 grams is the mass of a soda can
    float consin=1e-3;  //1 tenth of 1% concentration in soda
    int nCans;          //Number of cans to kill
    
    //Input Data
    
    //Process the Data
    nCans=hmMass*msKill/(msMass*msSoda*consin);
    
    //Output the processed Data
    cout<<"The number of cans that a dieter with mass = ";
    cout<<hmMass<<"(grams) may consume is = "<<nCans<<" cans"<<endl;
    
    //Exit Stage Right!
    return 0;
}