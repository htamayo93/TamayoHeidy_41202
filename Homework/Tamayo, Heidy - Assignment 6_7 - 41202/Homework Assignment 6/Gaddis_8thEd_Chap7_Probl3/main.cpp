/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 *Created on February 07, 2016, 3:19 PM
 * Purpose: 
 */

//System Libraries
#include <iostream>
#include <cstring>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

    string names[5]={"MILD","MEDIUM","SWEET","HOT","ZESTY"};
    int sells[5],i,max,min,sum=0;
    
    cout<<"This program will display the amount of jars sold from each type of salsa."<<endl;
    cout<<"Reports of which sold the most and least will also be determined."<<endl;
    cout<<"Please enter the amount of jars sold for "<<names[0]<<" salsa."<<endl;
        cin>>sells[0];
        max=sells[0];
    for (i=1;i<5;i++)
    {
        cout<<"Please enter the amount of jars sold for "<<names[i]<<" salsa."<<endl;
        cin>>sells[i];
    }
   for (i=1;i<5;i++)
   {
       if(sells[i]>max)
        {
            max=sells[i];
        }
        if(sells[i]<min)
        {
            min=sells[i];
        }
       sum=sum+sells[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<"For "<<names[i]<<" salsa, "<<sells[i]<<" jars were sold."<<endl;
    } 
    cout<<"The total amount of jars sold were "<<sum<<"."<<endl;
    for(i=0;i<5;i++)
    {
        if (max==sells[i])
        {
            cout<<"The salsa that sold the most was "<<names[i]<<" with "<<sells[i]<<" sold."<<endl;
        }
        if(min==sells[i])
        {
            cout<<"The salsa that sold the least was "<<names[i]<<" with "<<sells[i]<<" sold."<<endl;
        }
    }
    //Exit stage right
    return 0;
}

