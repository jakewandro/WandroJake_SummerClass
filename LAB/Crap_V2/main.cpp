/* 
 * File:   main.cpp
 * Author: Jake Wandro
 * Created on July 7, 2016, 12:55 PM
 * Purpose:  Crap Version 1
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    int nGames=0, nWins=0, nLose=0;
    
    //Input Data
    cout<<"The Game Of Craps"<<endl;
    cout<<"How many games to play"<<endl;
    cin>>nGames;
    
    //Process the Data
    for(int game=1;game<=nGames;game++){
        //Throw a pair of dice
        char die1=rand()%6+1;
        char die2=rand()%6+1;
        char sum=die1+die2;
        //Determine win or loss
        switch(sum){
            case 7:
            case 11:nWins++;break;
            case 2:
            case 3:
            case 12:nLose++;break;
            default:{
            //When to roll again
                bool rollAgn=true;
                while(rollAgn){
                    //Throw another set of dice
                    die1=rand()%6+1;
                    die2=rand()%6+1;
                    char sumAgn=die1+die2;
                    if(sum==sumAgn){
                        nWins++;
                        rollAgn=false;
                    }else if(sumAgn==7){
                        nLose++;
                        rollAgn=false;
                    }else rollAgn=true;
                }
            }
        }
    }
    //Output the processed Data
    cout<<"Number of Games = "<<nGames<<endl;
    cout<<"Number of Wins  = "<<nWins<<endl;
    cout<<"Number of Losses= "<<nLose<<endl;
    if(nWins>=nLose)
        cout<<"You are doing better then statistics says is possible!!!"<<endl;
    
    
    //Exit Stage Right!
    return 0;
}