/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 10, 2016, 8:21 PM
 * Purpose:Testing the program from Display 1.8/Ensuring the program is written 
 * point by point.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Functions Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int number_of_pods, peas_per_pod, total_peas;//Would use up to 7 Characters in actual problems
    
    //Output of request
    cout<<"Press return after entering a number."<<endl;
    cout<<"Enter the number of pods:"<<endl;
    
    //Input of number of pods
    cin>>number_of_pods;
    
    //Output of second request
    cout<<"Enter the number of peas in a pod:"<<endl;
    
    //Input of number of peas per pod
    cin>>peas_per_pod;
    
    //Calculation of total peas in all pods
    total_peas=number_of_pods*peas_per_pod;
    
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

