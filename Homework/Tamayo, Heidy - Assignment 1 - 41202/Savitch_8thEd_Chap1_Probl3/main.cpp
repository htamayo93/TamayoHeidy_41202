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

//Execution Begins Here
int main(int argc, char** argv) {
   
    //output welcoming the user
    cout<<"Hello!"<<endl;
    
    //Determine the varibles
    int number_of_pods, peas_per_pod, total_peas;
    
    //Output requesting the inputs from the user
    cout<<"Press return after entering a number."<<endl;
    cout<<"Enter the number of pods:" <<endl;
    
    //Input the value of the number of pods
    cin>>number_of_pods;
    
    //Output requesting for another input
    cout<<"Enter the number of peas in a pod:"<<endl;
    
    //Input of the second value
    cin>>peas_per_pod;
    
    //Calculation of the total peas
    total_peas=(number_of_pods)/(peas_per_pod);
    
    //Final output/output with results
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

