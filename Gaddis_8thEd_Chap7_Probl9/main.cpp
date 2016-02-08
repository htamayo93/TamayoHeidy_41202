/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 *Created on February 07, 2016, 3:35  PM
 * Purpose: 
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

    int empId[7]={5658845,4520125,7895122,8777541,8451277,1302850,7580489};
    int hours[7];
    float payRate[7];
    float wage[7];
    int i;
    
    cout<<fixed<<setprecision(2)<<fixed;
    cout<<"This program will determine the wage of seven employees based on their"<<endl;
    cout<<"pay rate and wages."<<endl;
    for (i=0;i<7;i++)
    {
        cout<<"For employee id #"<<empId[i]<<", please enter the number of hours worked."<<endl;
        cin>>hours[i];
        cout<<"Then the pay rate in dollars per hour."<<endl;
        cin>>payRate[i];
    }
    for (i=0;i<7;i++){
        wage[i]=payRate[i]*hours[i];
        cout<<"Employee id #"<<empId[i]<<" earned $"<<wage[i]<<" for "<<hours[i]<<" hours."<<endl;
    }
    
    //Exit stage right
    return 0;
}