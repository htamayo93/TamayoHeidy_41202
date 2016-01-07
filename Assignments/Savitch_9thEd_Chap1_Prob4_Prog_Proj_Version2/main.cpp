/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 7, 2016, 10:47 AM
 * Purpose:How far does it drop
 */

//System Libraries
#include <iostream>//I/O Library
#include <cstdlib>//Random function location
#include <cmath>  //Math functions
#include <ctime>  //Time to set the random seed
#include <iomanip>//Format Library
#include <fstream>//Reading/Writing to a file
using namespace std;

//User Libraries

//Global Constant
const float GRAVITY=32.174f;//Sea Level Earth Acceleration Constant ft/sec^2
    //need to put f in order not to have a double

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    ofstream out;//Declare a file stream object called out
    float drpTime,distance;//Time in sec and Distance in feet
    
    //Inputting the time with a random number
    drpTime=rand()%11+10;//[10,20]secs
        //insure you know what 0 mode is
    const int SIZE=21;
    char fileNam[SIZE]="DropDistance.dat";
    out.open(fileNam);
    
    //Calculate the number
    distance=0.5f*GRAVITY*drpTime*drpTime;
    
    //Output the results
    cout<<"Drop Time = " <<drpTime<<"(sec)"<<endl;
    cout<<fixed<<setprecision(3)<<showpoint;//Format the distance to three decimal places
    cout<<"Free Fall Distance x2 = "<<setw(9)<<distance<<"(ft)"<<endl;
    
    //Calculate the number
    distance=0.5f*GRAVITY*pow(drpTime,2);
    
    //Output the results
    cout<<"Free Fall Distance pow="<<setw(10)<<distance<<"(ft)"<<endl;
    
    //Calculate the number of
    distance=0.5f*GRAVITY*exp(2*log(drpTime));
    
    //Output the results
    cout<<"Free Fall Distance exp(log)="<<setw(10)<<distance<<"(ft)" <<endl;
    
    //Output the results to a file
    out<<fixed<<setprecision(3)<<showpoint;//Format the Distance to 3 decimals
    out<<"Free Fall Distance exp(log)="<<setw(10)<<distance<<"(ft)"<<endl;
    
    //Exit stage right make sure to close files
    out.close();
    return 0;
}

