/* 
 * File:   main.cpp
 * Author: Heidy Tamayo 
 * Created on January 12, 2016, 9:08 AM
 * Purpose: To find how much soda pop the user should be allowed to drink based
 * on their desired weight.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    float weiMou;//Weight of mouse in LBS
    float myWei;//Desired weight of the user in LBS
    float soda;//Amount of sweetener
    float sweet;//Amount of sweetener that killed the mouse
    int death;//Amount of soda that can be consumed before dying
    char answer;//Input if user would like to repeat the program
    float DIETSOD=.001f;//Soda contains 1/10th of 1% artificial sweetener
    unsigned int n=1;//Amount of soda
    
    //Do while loop to repeat program as the user wishes
    do{
    //Input requests
    cout<<"What is the weight of the mouse (lbs)?"<<endl;
    cin>>weiMou;
    cout<<"How much sweetener is needed to kill the mouse in lbs?"<<endl;
    cin>>sweet;
    cout<<"What is your desired weight (lbs)?"<<endl;
    cin>>myWei;
    
    death=sweet/weiMou;//amount of sweetener will
    
    //While loop to calculate how much soda can be consumed
    while (death>(soda/myWei))
    {
        soda=DIETSOD*n;//amount of sweetener per soda  
        n=n+1;
    }
    //Output of results
    cout<<"                           "<<endl;
    cout<<"The weight of the mouse is "<<weiMou<<" pounds."<<endl;
    cout<<"Your desired weight is "<<myWei<<" pounds."<<endl;
    cout<<"In order to reach your desired weight without dying you should take no more than "<<n;
    cout<<" sodas."<<endl;
    cout<<"                                  "<<endl;
    cout<<"Would you like to repeat the program?"<<endl;
    cout<<"Type for y for yes and another character to end the program."<<endl;
    cin>>answer;
    cout<<"       "<<endl;
    
    }while (answer=='y');
    
    //Exit stage right
    return 0;
}