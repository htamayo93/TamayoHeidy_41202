/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 10, 2016, 11:08 PM
 * Purpose: To write a program that allows the user to know how many cents they 
 * have based on the number of quarters, nickels, and dimes they input.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant
const char QUART=25;
const char DIME=10;
const char NICKEL=5;

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Determine the variables
    int quarts, dimes, nickls, centsTo;
    
    //Output requesting the number of quarters
    cout<<"Enter the amount of quarters."<<endl;
    
    //First input
    cin>>quarts;
    
    //Output requesting second input
    cout<<"Enter the amount of dimes."<<endl;
    
    //Second Input
    cin>>dimes;
    
    //Output making third input request
    cout<<"Enter the amount of nickels."<<endl;
    
    //Third input
    cin>>nickls;
    
    //Calculation of total cents
    centsTo=quarts*QUART+dimes*DIME+nickls*NICKEL;
    
    //Output of results
    cout<<"The coins are worth "<<centsTo<<" cents."<<endl;
    
    //Exit stage right
    return 0;
}

