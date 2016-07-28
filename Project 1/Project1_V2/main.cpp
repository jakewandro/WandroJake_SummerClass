/* 
 * File:   main.cpp
 * Author: Jake Wandro
 * Created on July 16, 2016, 3:07 PM
 * Purpose:  Project 1 Version 2
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    float times=0, win=0, loss=0;
    char name[51];
    cout<<"Enter your name"<<endl;
    cin.getline(name,51);         //Can get first and last name
    for(bool again=true;again==true;times++){
        //Declare Variables                            //Need to reset these in the loop
        int hp=150, potion=0, scroll=0, dmg=10, bandit=100, dragon=300;
        int pclass, random, flee, bdmg, ddmg, choice, play;
        bool left=false, jerk=false;
        char tip, reason, help;
    
        //Input Data
        cout<<"Hello "<<name<<", choose a class"<<endl;
        cout<<"1) Barbarian (adds 4 to attack and start with 1 Fire Scroll)"<<endl;
        cout<<"2) Knight (adds 50 health and start with 1 Potion)"<<endl;
        cout<<"3) Alchemist (start with 3 potions and a Fire Scroll)"<<endl;
        cout<<"4) Mage (starts with 3 fire scrolls and a Potion)"<<endl;
        cin>>pclass;
        switch(pclass){  //Gives what they get for their class
            case 1:{
                cout<<"Your Damage has increased by 4!"<<endl;
                cout<<"You have obtained a Fire Scroll!"<<endl;
                dmg+=4;
                scroll++;break;
            }
            case 2:{
                cout<<"Your health has increased by 50!"<<endl;
                cout<<"You have obtained a potion!"<<endl;
                hp+=50;
                potion++;break;
            }
            case 3:{
                cout<<"You have obtained 3 Potions!"<<endl;
                cout<<"You have obtained a Fire Scroll!"<<endl;
                potion+=3;
                scroll++;break;
            }
            case 4:{
                cout<<"You have obtained 3 Fire Scrolls!"<<endl;
                cout<<"You have obtained a Potion!"<<endl;
                scroll+=3;
                potion++;break;
            }
            default:cout<<"No class chosen....good luck"<<endl;
        }
        cout<<"Would you like to go off to training camp to receive a useful tip?"<<endl;
        cout<<"1) yes"<<endl;
        cout<<"2) no"<<endl;
        cin>>tip;
        tip=='1' ? cout<<"Tip: Don't die"<<endl:
        //Process the Data
        cout<<"Your journey begins, you have been sent out by the king to slay the"<<endl; //Background Story
        cout<<"Mighty Dragon that has been spotted by scouts north of the kingdom."<<endl;
        cout<<"You're quest is of the highest priority and also secrecy,"<<endl;
        cout<<"If the peasants find out there is a dragon they will be frightened and"<<endl;
        cout<<"Productivity would decrease."<<endl;
        cout<<"When you reach the gate to leave the kingdom the guard asks why you are leaving"<<endl; //Leaving the Kingdom
        cout<<"1) Tell him you have been sent by the king to fight a dragon"<<endl;
        cout<<"2) (lie) Tell him you are just a hunter looking for food"<<endl;
        cin>>reason;
        if(reason=='1'){ 
            cout<<"Guard: \"Good luck on your quest "<<name<<", here is a potion and Fire Scroll to help\""<<endl;
            cout<<"You have obtained a Potion!"<<endl;
            cout<<"You have obtained a Fire Scroll!"<<endl;
            potion++;
            scroll++;
        }else cout<<"Guard: \"Good luck with your hunting "<<name<<" I'll let you go\""<<endl;
        cout<<"As you travel along the path you see some travelers attacked by a bandit"<<endl;
        cout<<"1) Continue as if nothing happened"<<endl;
        cout<<"2) Assist the travelers by engaging the bandits"<<endl;
        cin>>help;
        if(help=='1'){
            cout<<"As you walk by pretending that there isn't a bandit killing"<<endl;
            cout<<"A traveler karma hits you as hard as this arrow to the knee"<<endl;
            cout<<"You took 25 damage"<<endl;
            hp-=25;
            cout<<"You look over and see that the traveler is dead and the bandit is rushing towards you"<<endl;
            jerk=true;
        }
        srand(time(0)); //Seed needed for critical hit and enemy damage
        while(hp>=1&&bandit>=1){
            cout<<fixed;
            cout<<name<<": "<<setprecision(0)<<hp<<"        Bandit: "<<setprecision(0)<<bandit<<showpoint<<endl; //Display health
            cout<<"1) Attack"<<endl;                   //User's options
            cout<<"2) Attempt to flee"<<endl;
            if(potion>=1) cout<<"3) Use a potion ("<<potion<<" left)"<<endl;
            if(potion==0) cout<<"3)-No Potions-"<<endl;
            if(scroll>=1) cout<<"4) Use a Fire Scroll ("<<scroll<<" left)"<<endl;
            if(scroll==0) cout<<"4)-No Scrolls-"<<endl;
            cin>>choice;
            bdmg=rand()% 9 + 1;   //Damage the Bandit does
            random=rand()% 5 + 1; //Chance of a critical hit
            flee=rand()% 9 + 1;   //Chance of flee working
            switch(choice){
                case 1:{   //Attack
                    if(random==1){
                        cout<<"Critical hit! You strike and deal "<<dmg*1.5<<" damage!"<<endl;
                        bandit-=dmg*1.5;break;
                    }else cout<<"You strike and deal "<<dmg<<" damage!"<<endl;
                    bandit-=dmg;break;
                }
                case 2:{  //Flee
                    if(flee==1){
                        cout<<"Flee Successful! "<<endl;
                        bandit=0;
                        left=true;break;
                    }else cout<<"Flee unsuccessful"<<endl;break;
                }
                case 3:{  //Potion
                    if(potion>=1){
                    cout<<"You used a potion!"<<endl;
                    hp+=30;
                    cout<<"You gained 30 health!"<<endl;
                    potion--;
                    cout<<"You now have "<<potion<<" potions"<<endl;break;
                    }else{
                        cout<<"You are out of potions so who knows what you just drank....."<<endl;
                        cout<<"You lost 30 health"<<endl;
                        hp-=30;break;
                    }
                }
                case 4:{   //Fire Scroll
                     if(scroll>=1){
                    cout<<"As you read the sacred words from the scroll you feel an"<<endl;
                    cout<<"Unknown power surge through your body as fire shoots from your"<<endl;
                    cout<<"Fingertips scorching the bandit dealing 30 damage!"<<endl;
                    bandit-=30;
                    scroll--;
                    cout<<"Unfortunately as you preformed the spell the scroll also bursted into flame"<<endl;
                    cout<<"You now have "<<scroll<<" scrolls"<<endl;break;
                    }else{
                        cout<<"You have no Scrolls but dug through your bag for one anyways"<<endl;
                        cout<<"The bandit stabs you in the back dealing 30 damage!"<<endl;
                        hp-=30;break;
                    }
                }
                default:cout<<"You stand there vulnerable to attack"<<endl;break;
            }
            if(bandit>=1){  //If the bandit is still alive he attacks
                cout<<"The bandit attacks you and does "<<bdmg<<" damage!"<<endl;
                hp-=bdmg;
            }
        }  //Continue while they are both alive
        if(hp<=0){
            cout<<"You have died"<<endl; //If you die you lose
            loss++;
        }
        else{
                if(left==false&&jerk==false){ //Reward if you wanted to help
                    cout<<"The bandit has been defeated!"<<endl;
                    cout<<"Traveler: \"Thank you so much for helping us!"<<endl;
                    cout<<"Here take these\""<<endl;
                    cout<<"You have obtained 3 Potion!"<<endl;
                    potion+=3;
                    cout<<"You have obtained 2 Fire Scroll!"<<endl;
                    scroll+=2;
                }
                if(jerk==true){ //Smaller reward when you didn't want to help (no reward for fleeing)
                    cout<<"The Traveler is dead and everything he has is destroyed,"<<endl;
                    cout<<"You managed to find a Potion and Fire scroll in the dead traveler's pocket"<<endl;
                    cout<<"You have obtained a Potion!"<<endl;
                    potion++;
                    cout<<"You have obtained a Fire Scroll!"<<endl;
                    scroll++;
                }
            cout<<"You lay down in the nice meadow after a hard fought fight then the screech "<<endl;
            cout<<"Of a Dragon awakes you as you jump up prepared for the fight of your life."<<endl;
            cout<<"The lives of the king and everyone in the kingdom is in your hands"<<endl;
            cout<<"What will you do.."<<endl;
            do{   //Dragon Fight
                cout<<name<<": "<<hp<<"        Dragon: "<<dragon<<endl; //Display health
                cout<<"1) Attack"<<endl;  //User's Options
                cout<<"2) Attempt to flee"<<endl;
                if(potion>=1) cout<<"3) Use a potion ("<<potion<<" left)"<<endl;
                if(potion==0) cout<<"3)-No Potions-"<<endl;
                if(scroll>=1) cout<<"4) Use a Fire Scroll ("<<scroll<<" left)"<<endl;
                if(scroll==0) cout<<"4)-No Scrolls-"<<endl;
                cin>>choice;
                do{
                ddmg=rand()% 19 + 1;  //Dragons damage
                }while(ddmg<5);       //Dragons minimum damage is 5
                random=rand()% 5 + 1; //Chance of a critical hit
                switch(choice){
                    case 1:{
                        if(random==1){  //Attack
                            cout<<"Critical hit! You strike and deal "<<dmg*1.5<<" damage!"<<endl;
                            dragon-=dmg*1.5;break;
                        }else cout<<"You strike and deal "<<dmg<<" damage!"<<endl;
                        dragon-=dmg;break;
                    }
                    case 2:{    //Cant flee
                        cout<<"You run for your life and the dragon flies after you and grabs"<<endl;
                        cout<<"You and flies up into the air then drops you dealing 20 damage!"<<endl;
                        hp-=20;break;
                    }
                    case 3:{  //Potions
                        if(potion>=1){
                        cout<<"You used a potion!"<<endl;
                        hp+=30;
                        cout<<"You gained 30 health!"<<endl;
                        potion--;
                        cout<<"You now have "<<potion<<" potions"<<endl;break;
                        }else{
                            cout<<"You are out of potions so who knows what you just drank....."<<endl;
                            cout<<"You lost 30 health"<<endl;
                            hp-=30;break;
                        }
                    }
                    case 4:{  //Fire scroll
                         if(scroll>=1){
                        cout<<"As you read the sacred words from the scroll you feel an"<<endl;
                        cout<<"Unknown power surge through your body as fire shoots from your"<<endl;
                        cout<<"Fingertips scorching the soft belly of the Dragon dealing 30 damage!"<<endl;
                        dragon-=30;
                        scroll--;
                        cout<<"Unfortunately as you preformed the spell the scroll also bursted into flame"<<endl;
                        cout<<"You now have "<<scroll<<" scrolls"<<endl;break;
                        }else{
                            cout<<"You have no Scrolls but dug through your bag looking for one anyways"<<endl;
                            cout<<"The Dragon takes this time to shoot a giant fireball at you dealing 30 damage!"<<endl;
                            hp-=30;break;
                        }
                    }
                    default:cout<<"You stand there vulnerable to attack"<<endl;break;
                }
                if(dragon>=1){ //Dragon attacks
                    if(ddmg<10){
                        cout<<"The Dragon turns and smashes its tail into you dealing "<<ddmg<<" damage!"<<endl;
                        hp-=ddmg;
                    }else if(ddmg<15){
                        cout<<"The Dragon slashes you with its claw dealing "<<ddmg<<" damage!"<<endl;
                        hp-=ddmg;
                    }else if(ddmg>=15){
                        cout<<"The Dragon opens its mouth and a burst of fire shoots out at you"<<endl;
                        cout<<"Dealing "<<ddmg<<" damage!"<<endl;
                        hp-=ddmg;
                    }
                }
            }while(hp>=1&&dragon>=1);  //Fight while both are alive
            if(hp<=0){
                cout<<"You have died"<<endl; //Lose
                loss++;
            }
            else{                                  //Win
                cout<<"The dragon shrieks in pain and falls, you jump on its head and force your sword"<<endl;
                cout<<"Through its skull, you have defeated the dragon!"<<endl;
                cout<<"Not only are you now treated as a God in the kingdom, but you are remembered as a legend"<<endl;
                win++;
            }
        }
        cout<<"Would you like to play again "<<name<<"?"<<endl;
        cout<<"1) Yes"<<endl;
        cout<<"2) No"<<endl;
        cin>>play;
        switch(play){
            case 1:again=true;break;
            case 2:again=false;break;
        }
    }
    ofstream myfile;
    myfile.open("game.txt");
    myfile<<"You have played "<<times<<" times"<<endl;
    myfile<<"You have won "<<win<<" times"<<endl;
    myfile<<"You have lost "<<loss<<" times"<<endl;
    myfile.close();
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}