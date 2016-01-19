/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 19, 2016, 11:47 AM
 * Purpose: Approximate value of pi
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare and initialize Variables for etox
    const unsigned char nTerms=13;
    float pie=1,x;
    float pi;
    
    //Input the value x
    cout<<"Input x of e^x computation"<<endl;
    cin>>x;
    
    //Calculate e^x
    for(int n=1;n<=nTerms;n++){
        
        //Declare and initialize Variables
   
        //Calculate the factorial
        for (int i=1;i<=n;i++){
            pie=((-1)^n)/(2*n+1);
        }
        pi=4*pie
    }
    
    //Output the results
    cout<<"The approx value of pi"<<x<<"="<<pi<<endl;

    //Exit stage right
    return 0;
}