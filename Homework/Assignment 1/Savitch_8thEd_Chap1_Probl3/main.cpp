/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 10, 2016, 9:21 PM
 * Purpose: Modification of the second problem in order to divide in the calculation
 * instead of multiplying and testing for an error when dividing by 0.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

int main(int argc, char** argv) {
    
    cout<<"Hello!"<<endl;
    int number_of_pods, peas_per_pod, total_peas;
    cout<<"Press return after entering a number."<<endl;
    cout<<"Enter the number of pods:" <<endl;
    
    cin>>number_of_pods;
    cout<<"Enter the number of peas in a pod:"<<endl;
    cin>>peas_per_pod;
    total_peas=(number_of_pods)/(peas_per_pod);
    cout<<"If you have ";
    cout<<number_of_pods;
    cout<<" peas pods "<<endl;
    cout<<"and ";
    cout<<peas_per_pod;
    cout<<" peas in each pod, then "<<endl;
    cout<<"you have ";
    cout<<total_peas;
    cout<<" peas in all the pods."<<endl;
    cout<<"Good-bye!"<<endl;
    
    return 0;
}

