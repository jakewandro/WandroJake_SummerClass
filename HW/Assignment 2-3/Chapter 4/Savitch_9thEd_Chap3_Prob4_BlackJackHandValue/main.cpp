/* 
 * File:   main.cpp
 * Author: Jake Wandro
 * Created on June 30, 2016, 1:44 PM
 * Purpose:  BlackJack Hand Counter
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
    char card;
    int value=0, excess=0;
    
    //Input Data
    cout<<"Input a Card A, T, J, Q, K, 2-9"<<endl;
    cin>>card;

    //1st Card
    switch(card){
        case 'K':
        case 'Q':
        case 'J':
        case 'T':value+=10; break;
        case '9':
        case '8':
        case '7':
        case '6':
        case '5':
        case '4':
        case '3':
        case '2':value+=(card-48); break;
        case 'A':value+=11;excess=10;
    }
    cout<<"The value of the hand at this point = "<<value<<endl;
    
     //2nd Card
    cout<<"Input a Card A, T, J, Q, K, 2-9"<<endl;
    cin>>card;
    switch(card){
        case 'K':
        case 'Q':
        case 'J':
        case 'T':value+=10; break;
        case '9':
        case '8':
        case '7':
        case '6':
        case '5':
        case '4':
        case '3':
        case '2':value+=(card-48); break;
        case 'A':value+=11;excess=10;
    }
    if(value>21)value-=excess;
    cout<<"The value of the hand at this point = "<<value<<endl;
    
     cout<<"Input a Card A, T, J, Q, K, 2-9"<<endl;
    cin>>card;
    switch(card){
        case 'K':
        case 'Q':
        case 'J':
        case 'T':value+=10; break;
        case '9':
        case '8':
        case '7':
        case '6':
        case '5':
        case '4':
        case '3':
        case '2':value+=(card-48); break;
        case 'A':value+=11;excess=10;
    }
    if(value>21)value-=excess;
    cout<<"The value of the hand at this point = "<<value<<endl;
    
    //Exit Stage Right!
    return 0;
}