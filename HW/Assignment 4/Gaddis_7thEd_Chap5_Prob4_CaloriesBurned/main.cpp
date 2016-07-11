/* 
 * File:   main.cpp
 * Author: Jake T Wandro
 * Created on July 7, 2016, 9:17 PM
 * Purpose: Calories Burned
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
    
    //Input Data
    cout<<"This displays calories burned while running on a treadmill"<<endl<<endl;
    cout<<"Minutes     Calories"<<endl;
    cout<<"Running     Burned"<<endl;
    cout<<"------------------"<<endl;
    
    //Process data
    for(float mins=5,burned=3.9*5;mins<=30;mins+=5,burned+=3.9*5){
        if(mins==5){
              cout<<mins<<"           "<<burned<<endl; //to keep things lined up since 5 is one less character
        }else cout<<mins<<"          "<<burned<<endl;
    }
    
    //Output data 
    
    //Exit Stage Right!
    return 0;
}

