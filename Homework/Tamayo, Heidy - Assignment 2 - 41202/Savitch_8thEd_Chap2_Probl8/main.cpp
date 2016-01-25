/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 14, 2016, 8:25 AM
 * Purpose:To find the new price of an item after n years by the rate of 
 * inflation the user inputs.
 */

//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
float CNV=.01f;

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare and initialize variables
    int years;//Number of years the user wants to know the price of
    int n;//Value of year starting from 1 and increasing by 1
    float rate;//Rate of inflation in percentage
    float r;//Rate once converted to decimal
    float item;//Initial price of the item
    float price;//Price of item after n years and rate
    float newPric;//New price of the item
    string name;//name of the item
    
    cout<<fixed<<setprecision(2);
    
    //Input requests
    cout<<"What is the item we will be checking the price on?"<<endl;
    getline(cin, name);
    cout<<"What is the price of the item?"<<endl;
    cin>>item;
    cout<<"What is the percent rate of inflation?"<<endl;
    cin>>rate;
    cout<<"How many years from now would you like calculated the price of the item?"<<endl;
    cin>>years;
    
    //Conversion of percentage to a decimal
    r=rate*CNV;
    
    //Year increments
    n=1;
    
    /*While to calculate the price based on the number of years the user inputs
    and the rate of inflation*/ 
    while (n<=years)
    {
        price=item*n*r;
        newPric=price+item;
        n=n+1;
    }
    
    //Output of results
    cout<<"After "<<years<<" years the cost of "<<name<<" will be $"<<newPric<<"."<<endl;
    
    //Exit stage right
    return 0;
}

