/* 
 * File:   main.cpp
 * Author: Jake T Wandro
 * Created on June 20, 2016, 12:27 PM
 * Purpose: Program Utilizing a Variable
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
    char cnum; //character number
    int inum; //integer number
    
    //Input Data
    cout<<"Type in 2 -> 1 digit numbers -> D D"<<endl;
    cin>>cnum>>inum;
    //Process data
    
    //Output data
    cout<<"The character number = "<<cnum; 
    cout<<" which has a value of "<<static_cast<int>(cnum)<<endl;
    cout<<"The integer number = "<<inum;
    cout<<" which has a value of "<<static_cast<int>(inum)<<endl;
    
    //Exit Stage Right!
    return 0;
}

