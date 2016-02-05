/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on February 4, 2016, 10:35 AM
 * Purpose
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes
void weireq(float&,float&);
float conver(float,float);
float conver2(float);
void weioput(float,float);
    
//Execution Begins Here
int main(int argc, char** argv) {
    
    float pounds,ounces,kiloG,grams;
    cout<<fixed<<setprecision(2)<<showpoint;
    
    weireq(pounds,ounces);
    kiloG=conver(pounds,ounces);
    grams=conver2(kiloG);
    weioput(kiloG,grams);

    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
// Request user to input the time in 24 hr format
//**********************************************************************
void weireq(float &pounds,float &ounces)
{
    cout<<"This program will convert the amount of pounds(lbs) and ounces(oz) ";
    cout<<"to kilograms and grams."<<endl<<endl;
    cout<<"Please enter the amount of pounds you would like converted."<<endl;
    cin>>pounds;
    cout<<"Now ounces."<<endl;
    cin>>ounces;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
// Convert time from 24 hour notation to 12 hour notation
//**********************************************************************
float conver(float pounds,float ounces)
{
    pounds=pounds+ounces/16;
    return pounds/2.2046;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
// Output of time in 12 hr format
//**********************************************************************
float conver2(float kiloG)
{
    return 1000*kiloG;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
// Output of time in 12 hr format
//**********************************************************************
void weioput(float kiloG,float grams)
{
    cout<<"The weight of the amount of pounds and ounces entered in kilograms is "<<kiloG<<"."<<endl;
    cout<<"The weight of the amount of pounds and ounces entered in grams is "<<grams<<"."<<endl;
}