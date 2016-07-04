/* 
 * File:   main.cpp
 * Author: Jake T Wandro
 * Created on July 2, 2016, 10:27 AM
 * Purpose: Rectangle With Greater Area
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
    float len1;
    float len2;
    float wid1;
    float wid2;
    float area1;
    float area2;
    
    //Input Data
    cout<<"What is the length and width of the first rectangle?"<<endl;
    cin>>len1>>wid1;
    cout<<"What is the length and width of the second rectangle?"<<endl;
    cin>>len2>>wid2;
    
    //Process data
    area1=len1*wid1;
    area2=len2*wid2;
    
    //Output the data
    cout<<"The first rectangle has an area of "<<area1<<endl;
    cout<<"The second rectangle has an area of "<<area2<<endl;
    (area1>area2)? cout<<"The first rectangle has a larger area"<<endl:
    (area2>area1)? cout<<"The second rectangle has a larger area"<<endl:
    (area1==area2)? cout<<"The rectangles have the same area"<<endl:
    cout<<"Something went wrong"; 
    
    //Exit Stage Right!
    return 0;
}

