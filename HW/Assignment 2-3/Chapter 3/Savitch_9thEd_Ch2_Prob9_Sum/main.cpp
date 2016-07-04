/* 
 * File:   main.cpp
 * Author: Jake T Wandro
 * Created on June 27, 2016, 12:51 PM
 * Purpose:  Sum of odd, even, positive, negative
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int x;
    int sumAll=0, sumEven=0, sumOdd=0, sumPos=0, sumNeg=0;
    
    //Input Data
    cout<<"Input an integer"<<endl;
    cin>>x;
    
    //Process the Data
    sumAll+=x;
    if(x%2==0) sumEven+=x; //If Else statement
    else       sumOdd+=x;  //Ternary operator
    sumPos  += x>0?x:0;
    if(x<0)    sumNeg+=x;  //If statement
    
     cout<<"Input an integer"<<endl;
    cin>>x;
    
    //Process the Data
    sumAll+=x;
    if(x%2==0) sumEven+=x; //If Else statement
    else       sumOdd+=x;  //Ternary operator
    sumPos  += x>0?x:0;
    if(x<0)    sumNeg+=x;  //If statement
    
     cout<<"Input an integer"<<endl;
    cin>>x;
    
    //Process the Data
    sumAll+=x;
    if(x%2==0) sumEven+=x; //If Else statement
    else       sumOdd+=x;  //Ternary operator
    sumPos  += x>0?x:0;
    if(x<0)    sumNeg+=x;  //If statement
    
     cout<<"Input an integer"<<endl;
    cin>>x;
    
    //Process the Data
    sumAll+=x;
    if(x%2==0) sumEven+=x; //If Else statement
    else       sumOdd+=x;  //Ternary operator
    sumPos  += x>0?x:0;
    if(x<0)    sumNeg+=x;  //If statement
    
     cout<<"Input an integer"<<endl;
    cin>>x;
    
    //Process the Data
    sumAll+=x;
    if(x%2==0) sumEven+=x; //If Else statement
    else       sumOdd+=x;  //Ternary operator
    sumPos  += x>0?x:0;
    if(x<0)    sumNeg+=x;  //If statement
    
     cout<<"Input an integer"<<endl;
    cin>>x;
    
    //Process the Data
    sumAll+=x;
    if(x%2==0) sumEven+=x; //If Else statement
    else       sumOdd+=x;  //Ternary operator
    sumPos  += x>0?x:0;
    if(x<0)    sumNeg+=x;  //If statement
    
     cout<<"Input an integer"<<endl;
    cin>>x;
    
    //Process the Data
    sumAll+=x;
    if(x%2==0) sumEven+=x; //If Else statement
    else       sumOdd+=x;  //Ternary operator
    sumPos  += x>0?x:0;
    if(x<0)    sumNeg+=x;  //If statement
    
     cout<<"Input an integer"<<endl;
    cin>>x;
    
    //Process the Data
    sumAll+=x;
    if(x%2==0) sumEven+=x; //If Else statement
    else       sumOdd+=x;  //Ternary operator
    sumPos  += x>0?x:0;
    if(x<0)    sumNeg+=x;  //If statement
    
     cout<<"Input an integer"<<endl;
    cin>>x;
    
    //Process the Data
    sumAll+=x;
    if(x%2==0) sumEven+=x; //If Else statement
    else       sumOdd+=x;  //Ternary operator
    sumPos  += x>0?x:0;
    if(x<0)    sumNeg+=x;  //If statement
    
     cout<<"Input an integer"<<endl;
    cin>>x;
    
    //Process the Data
    sumAll+=x;
    if(x%2==0) sumEven+=x; //If Else statement
    else       sumOdd+=x;  //Ternary operator
    sumPos  += x>0?x:0;
    if(x<0)    sumNeg+=x;  //If statement
    
    //Output the processed Data
    cout<<"Sum All      = "<<setw(5)<<sumAll<<endl;
    cout<<"Sum Even     = "<<setw(5)<<sumEven<<endl;
    cout<<"Sum Odd      = "<<setw(5)<<sumOdd<<endl;
    cout<<"Sum Positive = "<<setw(5)<<sumPos<<endl;
    cout<<"Sum Negative = "<<setw(5)<<sumNeg<<endl;
    
    //Exit Stage Right!
    return 0;
}