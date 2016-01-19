/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 19, 2016, 10:36 AM
 * Purpose: Factorial 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare and initialize Variables
    unsigned int n,factN=1;//N and N!
   
    //Input data
    cout<<"Enter the number you would like to compute the factorial n!"<<endl;
    cout<<"The limit of this calculation is <=13"<<endl;
    cin>>n;
    
    //Calculate the factorial
    for (int i=1;i<=n;i++){
        factN*=i;
    }
    //Output the results
    cout<<n<<"!="<<factN<<endl;
    
    //Higher than 13 factorial would give you an overflow
    //Exit stage right
    return 0;
}

