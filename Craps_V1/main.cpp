/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 25, 2016, 11:01 AM
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
    const unsigned short GAMES=36000;//Max number of throws
    
    //Frequency of our dice throws
    unsigned short frq2=0, frq3=0, frq4=0, frq5=0, frq6=0, frq7=0;
    unsigned short frq8=0, frq9=0, frq10=0, frq11=0, frq12=0;
    unsigned short wins=0,losses=0;
    
    //Input data 
    
    //Throw the dice
    for(int game=1;game<=GAMES;game++)
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
                if (sum==sum2)
                {
                    wins++;kpRln=false;
                }
                if(sum2==7)
                {
                    losses++;kpRln=false;
                }
            }while(kpRln);
        }
    }
    
    
    //Output the results 
    cout<<"Out of "<<GAMES<<" played"<<endl;
    cout<<"You won "<<wins<<" games and "<<endl;
    cout<<"You lost "<<losses<<" games."<<endl;
    cout<<"Percentage wise "<<endl;
    cout<<"You won "<<100.0f*wins/GAMES<<"% games and "<<endl;
    cout<<"You lost "<<100.0f*losses/GAMES<<"% games."<<endl;
    cout<<"Your wins and losses total = "<<wins+losses<<endl;
    
    //Exit stage right
    return 0;
}