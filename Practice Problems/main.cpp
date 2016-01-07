/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 7, 2016, 7:56 AM
 * Purpose:Practice problems
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
int main(int argc, char** argv) {
    //Declare and initialize variables
    char name[10];//User declares what their name is
    unsigned short height;//Declare height in inches
    unsigned short weight;//Declare weight in lbs
    
   cout<<"What is your name?"<<endl;
   cin>>name;
   cout<<"How tall are you in inches?"<<endl;
   cin>>height;
   cout<<"How much do you weigh in Lbs?"<<endl;
   cin>>weight;
    
    //Output the results
    cout<<"The person's name is "<<name<<endl;
    cout<<"The person's height is "<<static_cast<int>(height)<<" inches"<<endl;
    cout<<"The person's weighs "<<static_cast<int>(weight)<<" lbs"<<endl;
   
    //Exit stage right
    return 0;
}

