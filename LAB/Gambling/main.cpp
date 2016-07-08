/* 
 * File:   main.cpp
 * Author:Jake Wandro
 * Purpose: Add two random dice
 * Created on August 22, 2016, 1:20 PM
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char** argv) {
    unsigned char die1,die2,sum;
    srand(static_cast<unsigned int>(time(0)));
    
    die1=rand()%6+1; //Random number 1-6
    die2=rand()%6+1; //Random number 1-6
    sum=die1+die2;   //Random number 2-12
            
    cout<<"Die 1 ="<<static_cast<int>(die1)<<endl;
    cout<<"Die 2 ="<<static_cast<int>(die2)<<endl;
    cout<<"Sum ="<<static_cast<int>(sum)<<endl;
    return 0;
}

