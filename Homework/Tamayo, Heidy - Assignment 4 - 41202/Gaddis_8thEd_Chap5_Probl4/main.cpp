/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 *Created on January 24, 2016, 6:34 PM
 * Purpose: To calculate the amount of calories burned based on the amount of minutes
 * in increments of five.
 */

//System Libraries
#include <iostream> //I/O
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

    //Declare and initialize variables
    float calori;//amount of calories
    unsigned int minute;//minute declaration
    
    //for loop to calculate the amount of calories burned per 5 minutes
    for(minute=0;minute<=30;minute+=5);
    {
        calori=minute*3.6;
        cout<<"After "<<minute<<" minutes, you will have burned "<<calori<<" calories!"<<endl;
    }   
    
    //Exit stage right
    return 0;
}

