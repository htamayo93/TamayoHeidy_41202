/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 12, 2016, 8:02 AM
 * Purpose:To find the weight of the number of boxes of cereal in ounces and metric tons.
 * Also to determine how many boxes will be needed in order to have a metric ton. 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
float METRIC=35273.92f;//conversion of a metric ton to ounces;
float CEREAL=14.0f;//Average weight of cereal in ounces

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Determine the variables and initialize
    float metric;
    float ounces;
    float cereal;
    float boxes;
    
    //Output asking how many boxes of cereal does the user have
    cout<<"How many boxes of cereal do you have?"<<endl;
    
    //Input of how many boxes.
    cin>>cereal;
    
    //Calculation of the weight of cereal and how many boxes of cereal would be needed for 1 metric ton.
    ounces=cereal*CEREAL;
    metric=ounces/METRIC;
    boxes=METRIC/CEREAL;
    
    //Output of results
    cout<<"The weight of your cereal is "<<ounces<<" ounces."<<endl;
    cout<<"The weight of your cereal in metric tons is "<<metric<<endl;
    cout<<"In order to have 1 metric ton of cereal you would need "<<boxes<< " boxes of cereal."<<endl;
    
    //Exit stage right
    return 0;
}

