/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on February 3, 2016, 09:23 PM
 * Purpose
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes
float infcon(float,float);
void geninf(float,float);
    
//Execution Begins Here
int main(int argc, char** argv) {
    
    float yearAgo;
    float priceTo;
    float inflat;
    float price;
    float price2;
    float condec;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"What was the price of the item a year ago that you would like to check the inflation amount?"<<endl;
    cin>>yearAgo;
    cout<<"What is the price of that item today?"<<endl;
    cin>>priceTo;
    inflat=infcon(yearAgo,priceTo);
    geninf(inflat,priceTo);
    return 0;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
// Convert time from 24 hour notation to 12 hour notation
//**********************************************************************
float infcon(float yearAgo, float priceTo)
{
  float inflat=((priceTo-yearAgo)/yearAgo)*100;
  cout<<"The inflation rate of the item is "<<inflat<<" percent."<<endl;
  return inflat;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
// Convert time from 24 hour notation to 12 hour notation
//**********************************************************************
void geninf(float inflat,float priceTo)
{
    for(int n=1;n<=2;n++)
    {
        float condec=inflat/100;
        priceTo=priceTo*condec+priceTo;
     cout<<"The price of your item based on the rate would be $"<<priceTo<<" in "<<n<<" year(s)."<<endl;
    }
}