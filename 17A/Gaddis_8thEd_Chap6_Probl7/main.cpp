/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on February 29, 2016, 2:27 PM
 * Purpose: 
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void celsius(float);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float faren=20;
    cout<<"This program will convert the Fahrenheit temperature entered by the user."<<endl;
    cout<<"This will then be converted to Celsius."<<endl;
   celsius(faren);
    

 return 0;
}

void celsius(float faren)
{
    cout<<fixed<<setprecision(2);
    float cel,i=0;
    for (i;i<=faren;i++)
    { 
        cel=1.8*(i-32);
        cout<<i<<" degrees Fahrenheit converted to Celsius is "<<cel<<" degrees Celsius."<<endl;
    }
}
