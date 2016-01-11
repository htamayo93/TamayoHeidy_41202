/* 
 * File:   main.cpp
 * Author: heidy
 *
 * Created on January 10, 2016, 8:21 PM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int number_of_pods, peas_per_pod, total_peas;
    
    cout<<"Press return after entering a number."<<endl;
    cout<<"Enter the number of pods:"<<endl;
    cin>>number_of_pods;
    cout<<"Enter the number of peas in a pod:"<<endl;
    cin>>peas_per_pod;
    total_peas=number_of_pods*peas_per_pod;
    cout<<"If you have ";
    cout<<number_of_pods;
    cout<<" peas pods"<<endl;
    cout<<" and ";
    cout<<peas_per_pod;
    cout<<" peas in each pod, then"<<endl;
    cout<<" you have ";
    cout<<total_peas;
    cout<<" peas in all the pods."<<endl;
    return 0;
}

