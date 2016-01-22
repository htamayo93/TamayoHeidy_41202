/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 21, 2016, 8:09 PM
 * Purpose: Determine the correct wording of time based on seconds.
 */

//System Libraries
#include <iostream> //I/O
#include <iomanip>  //Formatting
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare and initialize the variables
    float seconds;//Seconds inputed by the user
    
    cout<<fixed<<setprecision(2)<<endl;
    
    //Problem that will be solved
    cout<<"This program will output your time that you have inputed in seconds by ";
    cout<<"seconds, hours, and days depending the time bracket."<<endl<<endl;
    
    //User inputs the number of seconds
    cout<<"Please input the number of seconds."<<endl;
    cin>>seconds;
    
    /*if else to determine the seconds the user inputed falls under seconds,
     minutes, hours, or days. It also outputs the results*/
    if (seconds>=60)
    {
        if (seconds<3600)
        {
            seconds=seconds/60;
            cout<<"You have inputed "<<seconds<<" minutes!"<<endl;
        }
        else if (seconds>=3600)
        {
            if (seconds<86400)
            {
                seconds=seconds/3600;
                cout<<"You have inputed "<<seconds<<" hours!"<<endl;
            }
            else if (seconds>=86400)
            {
                seconds=seconds/86400;
                cout<<"You have inputed "<<seconds<<" days!"<<endl;
            }  
        }
    }
    else
    {
        cout<<"You have inputed "<<seconds<<" seconds!"<<endl;
    }
    
    //Exit stage right
    return 0;
}