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

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Determine the variables and initialize
    float metric;//Weight of cereal in metric tons
    float ounces;//Weight of cereal in ounces
    int boxes;//Number of boxes needed to have a metric ton
    char answer;//If you would like to repeat the program
    
    do {  
    //Output asking how many ounces the cereal box contains
    cout<<"How many ounces does your cereal box contain?"<<endl;
    
    //Input of how many ounces the cereal box contains.
    cin>>ounces;
    
    //Calculation of the weight of cereal and how many boxes of cereal would be needed for 1 metric ton.
    metric=ounces/METRIC;
    boxes=METRIC/ounces;
    
    //Output of results
    cout<<"The weight of your cereal is "<<ounces<<" ounces."<<endl;
    cout<<"The weight of your cereal in metric tons is "<<metric<<endl;
    cout<<"In order to have 1 metric ton of cereal you would need "<<boxes<< " boxes of cereal."<<endl;
    cout<<"Repeat the Program?"<<endl;
    cout<<"Type y for yes or any other character to end the program."<<endl;///If the user would like the program repeated 
    cin>>answer;
    
    }while(answer=='y');
   
   //Exit stage right
    return 0;
}

