/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on February 3, 2016, 8:18 AM
 * Purpose:
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes
void reqtime(unsigned int&, unsigned int&);
unsigned int timecon(unsigned int);
void outtime(unsigned int, unsigned int,unsigned int);
    
//Execution Begins Here
int main(int argc, char** argv) {
    
    unsigned int time;
    unsigned int min;
    unsigned int time2;
    reqtime(time,min);
    time2=timecon(time);
    outtime(time,min,time2);
    
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
// Request user to input the time in 24 hr format
//**********************************************************************
void reqtime(unsigned int &time, unsigned int &min)
{  
    cout<<"This program will convert the hour and minutes entered in the program ";
    cout<<"from 24 hour format to 12 hour format."<<endl;
    cout<<"What is the hour you would like to have converted?"<<endl;
    cin>>time;
    cout<<"What amount of minutes would you like converted?"<<endl;
    cin>>min;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
// Convert time from 24 hour notation to 12 hour notation
//**********************************************************************
unsigned int timecon(unsigned int time)
{
    if(time>12)
    {
        return time-12;
    }
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
// Output of time in 12 hr format
//**********************************************************************
void outtime(unsigned int time, unsigned int min,unsigned int time2)
{
    if (time==0)
    {
        if (min<10)
        {    
            cout<<"The time in 12 hour format is 12:0"<<min<<" AM."<<endl;
        }
        else 
        {
            cout<<"The time in 12 hour format is 12:"<<min<<" AM."<<endl;
        }
    }     
    else if(time<12)
    {
        if(min<10)
        {
            cout<<"The time in 12 hour format is "<<time<<":0"<<min<<" AM."<<endl;
        }
        else
        {
           cout<<"The time in 12 hour format is "<<time<<":"<<min<<" AM."<<endl; 
        }
    }
    else if (time==12)
    {
        if(min<10)
        {
            cout<<"The time in 12 hour format is "<<time<<":0"<<min<<" PM."<<endl;
        }
        else
        {
           cout<<"The time in 12 hour format is "<<time<<":"<<min<<" PM."<<endl; 
        }
    }
    else
    {
        if(min<10)
        {
            cout<<"The time in 12 hour format is "<<time2<<":0"<<min<<" PM."<<endl;
        }
        else
        {
           cout<<"The time in 12 hour format is "<<time2<<":"<<min<<" PM."<<endl; 
        }
    }
}