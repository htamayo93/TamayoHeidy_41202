/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 20, 2016, 10:11 AM
 * Purpose: Calculation of temperature in Celsius and Fahrenheit
 */

//System Libraries
#include <iostream> //I/O
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare and initialize the variables
    int temFah;//Temperature in Fahrenheit
    int temCel=100;//Temperature in Celsius
    
    //Problem that will be solved
    cout<<"This program will calculate where Celsius and Fahrenheit are the same."<<endl<<endl;
    
    //Calculation with while loop to determine where Celsius and Fahrenheit are the same.
    while (temCel!=temFah)
    {
        temCel--;
        temFah=(9*temCel)/5+32;
    }
    
    ///Output of results
    cout<<"According to the program, at temperature "<<temCel<<" in Celsius, the ";
    cout<<" temperature in Fahrenheit will be "<<temFah<<"."<<endl;
    
    //Exit stage right
    return 0;
}

