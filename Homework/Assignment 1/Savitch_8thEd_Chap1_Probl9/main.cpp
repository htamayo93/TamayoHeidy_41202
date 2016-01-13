/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 11, 2016, 12:04 AM
 * Purpose: To write a program that allows the user to know the distance traveled
 * based on the time inputed.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global constants
const char GRAV=32;

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Determine the variables
    int distan, time;
    
    //Output requesting the time from the user
    cout<<"Please enter the time to indicate the distance of the drop:"<<endl;
    
    //Input of the time
    cin>>time;
    
    //Calculation of the distance
    distan=0.5f*GRAV*time*time;
    
    //Output of the results
    cout<<"The Drop Time is "<<time<<"(sec)"<<endl;
    cout<<"The Free Fall Distance is "<<distan<<"(ft)"<<endl;
    
    //Exit stage right
    return 0;
}
