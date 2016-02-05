/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on February 3, 2016, 01:25 PM
 * Purpose
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

void infcon(float,float);
    
//Execution Begins Here
int main(int argc, char** argv) {
    
    float yearAgo;
    float priceTo;
    float inflat;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"What was the price of the item a year ago that you would like to check the inflation amount?"<<endl;
    cin>>yearAgo;
    cout<<"What is the price of that item today?"<<endl;
    cin>>priceTo;
    infcon(yearAgo,priceTo);
    return 0;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
// Convert time from 24 hour notation to 12 hour notation
//**********************************************************************
void infcon(float yearAgo, float priceTo)
{
  float inflat=((priceTo-yearAgo)/yearAgo)*100;
  cout<<"The inflation rate of the item is "<<inflat<<" percent."<<endl;
}