/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 7, 2016, 10:47 AM
 * Purpose:How far does it drop
 */

//System Libraries
#include <iostream>//I/O Library
#include <cstdlib>//Random function location
#include <cmath>  //Math functions
#include <ctime>  //Time to set the random seed
#include <iomanip>//Format Library
using namespace std;

//User Libraries

//Global Constant
const float GRAVITY=32.174f;//Sea Level Earth Acceleration Constant ft/sec^2
    //need to put f in order not to have a double

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    float drpTime,distance;//Time in sec and Distance in feet
    
    //Inputting the time with a random number
    drpTime=rand()%11+10;//[10,20]secs
        //insure you know what 0 mode is
    
    //Calculate the number
    distance=0.5f*GRAVITY*drpTime*drpTime;
    
    //Output the results
    cout<<"Drop Time = " <<drpTime<<"(sec)"<<endl;
    cout<<"Free Fall Distance = " <<distance<<"(ft)"<<endl;
    
    return 0;
}

