/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 *Created on January 24, 2016, 1:19 PM
 * Purpose: To calculate the average rainfall and sum of total rainfall based on the
 * years inputted by the users.  
 */

//System Libraries
#include <iostream>//I/O
#include <cmath>
#include <iomanip> //Formatting
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

    //Declare and initialize variables
    unsigned int year;//Number of years
    float rainfal;//rainfall in inches 
    float sum=0;//summation of rainfall
    float rainAve;//Average of rainfall
    int months;//number of months calculated based on years
    
    
    cout<<fixed<<setprecision(2);
    
    //Output requesting year
    cout<<"The average rainfall for a number of years will be calculated"<<endl<<"please enter ";
    cout<<"the number of years you would like calculated."<<endl;
    cin>>year;
    
    //if else statement to ensure that user puts a year greater than one
    if (year<1)
    {
        cout<<"Error:Please type a correct year."<<endl;
    }
    else
    {
        //conversion of year(s) to months
        months=year*12;
        
        //for loop that calculates the total rainfall and the average of it per month.
        for(int n1=1;n1<=months;n1++)
        {
            cout<<"What was the rainfall for month "<<n1<<" in inches ?"<<endl;
            cin>>rainfal;
            if (rainfal<0)
            {
                cout<<"Error:Please type the correct number of inches of rainfall."<<endl;
            }
            else
            {
                sum=sum+rainfal;
                rainAve=sum/n1;
                
                //Output of results
                cout<<"For the month "<<n1<<" the total rainfall was "<<sum<<" inch(es)."<<endl;
                cout<<"The average rainfall for this month is "<<rainAve<<" inch(es)."<<endl<<endl;
            }
        }
    }
    
    //Exit stage right
    return 0;
}

