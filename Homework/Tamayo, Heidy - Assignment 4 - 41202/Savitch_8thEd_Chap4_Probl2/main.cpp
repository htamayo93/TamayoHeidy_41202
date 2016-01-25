/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 *Created on January 24, 2016, 10:40 PM
 * Purpose: To calculate the miles per gallon of the user's car based on the amount
 * of liters consumes and miles traveled. To determine which of the two vehicles is 
 * more fuel efficient. 
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
    float miles;//Number of miles traveled of the first car
    float miles2;//Number of miles traveled of the second car
    float liters;//Number of liters consumed by first vehicle
    float liters2;//Number of liters consumed by the second vehicle
    float gallon;//Number of gallons of the first vehicle calculated based on the liters
    float gallon2;//Number of gallons of the second vehicle calculated based on the liters
    char choice;//Choice to determine if the user would like to repeat the program
    
    //Do while loop to repeat the program based on the user's choice
    do
    {
        //Output requesting the input of liters and miles of the first car by the user
        cout<<"This program will calculate the miles per gallon your car has based on ";
        cout<<"the amount of liters and miles you input. It will also determine which ";
        cout<<"vehicle is more fuel efficient based on the miles per gallon calculated."<<endl;
        cout<<"Please enter the amount of liters of gasoline consumed by the first car."<<endl;
        cin>>liters;
        cout<<"Please enter the amount of miles you drove for this car."<<endl;
        cin>>miles;

        //Conversion of liters to gallons
        gallon=CNVR*liters;
        
        //Output requesting the input of liters and miles of the second car by the user
        cout<<endl<<"Please enter the amount of liters of gasoline consumed by the second car."<<endl;
        cin>>liters2;
        cout<<"Please enter the amount of miles you drove for this car."<<endl;
        cin>>miles2;
        
        //Conversion of liters to gallons
        gallon2=CNVR*liters2;
        
        //Output of results
        cout<<"Car 1 has a mileage of "<<miles/gallon<<" miles per gallon!"<<endl;
        cout<<"Car 2 has a mileage of "<<miles2/gallon2<<" miles per gallon!"<<endl;
        
        //if loop to determine which car is more fuel efficient and output of results
        if ((miles/gallon)==(miles2/gallon2))
        {
            cout<<"Both cars have the same fuel efficiency!"<<endl;
            
        }
        else if ((miles/gallon)<(miles2/gallon2))
        {
            cout<<"car 2 is more fuel efficient!"<<endl;
        }
        else if ((miles/gallon)>(miles2/gallon2))
        {
            cout<<"Car 1 is more fuel efficient!"<<endl;
        }
        
        cout<<endl<<endl<<"Would you like to calculate the mileage of another 2 vehicles and compare their mileage?"<<endl;
        cout<<"Type y for yes or anything else to exit."<<endl;
        cin>>choice;
        cout<<endl<<endl;
    }while(toupper(choice)=='Y');
    
    //Exit stage right
    return 0;
}