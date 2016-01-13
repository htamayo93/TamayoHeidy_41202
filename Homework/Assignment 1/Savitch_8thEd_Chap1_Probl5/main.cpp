/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 10, 2016, 8:21 PM
 * Purpose: To find the sum and product of two integers
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libaries

//Global Constant

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Determine the variables
    int firInt, secInt, sum, product;
    
    //Output requesting the inputs from the user
    cout<<"The sum of two integers will be solved."<<endl;
    cout<<"Please enter the value of the first integer."<<endl;
    
    //First input from the user
    cin>>firInt;
    
    //Requesting the second integer from the user
    cout<<"Please enter the value of the second integer."<<endl;
    
    //Second input from the user
    cin>>secInt;
    
    //Calculation of the integers
    sum=firInt+secInt;
    product=firInt*secInt;
    
    //Output of results
    cout<<"The sum of the values entered is "<<sum<<"."<<endl;
    cout<<"The product of the values entered is "<<product<<"."<<endl;
    
    //Exit stage right
    return 0;
}

