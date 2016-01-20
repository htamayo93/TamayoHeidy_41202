/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 20, 2016, 8:03 AM
 * Purpose: Play paper-Rock_scissors
 */

//System Libraries
#include <iostream> //I/O
#include <cstdlib>  //
#include <ctime>    //time stream
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //The problem to solve
    cout<<endl<<"Solution to Savitch 7thEd Chap3 Prob 1"<<endl;
    cout<<endl<<"The Rock-Paper-Scissor Game"<<endl<<endl;
    
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    char qwstion;    //Question, does player want to keep playing
    //Loop until player wants to Quit
    do
    {
        //Declare and initialize variables
        char computr;    //The computer's play
        char player;     //The player's move


        //Input the players turn
        do{
            cout<<endl<<"What is your move P,R,S?"<<endl;
            cin>>player;
            player=toupper(player);
        }while(!(player=='P'||player=='R'||player=='S'));

        //Computer Generated play
        do{
            computr=rand()%4+80;
        }while(computr=='Q');


        //Output the moves by the computer and player
        cout<<"The computer played "<<computr<<endl;
        cout<<"The Players move    "<<player<<endl;

        //Determine the result
        if(computr==player){
            cout<<"The result is a tie"<<endl;
        }else if (player=='P'&&computr=='R'){
            cout<<"The player wins!"<<endl;
        }else if (player=='R'&&computr=='S'){
           cout<<"The player wins!"<<endl;
        }else if (player=='S'&&computr=='P'){
           cout<<"The player wins!"<<endl;
        }else {
           cout<<"The player Loses!"<<endl;
        }

        //Keep playing?
        cout<<endl<<"Do you want to play the game again?"<<endl;
        cout<<"Press y for yes and anything else to exit."<<endl;
        cin>>qwstion;
    }while(toupper(qwstion)=='Y');
    
    //Exit stage right
    return 0;
}