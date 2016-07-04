/* 
 * File:   main.cpp
 * Author: Jake T Wandro
 * Created on July 2, 2016, 10:40 AM
 * Purpose: BMI
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
    float height;
    float weight;
    float bmi;
    
    //Input Data
    cout<<"Enter your height(inches) and weight(pounds)"<<endl;
    cin>>height>>weight;
    
    //Process data
    bmi=weight*703/(height*height);
    
    //Output data
    bmi>=18.5&&bmi<=25? cout<<"You are at optimal weight for your height"<<endl:
    bmi<18.5          ? cout<<"You are underweight"<<endl:
    bmi>25            ? cout<<"You are overweight"<<endl:
                        cout<<"Something went wrong";
    
    //Exit Stage Right!
    return 0;
}

