/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 6, 2016, 10:46 AM
 * Purpose: Quarters, Nickels, Dimes
 */

#include <iostream>
using namespace std;

// User Libraries

//Global Constant
const char cnvQrtr=25; //Cents per quarter
const char cnvDime=10; //Cents per dime
const char cnvNiki=5;  //Cents per nickel
const char cnvPnD=100; //Conversion from Pennies to Dollars

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
   //Declare
    unsigned short nQrtrs, nNikis, nDimes;//Declare inputs, number of Q,D,N
    unsigned short total;//total
    
   //Input the number of coins
    cout<<"How many quarters do you have"<<endl;
    cin>>nQrtrs;
    cout<<"How many dimes do you have"<<endl;
    cin>>nDimes;
    cout<<"How many nickels do you have"<<endl;
    cin>>nNikis;
    
    //Calculate the total
    total=nQrtrs*cnvQrtr+nDimes*cnvDime+nNikis*cnvNiki;
    
    //Output the results
    cout<<"Number of Quarters input = "<<static_cast<int>(nQrtrs) <<endl;
    cout<<"Number of Dimes input = "<<static_cast<int>(nDimes) <<endl;
    cout<<"Number of Nickels input = "<<static_cast<int>(nNikis)<<endl;
    cout<<"The dollar amount =$ "<<1.0f*total/cnvPnD<<endl;
    
    //Exit stage right
    return 0;
}

