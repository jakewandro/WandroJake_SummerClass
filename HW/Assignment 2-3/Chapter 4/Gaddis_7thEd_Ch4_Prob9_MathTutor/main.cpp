/* 
 * File:   main.cpp
 * Author: Jake T Wandro
 * Created on July 4, 2016, 11:19 AM
 * Purpose:  Math Tutor
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
    srand(time(0));
    int num1 = rand()% 999 + 1; //first random number
    int num2 = rand()% 999 + 1; //second random number
    int ans = num1+num2;      //sum of the numbers
    float guess;              //the student's guess
    
    //Input Data
    
    //Process the Data
    
    //Output the processed Data
    cout<<"Enter the answer to this addititon problem"<<endl;
    cout<<"  "<<num1<<endl;
    cout<<"+ "<<num2<<endl;
    cout<<"------"<<endl;
    cin>>guess;
    guess==ans? cout<<"Good job!"<<endl: cout<<"Wrong answer, the correct answer is "<<ans<<endl;
   
    //Exit Stage Right!
    return 0;
}