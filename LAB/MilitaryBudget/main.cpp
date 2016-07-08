/* 
 * File:   main.cpp
 * Author:Jake Wandro
 * Purpose: Stating the Military Budget
 * Created on August 22, 2016, 2:45 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    float milbdgt=598500000000;  //military budget //https://www.nationalpriorities.org/campaigns/military-spending-united-states/
    float fedbdgt=3800000000000; //Federal Budget  //https://www.nationalpriorities.org/budget-basics/federal-budget-101/spending/
    float prcnt;                 //percent of budget for military
    const int SIZE=81;
    char guess [SIZE];
    
    cout<<"Guess the percent of the federal budget attributed to the military"<<endl;
    cin.getline(guess,SIZE);
    
    prcnt=milbdgt/fedbdgt*100;
    cout<<"The federal budget is $"<<fedbdgt<<endl;
    cout<<"The military budget is $"<<milbdgt<<endl;
    cout<<"The percent spent on the military budget is"<<prcnt<<"%"<<endl;
    cout<<"Your guess was = "<<guess<<"%"<<endl;
    
    return 0;
}

