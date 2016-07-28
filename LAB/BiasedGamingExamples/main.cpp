/* 
 * File:   main.cpp
 * Author: Jake Wandro
 * Created on July 19, 2016, 12:10 PM
 * Purpose:  Biased Game Examples
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const int MAXRND=(1<<31)-1;

//Function Prototypes
char coin();
char badCoin();
char dice();
char badDice();
void statC(int [],int []);
void statD(int [],int []);
void display(int [], int [],int,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int nToss=100000;
    const int CSIZE=2;
    const int DSIZE=6;
    char coinNm[CSIZE]={'H','T'},diceNm[DSIZE]={'1','2','3','4','5','6'};
    int frqCn[CSIZE]=(),frqBCn[CSIZE]=(),frqDie[DSIZE]=(),frqBDie[DSIZE]=();
    
    //Input Data
    
    //Process the Data
    for(int toss=1;toss<=nToss;toss++){
        statC(frqCn,frqBCn);
        statD(frqDie,frqBDie);
    }
    
    //Output the processed Data
    cout<<
    display(coinNm,frqCn,nToss,CSIZE);
    display(coinNm,frqBCn,nToss,CSIZE);
    display(diceNm,frqDie,nToss,DSIZE);
    display(diceNm,frqBDie,nToss,DSIZE);
    
    //Exit Stage Right!
    return 0;
}

void display(int type[], int freq[],int n,int size){
    cout<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    for(int i=0;i<size;i++){
        cout<<type[i]<<" "<<100.0f*freq[i]/n<<endl;
    }
    cout<<endl;
}

void statD(int frqFair[],int frqBias[]){
    //Throw a good and bad result
    char good=dice();
    char bad=badDice();
    //Add to the frequency
    switch(good){
        case '1':frqFair[0]++;break;
        case '2':frqFair[1]++;break;
        case '3':frqFair[2]++;break;
        case '4':frqFair[3]++;break;
        case '5':frqFair[4]++;break;
        default :frqFair[5]++;break;
    }
    switch(bad){
        case '1':frqBias[0]++;break;
        case '2':frqBias[1]++;break;
        case '3':frqBias[2]++;break;
        case '4':frqBias[3]++;break;
        case '5':frqBias[4]++;break;
        default :frqBias[5]++;break;
    }
}

void statC(int frqFair[],int frqBias[]){
    //Throw a good and bad result
    char good=coin();
    char bad=badCoin();
    //Add to the frequency
    if(good=='H')frqFair[0]++;
    else frqFair[1]++;
    if(bad=='H')frqBias[0]++;
    else frqBias[1]++;
}

char coin(){
    float x=static_cast<float>(rand())/MAXRND;
    //Return fair result
    if(x<=0.5f)return 'H';
    else return 'T';
}

char badCoin(){
    float x=static_cast<float>(rand())/MAXRND;
    //Return unfair result
    if(x<=0.25f)return 'H';
    else return 'T';
}

char dice(){
    float x=static_cast<float>(rand())/MAXRND;
    //Return fair result
    if(x<=1/6.0f)return '1';
    else if(x<=2/6.0f)return '2';
    else if(x<=3/6.0f)return '3';
    else if(x<=4/6.0f)return '4';
    else if(x<=5/6.0f)return '5';
    else return '6';
}

char badDice(){
    float x=static_cast<float>(rand())/MAXRND;
    //Return unfair result
    if(x<=0.14f)return '1';
    else if(x<=0.28f)return '2';
    else if(x<=0.42f)return '3';
    else if(x<=0.56f)return '4';
    else if(x<=0.7f)return '5';
    else return '6';
}