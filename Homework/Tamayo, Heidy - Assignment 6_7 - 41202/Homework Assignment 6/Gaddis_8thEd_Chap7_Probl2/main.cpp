/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 *Created on February 07, 2016, 3:19 PM
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

    float month[12],max,min,sum;
    int i;
    
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"This program will calculate the total rainfall for the year, the average ";
    cout<<"rainfall, and the months with the highest and lowest amounts."<<endl;
    cout<<"Please enter the values for each month of rainfall."<<endl;
    cin>>month[0];
    max=month[0];
    for (i=1;i<12;i++)
    {
        cin>>month[i];
        if (month[i]<0)
        {
         cout<<"Error: Please enter a valid number."<<endl;   
        }    
        else if(month[i]>max)
        {
            max=month[i];
        }
        if(month[i]<min)
        {
            min=month[i];
        }
    }
    sum=month[0]+month[1]+month[2]+month[3]+month[4]+month[5]+month[6]+month[7]+month[8]+month[9]+month[10]+month[11]+month[12];
    cout<<"The total rainfall for the year was "<<sum<<"."<<endl;
    sum=sum/12;
    cout<<"The month with the highest amount of rainfall was "<<max<<"."<<endl;
    cout<<"The month with the lowest amount of rainfall was "<<min<<"."<<endl;
    cout<<"The average of the rainfall was "<<sum<<"."<<endl;
    //Exit stage right
    return 0;
}

