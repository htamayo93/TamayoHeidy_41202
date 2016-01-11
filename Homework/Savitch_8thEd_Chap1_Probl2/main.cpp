/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 10, 2016, 9:21 PM
 * Purpose: Modifying the first problem to include "Hello" and "Good-bye" in the
 * program. 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    cout<<"Hello!"<<endl;//Indicating to greet the user
    
    //Declaring the variables
    int number_of_pods, peas_per_pod, total_peas;
    
    //Output of request
    cout<<"Press return after entering a number."<<endl;
    cout<<"Enter the number of pods:" <<endl;
    
    //Input of number of pods
    cin>>number_of_pods;
    
    //Output of second request
    cout<<"Enter the number of peas in a pod:"<<endl;
    
    //Input of peas per pod
    cin>>peas_per_pod;
    
    //Calculation of total peas in all pods
    total_peas=number_of_pods*peas_per_pod;
    
    //Output of results
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
    
    //Exit stage right
    return 0;
}

