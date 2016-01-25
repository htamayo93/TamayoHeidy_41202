/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 *Created on January 24, 2016, 7:37 PM
 * Purpose: Calculates the water level rise for 25 years and displays each year.
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
    float watLev;//Water level of the ocean
    unsigned int year;//integer of years
    
    //Output of results
    cout<<"Year   Water level risen (mm)"<<endl;
    
    //for loop to calculate the water level rise for 25 years
    for(year=0;year<=25;year++)
    {
        watLev=1.5*year;
        
        //Output of results
        cout<<year<<"          "<<watLev<<endl;
    }
    
    //Exit stage right
    return 0;
}