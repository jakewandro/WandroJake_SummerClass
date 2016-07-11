/* 
 * File:   main.cpp
 * Author: Jake T Wandro
 * Created on July 8, 2016, 1:59 PM
 * Purpose: Distance Traveled
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
    float spd,stop;
    
    //Input Data
    cout<<"What is the speed of the vehicle in mph?"<<endl;
    cin>>spd;
    cout<<"How many hours has it traveled?"<<endl;
    cin>>stop;  //when to stop the loop
    if(spd>=1&&stop>=1){
        cout<<"Hour     Distance Traveled"<<endl;
        cout<<"---------------------------"<<endl;

        //Process data
        for(float hour=1,dist;hour<=stop;hour++){
            dist=spd*hour;
            cout<<hour<<"         "<<dist<<endl;
        }
    }else cout<<"Error"<<endl;
    
    //Output data 
    
    //Exit Stage Right!
    return 0;
}

