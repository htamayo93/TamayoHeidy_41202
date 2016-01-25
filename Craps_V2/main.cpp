/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 25, 2016, 11:32 AM
 * Purpose: 
 */

//System Libraries
#include <iostream>//I/O
#include <iomanip> //Formatting
#include<cstdlib> //Random Function
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

int main(int argc, char** argv) {
    //Set the random number seed
    srand (static_cast<unsigned int>(time(0)));
    
    //Declare and initialize variables
    unsigned short wins=0,losses=0,games;
    
    //Input data 
    cout<<"How many games of Craps would you like to play"<<endl;
    cout<<"Utilize a number between 10,000 and 40,000"<<endl;
    cin>>games;
    while(games<10000||games>40000)
    {
        cout<<"How many games of Craps would you like to play"<<endl;
        cout<<"Utilize a number between 10,000 and 40,000"<<endl;
        cin>>games;
    }
    
    //Throw the dice
    for(int game=1;game<=games;game++)
    {
        char die1=rand()%6+1;//Number between [1,6]
        char die2=rand()%6+1;//Number between [1,6]
        char sum=die1+die2;
        if (sum==2||sum==3||sum==12)losses++;
        else if (sum==7||sum==11)wins++;
        else 
        {
            //roll again
            bool kpRln=true;
            do
            {
                die1=rand()%6+1;//Number between [1,6]
                die2=rand()%6+1;//Number between [1,6]
                char sum2=die1+die2;
                switch (sum==7)
                {
                    case true:
                    {
                        losses++;kpRln=false;
                    }
                    default:
                    {
                        if (sum==sum2)
                        {
                            wins++;kpRln=false;
                        }
                    }
                }
            }while(kpRln);
        }
    }
    
    
    //Output the results 
    cout<<"Out of "<<games<<" played"<<endl;
    cout<<"You won "<<wins<<" games and "<<endl;
    cout<<"You lost "<<losses<<" games."<<endl;
    cout<<"Percentage wise "<<endl;
    cout<<"You won "<<100.0f*wins/games<<"% games and "<<endl;
    cout<<"You lost "<<100.0f*losses/games<<"% games."<<endl;
    cout<<"Your wins and losses total = "<<wins+losses<<endl;
    
    //Exit stage right
    return 0;
}