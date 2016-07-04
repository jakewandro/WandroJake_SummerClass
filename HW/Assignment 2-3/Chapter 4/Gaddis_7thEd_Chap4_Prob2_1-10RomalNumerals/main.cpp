/* 
 * File:   main.cpp
 * Author: Jake T Wandro
 * Created on July 2, 2016, 9:58 AM
 * Purpose: Roman Numerals 1-10 Converter With a Switch
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
    int number; //Normal Number
    
    //Input Data
    cout<<"Enter a number from 1-10 to be converted to a roman numeral"<<endl;
    cin>>number;
    
    //Process data
    switch(number){
        case 1: cout<<"I"<<endl;break;
        case 2: cout<<"II"<<endl;break;
        case 3: cout<<"III"<<endl;break;
        case 4: cout<<"IV"<<endl;break;
        case 5: cout<<"V"<<endl;break;
        case 6: cout<<"VI"<<endl;break;
        case 7: cout<<"VII"<<endl;break;
        case 8: cout<<"VIII"<<endl;break;
        case 9: cout<<"IX"<<endl;break;
        case 10: cout<<"X"<<endl;break;
        default: cout<<"That is not between 1 and 10"<<endl;
    }
    
    //Output data 
    
    //Exit Stage Right!
    return 0;
}

