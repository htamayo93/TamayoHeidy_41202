/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 14, 2016, 12:13 AM
 * Purpose: Program that determines whether a meeting room is in violation of fire
 * law regulations regarding the room capacity.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare variables and initialize
    int roomCap, numPeo, remove, add;
    /*room capacity, number of people, how many people need to be removed, how 
    many more people can come to the meeting*/
    
    //Input requests
    cout<<"How many people will be attending the meeting?"<<endl;
    cin>>numPeo;
    cout<<"What is the room capacity of the room?"<<endl;
    cin>>roomCap;
    
    /*If else expression to determine if the number of people in the room doesn't
    exceed the room capacity and if it does how many have to leave. If there is 
    extra space it is mentioned*/
    if (numPeo>roomCap)
    {cout<<"The meeting cannot be held to due fire law regulations."<<endl;
     remove=numPeo-roomCap;
     cout<<"In order to meet the regulations "<<remove;
     cout<<" people must be excluded from the meeting."<<endl;
    }
    else
    {
        cout<<"It is legal to hold the meeting."<<endl;
        add=roomCap-numPeo;
        cout<<"An additional "<<add;
        cout<<" can attend the meeting without breaking fire law regulations."<<endl;
    }
    
    //Exit stage right
    return 0;
}