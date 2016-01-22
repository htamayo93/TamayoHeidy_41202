/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 20, 2016, 8:03 AM
 * Purpose: Allows two users to play rock, paper scissors.
 */

//System Libraries
#include <iostream>  //I/O
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declaring and initializing variables of the two users and if they would like to repeat the game.
    char user1;//Input from user 1
    char user2;//Input from user 2
    char choice;//Decision if they would like to play again
    
    //Do while loop to determine if the users would like to play again.
    do
    {
        //The problem to solve
        cout<<"This program will be a game of rock, paper, scissors between two users."<<endl;
        cout<<"Select which player will be user 1 and which will be user 2."<<endl<<endl;
        
        //First user inputs their choice of rock,paper, or scissors
        cout<<"User 1 please write you choice for Rock, Paper, or Scissor using ";
        cout<<"the characters R, P, or S."<<endl;
        cin>>user1;
        user1=toupper(user1);
        
        //Second user inputs their choice of rock, paper, or scissors
        cout<<"User 2 please write you choice for Rock, Paper, or Scissor using ";
        cout<<"the characters R, P, or S."<<endl;
        cin>>user2;
        user2=toupper(user2);
        
        //If else loop to determine based on inputs who won/output of results
        if (user1==user2)
        {
            cout<<"You both tied, therefore nobody wins!"<<endl;   
        }
        else if (user1=='P'&&user2=='R')
        {
            cout<<"Paper covers rock, therefore user 1 wins!"<<endl;
        }
        else if (user1=='R'&&user2=='P')
        {
            cout<<"Paper covers rock, therefore user 2 wins!"<<endl;
        }
        else if (user1=='S'&&user2=='R')
        {
            cout<<"Rock breaks scissors, therefore user 2 wins!"<<endl;
        }
        else if (user1=='R'&&user2=='S')
        {
            cout<<"Rock breaks scissors, therefore user 1 wins!"<<endl;
        }
        else if (user1=='S'&&user2=='P')
        {
            cout<<"Scissors cuts paper, therefore user 1 wins!"<<endl;
        }
        else if (user1=='P'&&user2=='S')
        {
            cout<<"Scissors cuts paper, therefore user 2 wins!"<<endl;
        }
        
        //Asks the users if they would like to play again
        cout<<"Would you like to play the game again?"<<endl;
        cout<<"Type y for yes or anything else to exit the program."<<endl;
        cin>>choice;
        
    }while(toupper(choice)=='Y');

    //Exit stage right
    return 0;
}

