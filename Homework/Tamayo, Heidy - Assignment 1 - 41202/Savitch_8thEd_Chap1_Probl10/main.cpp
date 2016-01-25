/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 11, 2016, 9:37 PM
 * Purpose: Write a program that outputs the single character inputed by the user
 * in the shape of a "c".
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Determine the variables
    char x;
    
    cout<<"Please input one letter of your choice."<<endl;//Asking the user for a character
    //Input of the user 
    cin>>x;
    
    //Output of the input a "c" shape using the character the user inputed
    cout<<"                      "<<x<<endl;

    cout<<"             "<<x<<"                 "<< x<<endl;
    
    cout<<"          "<<x<<"                        "<< x<<endl;
    
    cout<<"      "  <<x<<"                              "<< x<<endl;
    
    cout<<"     "<< x                                     <<endl;
    
    cout<<"     "<<x<<endl;
    
    cout<<"    "<<x<<endl;
    
    cout<<"    "<<x<<endl;
    
    cout<<"     "<< x                                    <<endl;
    
    cout<<"      "  <<x<<"                              "<< x<<endl;
    
    cout<<"          "<<x<<"                        "<< x<<endl;
    
    cout<<"             "<<x<<"                 "<< x<<endl;
    
    cout<<"                      "<<x<<endl;

    //Exit stage right
    return 0;
}

