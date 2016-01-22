/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 20, 2016, 12:56 PM
 * Purpose: To calculate PI.
 */

//System Libraries
#include <iostream> //I/O
#include <iomanip>  //Formatting
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
const float PI=4*atan(1);

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Problem that will be solved
    cout<<"The finite sum for PI"<<endl;
    
    //Declare and initialize Variables for the approximation of PI
    float aproxPi=1;       //Approximate value of PI in order to begin
    unsigned int numTerm;  //Number of terms to limit summation of PI
    char sign=-1;          //Alternating sign in the sequence
    
    //Input the number of terms wanted in the sequence
    cout<<"Input the number of Terms wanted to approximate the value of PI"<<endl;
    cin>>numTerm;
    
    //Approximation of PI/4
    for(int i=2,j=3;i<=numTerm;i++,j+=2)
    {
        aproxPi+=(sign/static_cast<float>(j));
        sign*=-1;
    }
    aproxPi*=4;//Multiplied by 4 once to get PI approximation
    
    //Output the results
    cout<<"The exact value of PI is "<<PI<<endl;
    cout<<"The number of terms it took for the approximation was "<<numTerm<<"."<<endl;
    cout<<"The approximate value of PI is "<<aproxPi<<endl;

    //Exit stage right
    return 0;
}

