/* 
 * File:   main.cpp
 * Author: Heidy Tamay
 * Created on January 13, 2016, 10:44 AM
 * Purpose: Calculate the Square Root by the Babylonian/Newton's Method
 */

//System Libaries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float n;//Input the value to obtain it's square root
    float r,guess;//Intermediate values which asymptotically approach sqrt (n))
    
    //Input data
    cout<<"Input the value to compute the sqrt of?"<<endl;
    cin>>n;
    
    //Approximate the square root first pass
    guess=n/2;//Only perform once to start the process
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the results
    cout<<"The input value      = "<<n<<endl;
    cout<<"sqrt("<<n<<")= "<<sqrt(n)<<endl;
    cout<<"The first pass r     = "<<r<<endl;
    cout<<"The first pass guess = "<<guess<<endl;
    
    //Approximate the square root second pass
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the results
    cout<<"The Second pass r    = "<<r<<endl;
    cout<<"The Second pass guess = "<<guess<<endl;
    
    //Approximate the square root third pass
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the results
    cout<<"The Third pass r    = "<<r<<endl;
    cout<<"The Third pass guess = "<<guess<<endl;
    
    //Approximate the square root fourth pass
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the results
    cout<<"The Fourth pass r    = "<<r<<endl;
    cout<<"The Fourth pass guess = "<<guess<<endl;
    
    //Approximate the square root fifth pass
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the results
    cout<<"The Fifth pass r    = "<<r<<endl;
    cout<<"The Fifth pass guess = "<<guess<<endl;
    
    //Approximate the square root sixth pass
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the results
    cout<<"The Sixth pass r    = "<<r<<endl;
    cout<<"The Sixth pass guess = "<<guess<<endl;
    
    //Exit stage right
    return 0;
}

