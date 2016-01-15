/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 14, 2016, 6:32 PM
 * Purpose: Modify problem 10 in order to show sum of all the numbers, positive,
 * and negative numbers. In addition the average of all numbers entered, all positive
 * numbers and all negative numbers is calculated.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare and initialize the variables
    int n1;//First whole number
    int n2;//Second whole number
    int n3;//Third whole number
    int n4;//Fourth whole number
    int n5;//Fifth whole number
    int n6;//Sixth whole number
    int n7;//Seventh whole number
    int n8;//Eighth whole number
    int n9;//Ninth whole number
    int n10;//Tenth whole number
    int totNum,totPos=0,totNeg=0, numPos,numNeg,aveNum,avePos,aveNeg;
    /*Sum of whole numbers, Positive numbers sum, Negative numbers sum, number of
     * positive numbers, number of negative numbers, average of all numbers, average
     * of positive numbers, average of negative nubmers*/
    
    cout<<setprecision(2)<<endl;
    //Input of the ten whole numbers
    cout<<"Please input ten whole number to calculate the total sum as well as";
    cout<<" the positive and negative number sum."<<endl;
    cin>>n1;
    cin>>n2;
    cin>>n3;
    cin>>n4;
    cin>>n5;
    cin>>n6;
    cin>>n7;
    cin>>n8;
    cin>>n9;
    cin>>n10;
    
    //Inputs to calculate the average
    cout<<"Input the amount of number of positive and negative numbers inputed";
    cout<<" to calculate the total, positive, and negative averages."<<endl;
    cout<<"How many positive numbers did you input?"<<endl;
    cin>>numPos;
    cout<<"How many negative numbers did you input?"<<endl;
    cin>>numNeg;
   
    //Calculation of all whole numbers
    totNum=n1+n2+n3+n4+n5+n6+n7+n8+n9+n10;
    aveNum=totNum/10;
    
    //If else statement to calculate the sum of positive and negative numbers
    if (n1>0)
    {
        totPos=n1;
    }
    else
    {
        n1=n1;
        totNeg=n1;
    }
    
    
    if (n2>0)
    {
        totPos=totPos+n2;
    }
    else
    {
        n2=n2;
        totNeg=totNeg+n2;
    }
    
    
     if (n3>0)
    {
        totPos=totPos+n3;
    }
    else
    {
         n3=n3;
        totNeg=totNeg+n3;
    }
    
      if (n4>0)
    {
        totPos=totPos+n4;
    }
    else
    {
        n4=n4;
        totNeg=totNeg+n4;
    }
    
      if (n5>0)
    {
        totPos=totPos+n5;
    }
    else
    {
          n5=n5;
        totNeg=totNeg+n5;
    }
    
      if (n6>0)
    {
        totPos=totPos+n6;
    }
    else
    {
        n6=n6;
        totNeg=totNeg+n6;
    }
    
      if (n7>0)
    {
        totPos=totPos+n7;
    }
    else
    {
        n7=n7;
        totNeg=totNeg+n7;
    }
    
      if (n8>0)
    {
        totPos=totPos+n8;
    }
    else
    {
        n8=n8;
        totNeg=totNeg+n8;
    }
    
      if (n9>0)
    {
        totPos=totPos+n9;
    }
    else
    {
        n9=n9;
        totNeg=totNeg+n9;
    }
    
      if (n10>0)
    {
        totPos=totPos+n10;
    }
    else
    {
        n10=n10;
        totNeg=totNeg+n10;
    }
    
    //Calculation of averages for the positive and negative numbers
    avePos=totPos/numPos;
    aveNeg=totNeg/numNeg;
    
    //Output of results
    cout<<"The sum of all positive numbers is "<<totPos<<"."<<endl;
    cout<<"The average of all positive numbers is "<<avePos<<"."<<endl;
    cout<<"The sum of all negative numbers is "<<totNeg<<"."<<endl;
    cout<<"The average of all negative numbers is "<<aveNeg<<"."<<endl;
    cout<<"The sum of all ten whole number is "<<totNum<<"."<<endl;
    cout<<"The average of all numbers entered is "<<aveNum<<"."<<endl;
    
    //Exit stage right
    return 0;
}

