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

    int tenarry[10],max,min,i;
    
    cout<<"This program will allow the user to enter ten integers and display the"<<endl;
    cout<<"largest and smallest values."<<endl;
    cout<<"Please enter the ten values."<<endl;
    cin>>tenarry[0];
    max=tenarry[0];
    for (i=1;i<10;i++)
    {
        cin>>tenarry[i];
        if(tenarry[i]>max)
        {
            max=tenarry[i];
        }
        if(tenarry[i]<min)
        {
            min=tenarry[i];
        }
    }
    cout<<"The largest number is "<<max<<"."<<endl;
    cout<<"The smallest number is "<<min<<"."<<endl;
    //Computation 
    
    //Exit stage right
    return 0;
}

