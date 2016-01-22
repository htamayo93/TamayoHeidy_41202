/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 20, 2016, 2:51 PM
 * Purpose: Calculate if the sphere will float or sink based on the weight and
 * radius.
 */

//System Libraries
#include <iostream> //I/O
#include <cmath>

using namespace std;

//User Libraries

//Global Constants
const char PI=4*atan(1);//Value of pi 
float y=62.4f;     //Value of the specific weight of water in lb/ft^3

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare and initialize the variables
    float fb;//Buoyant force of the object
    int weiSph;//Weight of the sphere in lbs
    int raiSph;//Radius of the sphere in ft
    float volSph;//Volume of the sphere
    
    cout<<"This program will help determine whether your sphere will sink or float ";
    cout<<"when thrown into the water."<<endl<<endl;
    
    //Input of the weight and radius length of the sphere
    cout<<"Enter the weight of your sphere in pounds."<<endl;
    cin>>weiSph;
    cout<<"Enter the radius of the sphere in feet."<<endl;
    cin>>raiSph;
    
    //Calculation of the volume of the sphere and the buoyancy
    volSph=4/3*PI*(raiSph)^3;
    fb=volSph*y;
    
    //If else statement to determine if the sphere will sink or float.
    if (fb>=y)
        //Output of results
        cout<<"The sphere will float."<<endl;
    else
        //Output of results
        cout<<"The sphere will sink."<<endl;
    
    //Exit stage right
    return 0;
}

