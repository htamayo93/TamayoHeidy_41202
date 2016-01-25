/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 *Created on January 24, 2016, 10:21 PM
 * Purpose: To calculate the miles per gallon of the user's car based on the amount
 * of liters consumes and miles traveled.
 */

//System Libraries
#include <iostream>  //I/O
using namespace std;

//User Libraries

//Global Constants
float CNVR=0.264179f;//Conversion of liters per gallon

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

    //Declare and initialize variables
    float miles;//Number of miles traveled
    float liters;//Number of liters consumed by vehicle
    float gallon;//Number of gallons calculated based on the liters
    char choice;//Choice to determine if the user would like to repeat the program
    
    //Do while loop to repeat the program based on the user's choice
    do
    {
        //Output requesting the input of liters and miles by the user
        cout<<"This program will calculate the miles per gallon your car has based on ";
        cout<<"the amount of liters and miles you input."<<endl;
        cout<<"Please enter the amount of liters of gasoline consumed by your car."<<endl;
        cin>>liters;
        cout<<"Please enter the amount of miles you drove."<<endl;
        cin>>miles;

        //Conversion of liters to gallons
        gallon=CNVR*liters;

        //Output of results
        cout<<"Your car has a mileage of "<<miles/gallon<<" miles per gallon!"<<endl;
        
        
        cout<<endl<<"Would you like to calculate the mileage of another vehicle?"<<endl;
        cout<<"Type y for yes or anything else to exit."<<endl;
        cin>>choice;
        cout<<endl<<endl;
    }while(toupper(choice)=='Y');

    
    //Exit stage right
    return 0;
}