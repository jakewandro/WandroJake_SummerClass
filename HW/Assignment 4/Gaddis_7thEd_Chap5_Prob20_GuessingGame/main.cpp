/* 
 * File:   main.cpp
 * Author: Jake T Wandro
 * Created on July 8, 2016,  2:52 PM
 * Purpose:  Random Guessing Game
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <ctime>
#include <cstdlib>
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float ans, guess;
    
    //Input Data
    cout<<"Im thinking of a number between 1 and 100"<<endl;
    srand(time(0));
    ans = rand()% 99 + 1; //Random number 1-100
    cout<<"Guess what it is"<<endl;
    cin>>guess;
    
    //Process the Data
    while(guess>ans||guess<ans){
        if(guess>ans){
            cout<<"To high, try again"<<endl;
            cin>>guess;
        }
        if(guess<ans){
            cout<<"To low, try again"<<endl;
            cin>>guess;
        }
    }

    //Output the processed Data
    cout<<"Good Job! You got it right! it was "<<ans<<endl;
   
    //Exit Stage Right!
    return 0;
}