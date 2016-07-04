/* 
 * File:   main.cpp
 * Author: Jake T Wandro
 * Created on July 2, 2016, 10:09 AM
 * Purpose: Magic Dates
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
    int month;
    int day;
    int year;
    
    //Input Data
    cout<<"Enter a date in number form"<<endl;
    cout<<"Ex. for June 10, 1960 enter 6 10 60"<<endl;
    cin>>month>>day>>year;
    
    //Process data
    if(1<=month&&month<=12&&1<=day&&day<=31&&0<=year&&year<=99)
        year==month*day? cout<<"This date is Magic":
                         cout<<"This date is not magic";
    else cout<<"Not a proper date"<<endl;
    
    //Output data 
    
    //Exit Stage Right!
    return 0;
}

