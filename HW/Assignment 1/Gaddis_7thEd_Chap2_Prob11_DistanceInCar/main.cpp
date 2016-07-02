/* 
 * File:   main.cpp
 * Author: Jake T Wandro
 * Created on June 22, 2016, 7:17 PM
 * Purpose: Distance Per Tank OF Gas
 */

//System Libraries
#include <iostream> //Input/Output Stream Library
#include <iomanip>
using namespace std; //iostream uses the strand namespace

//user libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables Here, no doubles
    float gals=20;    //Gallons of gas
    float mpgt=21.5;  //Miles per gallon in a town
    float mpgh=26.8;  //Miles per gallon in highway
    float dist;       //Distance they can travel in a town
    float dish;       //Distance they can travel on a highway
     
    //Input Data
    
    //Process data
    dist=gals*mpgt;
    dish=gals*mpgh;
    
    //Output data 
    cout<<"In a town they can travel "<<dist<<" miles before running out of gas"<<endl;
    cout<<"On a highway they can travel "<<dish<<" miles before running out of gas"<<endl;
    
    //Exit Stage Right!
    return 0;
}

