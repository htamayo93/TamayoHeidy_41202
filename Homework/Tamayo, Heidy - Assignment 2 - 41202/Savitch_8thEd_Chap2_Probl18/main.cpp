
/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 14, 2016, 7:16 PM
 * Purpose: To calculate how much chocolate should be eaten in order to maintain
 * the BMR based on sex, weight, height, and age.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
float CHOC=230.0f;

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Determine the variables and initialize
    char sex;//Sex of the user
    float weight;//Weight of user in LBS
    float height;//Height of user in Inches
    float age;//Age of user in years
    float bmrMan;//BMR equation for a man
    float bmrWom;//BMR equation for a woman
    float choc=0;//Amount of chocolate that should be consumed
     
    //Input requests
    cout<<setprecision(4)<<endl;
    cout<<"What is your sex? Please enter 'M' or 'F'."<<endl;
    cin>>sex;
    cout<<"What is your weight (lbs)?"<<endl;
    cin>>weight;
    cout<<"How tall are you? (inches)?"<<endl;
    cin>>height;
    cout<<"How old are you? (years)"<<endl;
    cin>>age;
    
    //Switch calculation based on gender
    switch (sex)
    {
        case 'M':
            bmrMan=66+(6.3*weight)+(12.9*height)-(6.8*age);
            choc=bmrMan/CHOC;
        break;
        case 'F':
            bmrWom=655+(4.3*weight)+(4.7*height)-(4.7*age);
            choc=bmrWom/CHOC;
    }
    
    //Output of results
    cout<<"You inputed "<<sex<<" as your sex."<<endl;
    cout<<"Your weight and height are "<<weight<<" pounds and "<<height<<" inches respectfully."<<endl;
    cout<<"In order to maintain your weight you should consume "<<choc<< " chocolates."<<endl;
   
   //Exit stage right
    return 0;
}