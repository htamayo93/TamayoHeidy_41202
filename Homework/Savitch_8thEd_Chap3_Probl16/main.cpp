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
    int temFah=0;
    int temCel=100;
    int convers;
    
    cout<<"input celsius"<<endl;
    cin>>temCel;
            
    while (temCel!=temFah)
    {
        convers=(9*temCel)/5+32;
        temCel++;
    }
    cout<<temCel<<endl;
    cout<<temFah<<endl;
    
    
    
    
    
    //Exit stage right
    return 0;
}

