/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 *Created on January 24, 2016, 12:19 PM
 * Purpose: Program that calculates the rate of the country club each year for six years.
 */

//System Libraries
#include <iostream>//I/O
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

    //Declare and initialize variables
    unsigned int member=2500;//Initial price of the membership
    unsigned int year;//number of years that price will increase
    float increas;//price increase
    
    //For loop that calculates the rate for the country club membership of six years
    for (year=1;year<=6;year++)
    {
        increas=member*0.04;
        member=member+increas;
        
        //Output of results
        cout<<"In "<<year<<" year(s) the rate for the country club membership will be ";
        cout<<"$"<<member<<"."<<endl;
    }
    
    //Exit stage right
    return 0;
}

