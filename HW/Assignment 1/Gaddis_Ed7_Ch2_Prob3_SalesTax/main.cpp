/* 
 * File:   main.cpp
 * Author: Jake T Wandro
 * Created on June 22, 2016, 6:27 PM
 * Purpose: Sales Tax
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
    float statet;     //state tax
    float countyt;    //county tax
    float total;      //total amount to pay
    float inprice=52; //initial price is $52
    
    //Input Data
    
    //Process data
    statet=52*.04;
    countyt=52*.02;
    total=inprice+statet+countyt;
    
    //Output data 
    cout<<"If you include tax on your $52 purchase then you must pay $"<<total<<endl;
    
    //Exit Stage Right!
    return 0;
}

