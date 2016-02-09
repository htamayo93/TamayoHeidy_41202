/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 *Created on February 07, 2016, 3:19 PM
 * Purpose: 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

    int i,size,n,array[size];
    
    cout<<"This program will display all numbers that are greater than n and will allow the user"<<endl;
    cout<<"to indicate how long the array will be and what will be in the array."<<endl;
    cout<<"Please choose your value n."<<endl;
    cin>>n;
    cout<<"Please pick a number to make your array size."<<endl;
    cin>>size;
    cout<<"Please enter the numbers you would like in your array."<<endl;
    for (i=0;i<size;i++)
    {
        cin>>array[i];
    }
    cout<<"The numbers that are greater than the value n are:"<<endl;
   for (i=0;i<size;i++)
   {
       if(array[i]>n)
       {
           cout<<array[i]<<" ";
       }
   }
    //Exit stage right
    return 0;
}

