/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 14, 2016, 4:58 PM
 * Purpose: Write a program that plays the game of Mad Lib. 
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Determine the variables and initialize
    //Note:string is used when typing an array of characters
    string tName;//First or last name of your instructor
    string yName;//Your name
    string food;//Food name
    string adj;//Adjective
    string color;//Color name
    string animal;//Animal name
    unsigned int number;//Number between 100-120
    
    //Inputs requests
    cout<<"What is the first or last name of your instructor?"<<endl;
    getline(cin,tName);
    cout<<"What is your name?"<<endl;
    getline(cin,yName);
    cout<<"Name a food."<<endl;
    getline(cin,food);
    cout<<"Enter a number between 100 and 120."<<endl;
    cin>>number;
    cin.ignore(1000,'\n');  
    cout<<"Enter an adjective."<<endl;
    getline(cin,adj);
    cout<<"Type a color."<<endl;
    getline(cin,color);
    cout<<"Enter an animal."<<endl;
    getline(cin,animal);
    
    //Output of results
    cout<<"Dear instructor "<<tName<<","<<endl;
    cout<<"          "<<endl;
    cout<<"I am sorry that I am unable to turn in my homework at this time. First"<<endl;
    cout<<"I ate a rotten "<<food<< ", which made me turn "<<color<<endl;
    cout<<"and extremely ill. I came down with a fever of "<<number<<". "<<endl;
    cout<<"Next, my "<<adj<<" pet "<<animal<<" must have smelled the remains of "<<endl;
    cout<<"the "<<food<<" on my homework because he ate it. I am currently "<<endl;
    cout<<"rewriting my homework and hope you will accept it late."<<endl;
    cout<<"          "<<endl;
    cout<<"sincerely,"<<endl;
    cout<<yName<<endl;
   
   //Exit stage right
    return 0;
}

