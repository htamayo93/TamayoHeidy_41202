/* 
 * File:   main.cpp
 * Author: Heidy Tamayo 
 * Created on January 12, 2016, 9:08 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
float DIETSOD=.001f;//Soda contains 1/10th of 1% artificial sweetener
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    float weiMou;
    float myWei;
    float soda;
    float sweet;
    int death;
    char answer;
    
  do{  
    cout<<"What is the weight of the mouse (lbs)?"<<endl;
    cin>>weiMou;
    cout<<"How much sweetener is needed to kill the mouse?"<<endl;
    cin>>sweet;
    cout<<"What is your desired weight (lbs)?"<<endl;
    cin>>myWei;
    
    soda=DIETSOD*weiMou;
    death=soda/myWei;
    
    cout<<"The weight of the mouse is "<<weiMou<<"."<<endl;
    cout<<"Your desired weight is "<<myWei<<"."<<endl;
    cout<<"In order to reach your desired weight without dying is "<<death<<"."<<endl;
    cout<<"Repeat the Program?"<<endl;
    cout<<"Type y for yes or any other character to end the program."<<endl;///If the user would like the program repeated 
    cin>>answer;
    }while (answer=='y');
    
    return 0;
}

