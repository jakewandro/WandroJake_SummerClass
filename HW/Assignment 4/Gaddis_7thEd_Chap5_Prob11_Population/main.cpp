/* 
 * File:   main.cpp
 * Author: Jake T Wandro
 * Created on July 8, 2016, 2:21 PM
 * Purpose: Population
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
    float size, incr, days, percnt;
    
    //Input Data
    cout<<"Enter the starting number of organisms, their daily population increase(as a percent),"<<endl;
    cout<<"and the number of days they will multiply"<<endl;
    cin>>size>>incr>>days;
    percnt=incr/100.0f;
    if(size>=2&&incr>=1&&days>=1){
        cout<<"Day       Size of Population"<<endl;
        cout<<"-----------------------------"<<endl;

        //Process data
        for(float times=1;times<=days;times++){
            if(times>1)   size+=size*percnt;
            if(times<9)   cout<<times<<"           "<<size<<endl;
            if(times>=10) cout<<times<<"          "<<size<<endl;
        }
    }else cout<<"Invalid Input"<<endl;
    //Output data 
    
    //Exit Stage Right!
    return 0;
}

