/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 *Created on January 24, 2016, 5:19 PM
 * Purpose: To enter an integer and then have an output of the summation of all 
 * integers in between.
 */

//System Libraries
#include <iostream>  //I/O
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

    //Declare and initialize variables
    unsigned int sum=0;//Summation of the positive integers
    int integer;//Number the integer the user will input
    unsigned int n;//increment of the function
    
    //Output request to put the input of integers the user wishes 
    cout<<"This program will tell you the sum of the number of the positive integer value.";
    cout<<"Please enter the integer value."<<endl;
    cin>>integer;
    
    //If statement to ensure a positive integer is entered 
    if (integer<0)
    {
        cout<<"Error: Please enter positive integers only."<<endl;
    }
    else
    {
        //For loop to calculate the sum of the integers entered/Output of results
        for(n=1;n<=integer;n++)
        {
            sum=sum+n;
            cout<<"The sum of the number 0 to "<<n<<" is "<<sum<<"."<<endl;
        }
    }
    
    //Exit stage right
    return 0;
}