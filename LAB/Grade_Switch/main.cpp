/* 
 * File:   main.cpp
 * Author: Jake T Wandro
 * Created on June 28, 2016, 12:56 PM
 * Purpose:  Grade with if else
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
    unsigned int score;
    char grade;
    
    //Input Data
    cout<<"Input the score [0, 100] output will be the grade"<<endl;
    cin>>score;
    
    //Process the Data
    switch(score/10){
        case 10:
        case  9:grade='A';break;  
        case  8:grade='B';break;
        case  7:grade='C';break;
        case  6:grade='D';break;
        default: grade='F';
    }
    //Output the processed Data
    cout<<score<<" equates to "<<grade<<endl;
    
    //Exit Stage Right!
    return 0;
}