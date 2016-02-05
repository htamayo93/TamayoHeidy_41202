/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on February 3, 2016, 11:25 AM
 * Purpose
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes
void lengthr(float&,float&);
float conmet(float,float,float);
float concent(float);
void lengtho(float,float);
    
//Execution Begins Here
int main(int argc, char** argv) {
    
    float inches,feet,meters,centiM;
    cout<<fixed<<setprecision(2)<<showpoint;
    
    lengthr(inches,feet);
    meters=conmet(inches,feet,meters);
    centiM=concent(meters);
    lengtho(meters,centiM);

    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
// Request user to input the time in 24 hr format
//**********************************************************************
void lengthr(float &inches,float &feet)
{
    cout<<"This program will convert the amount of feet and inches inputed to ";
    cout<<"meters and centimeters."<<endl<<endl;
    cout<<"Please enter the amount of feet you would like converted."<<endl;
    cin>>feet;
    cout<<"Now inches."<<endl;
    cin>>inches;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
// Convert time from 24 hour notation to 12 hour notation
//**********************************************************************
float conmet(float inches,float feet,float meters)
{
    feet=feet+(inches/12);
    meters=0.3048*feet;
    return meters;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
// Output of time in 12 hr format
//**********************************************************************
float concent(float meters)
{
    return 100*meters;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
// Output of time in 12 hr format
//**********************************************************************
void lengtho(float meters,float centiM)
{
    cout<<"The length of the feet and inches entered in meters is "<<meters<<"."<<endl;
    cout<<"The length of the feet and inches entered in centimeters is "<<centiM<<"."<<endl;
}