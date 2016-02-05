/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on February 4, 2016, 11:29 AM
 * Purpose:
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
float ratein(float,float);
float infcon(float,float);
void geninf(float,float);
void reqtime(unsigned int&, unsigned int&);
unsigned int timecon(unsigned int);
void outtime(unsigned int, unsigned int,unsigned int);
void lengthr(float&,float&);
float conmet(float,float,float);
float concent(float);
void lengtho(float,float);
void weireq(float&,float&);
float conver(float,float);
float conver2(float);
void weioput(float,float);
    
//Execution Begins Here
int main(int argc, char** argv) {
//Declare and initialize variables
    unsigned short answer;//Problem Solution to display
    bool decision=true;   //Exits the program when false
    
    //Menu to Display Solution
    do{
        
        //Options that the user has to display the problem
        cout<<"Assignment 5 Problem Set"<<endl;
        cout<<"Enter 1 to Display Savitch 8thEd Chap4 Prob4"<<endl;
        cout<<"Enter 2 to Display Savitch 8thEd Chap4 Prob5"<<endl;
        cout<<"Enter 3 to Display Savitch 8thEd Chap5 Prob1"<<endl;
        cout<<"Enter 4 to Display Savitch 8thEd Chap5 Prob6"<<endl;
        cout<<"Enter 5 to Display Savitch 8thEd Chap5 Prob9"<<endl;
        cout<<"Type anything else to exit "<<endl<<endl;
        cin>>answer;
        //Solutions to all the problems
        switch(answer)
        {
            case 1:{problem1();break;}
            case 2:{problem2();break;}
            case 3:{problem3();break;}
            case 4:{problem4();break;}
            case 5:{problem5();break;}
            default:{
                cout<<"The program will now exit."<<endl;
                decision=false;
            }
        }
    }while(decision);
    
    //Exit stage right
    return 0;
}
/******************************************************************************/
/******************************** Problem 1 ***********************************/
/******************************************************************************/
void problem1()
{
    //Program description
    cout<<endl<<"Problem 4 of Chapter 4 from the Savitch book 8th Ed."<<endl;
    cout<<"This program will determine the rate of inflation based on the price of the"<<endl;
    cout<<"item a year ago and today."<<endl;

    float yearAgo;//Price of the item a year ago
    float priceTo;//Price of the item today
    float inflat;//The inflation rate calculated
    char choice;//user's decision
    cout<<fixed<<setprecision(2)<<showpoint;
    do
    {   
        //Output requesting the inputs
        cout<<"What was the price of the item a year ago that you would like to check the inflation amount?"<<endl;
        cin>>yearAgo;
        cout<<"What is the price of that item today?"<<endl;
        cin>>priceTo;
        
        //Output of results
        ratein(yearAgo,priceTo);

        cout<<"Would you like to repeat the program? Type y for yes."<<endl;
        cin>>choice;
    }while(choice=='y');
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
// Convert time from 24 hour notation to 12 hour notation
//**********************************************************************
void ratein(float yearAgo, float priceTo)
{
  float inflat=((priceTo-yearAgo)/yearAgo)*100;//Calculation of inflation 
  cout<<"The inflation rate of the item is "<<inflat<<" percent."<<endl;
}

/******************************************************************************/
/******************************** Problem 2 ***********************************/
/******************************************************************************/
void problem2()
{
    float yearAgo;//Price of item a year ago
    float priceTo;//Price of item today,1 year, and 2 year
    float inflat;//Rate of inflation
    float condec;//converting a inflation rate to a decimal
    char choice;//user's decision
    cout<<fixed<<setprecision(2)<<showpoint;
    
    //do while loop to see if the user would like to repeat
    do
    {   
        //Output asking for inputs
        cout<<"What was the price of the item a year ago that you would like to check the inflation amount?"<<endl;
        cin>>yearAgo;
        cout<<"What is the price of that item today?"<<endl;
        cin>>priceTo;
        //Calculation of inflation rate
        inflat=infcon(yearAgo,priceTo);
        //Output of results
        geninf(inflat,priceTo);
        cout<<"Would you like to repeat the program? Type y for yes."<<endl;
        cin>>choice;
    }while(choice=='y');
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
// Convert time from 24 hour notation to 12 hour notation
//**********************************************************************
float infcon(float yearAgo, float priceTo)
{
  float inflat=((priceTo-yearAgo)/yearAgo)*100;//Caculation of inflation rate
  //Output of results
  cout<<"The inflation rate of the item is "<<inflat<<" percent."<<endl;
  return inflat;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
// Convert time from 24 hour notation to 12 hour notation
//**********************************************************************
void geninf(float inflat,float priceTo)
{
    //Calculation of price for the next two years
    for(int n=1;n<=2;n++)
    {
        float condec=inflat/100;
        priceTo=priceTo*condec+priceTo;
        //Output of results
        cout<<"The price of your item based on the rate would be $"<<priceTo<<" in "<<n<<" year(s)."<<endl;
    }
}

/******************************************************************************/
/******************************** Problem 3 ***********************************/
/******************************************************************************/
void problem3()
{
    unsigned int time;//Hour that the user wants to input
    unsigned int min;//Minutes the user inputs
    unsigned int time2;//Time if past 12 hours
    char choice;//user's decision
    do
    {
        //Outputs of results
        reqtime(time,min);
        time2=timecon(time);
        outtime(time,min,time2);
        cout<<"Would you like to repeat the program? Type y for yes."<<endl;
        cin>>choice;
    }while(choice=='y');
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
// Request user to input the time in 24 hr format
//**********************************************************************
void reqtime(unsigned int &time, unsigned int &min)
{  
    //Output description and request of inputs
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
    //Determining if the time is past 12 hours or not
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
    //If else statements to determine the right am or pm
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

/******************************************************************************/
/******************************** Problem 4 ***********************************/
/******************************************************************************/
void problem4()
{
    float inches,feet,meters,centiM;
    char choice;//user's decision
    cout<<fixed<<setprecision(2)<<showpoint;

    do
    {
        lengthr(inches,feet);
        //Function calculations
        meters=conmet(inches,feet,meters);
        centiM=concent(meters);
        //Output of results
        lengtho(meters,centiM);
        cout<<"Would you like to repeat the program? Type y for yes."<<endl;
        cin>>choice;
    }while(choice=='y');
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
// Request user to input the time in 24 hr format
//**********************************************************************
void lengthr(float &inches,float &feet)
{
    //Output program description and input requests
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
    //conversion of inches to feet to meters
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
    //conversion from meters to centimeters 
    return 100*meters;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
// Output of time in 12 hr format
//**********************************************************************
void lengtho(float meters,float centiM)
{
    //Output of results
    cout<<"The length of the feet and inches entered in meters is "<<meters<<"."<<endl;
    cout<<"The length of the feet and inches entered in centimeters is "<<centiM<<"."<<endl;
}

/******************************************************************************/
/******************************** Problem 5 ***********************************/
/******************************************************************************/
void problem5()
{
    float pounds,ounces,kiloG,grams;//pounds, ounces, kilograms, and grams
    char choice;//User's decision
    cout<<fixed<<setprecision(2)<<showpoint;
    do
    {
        //function requesting the weight in pounds and ounces
        weireq(pounds,ounces);
        //function conversions
        kiloG=conver(pounds,ounces);
        grams=conver2(kiloG);
        //function output
        weioput(kiloG,grams);
        cout<<"Would you like to repeat the program? Type y for yes."<<endl;
        cin>>choice;
    }while(choice=='y');
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
// Request user to input the time in 24 hr format
//**********************************************************************
void weireq(float &pounds,float &ounces)
{
    //Program description and requests of inputs
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
    //Conversion of pounds to kilograms
    pounds=pounds+ounces/16;
    return pounds/2.2046;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
// Output of time in 12 hr format
//**********************************************************************
float conver2(float kiloG)
{
    //conversion of kilograms to grams
    return 1000*kiloG;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
// Output of time in 12 hr format
//**********************************************************************
void weioput(float kiloG,float grams)
{
    //Output of results
    cout<<"The weight of the amount of pounds and ounces entered in kilograms is "<<kiloG<<"."<<endl;
    cout<<"The weight of the amount of pounds and ounces entered in grams is "<<grams<<"."<<endl;
}