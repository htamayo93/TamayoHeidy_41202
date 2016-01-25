/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 10, 2016, 8:21 PM
 * Purpose: Modification of the program to change the operations from * to a +.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution begins Here
int main(int argc, char** argv) {
    
    //Determine the variables
    int number_of_pods,peas_per_pod, total_peas;
    
    //Output requesting an input from the user
    cout<<"Press return after entering a number."<<endl;
    cout<<"Enter the number of pods:"<<endl;
    
    //Input from the user
    cin>>number_of_pods;
    
    //Output requesting another input from the user
    cout<<"Enter the number of peas in a pod:"<<endl;
    
    //Second input from the user
    cin>>peas_per_pod;
    
    //Calculation determining the total peas
    total_peas=number_of_pods+peas_per_pod;
    
    //Output of results
    cout<<"If you have ";
    cout<<number_of_pods;
    cout<<" peas pods"<<endl;
    cout<<" and ";
    cout<<peas_per_pod;
    cout<<" peas in each pod, then"<<endl;
    cout<<" you have ";
    cout<<total_peas;
    cout<<" peas in all the pods."<<endl;
    
    //Exit stage right
    return 0;
}

