/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 14, 2016, 12:13 AM
 * Purpose:
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    int roomCap, numPeo, remove, add;
    
    cout<<"How many people will be attending the meeting?"<<endl;
    cin>>numPeo;
    cout"What is the room capacity of the room?"<<endl;
    cin>>roomCap;
    
    if (numPeo>roomCap)
    {cout<<"The meeting cannot be held to due fire law regulations"<<endl;
     remove=numPeo-roomCap;
     cout<<"In order to meet the regulations "<<remove;
     cout<<" people must be excluded from the meeting."<<endl;
    }
    else
    {
        cout<<"It is legal to hold the meeting."<<endl;
        add=roomCap-numPeo;
        while (add>0)
        {
            cout<<"An additional "<<add;
            cout<<" can attend the meeting without breaking fire law regulations"<<endl;
        }
    }
    return 0;
}