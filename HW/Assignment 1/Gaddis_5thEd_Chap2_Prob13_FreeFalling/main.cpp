/* 
 * File:   main.cpp
 * Author: Jake T Wandro
 * Created on June 21, 2016, 1:07 PM
 * Purpose: Circuit Board Selling Price
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
    float profit=0.40f; //40 percent profit
    float cost=12.67f; //Cost in $'s
    float selPrce;     //Selling price in $'s
    
    //Input Data
    
    //Process data
    selPrce=cost*profit+cost;
    int pennies=selPrce*100+0.5;//shift into pennies adda half to round up
    selPrce=pennies/100.0f;
    
    //Output data 
    cout<<"Cost of circuit board to the company = $"<<cost<<endl;
    cout<<"Profit desired on circuit board = "<<profit*100<<"%"<<endl;
    cout<<"Selling price = $"<<selPrce<<endl;
    
    //Exit Stage Right!
    return 0;
}

