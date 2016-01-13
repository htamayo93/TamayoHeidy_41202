/* 
 * Author: Kayla Rodriguez
 * Created on January 13, 2016, 10:20 AM
 * Purpose: Tax Calculator
 */
 
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
 
//User Libraries
 
//Global Constant
 unsigned short CNVPERC=100;
//Function Prototypes
 
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    short incomeG;  //income before taxes are taken out
    int taxRate; //Rate being taxed
    short incomeN; //net income
    short aTook;   //amount of money taken out
 
    //Input data
    cout<<"What is your Gross income is ";
    cin>>incomeG;
    cout<<"What percentage are you being taxed? ";
    cin>>taxRate;
    cout<<"                   "<<endl;
    
    //Calculate or map inputs to outputs
    aTook=taxRate*incomeG/CNVPERC; 
    incomeN=incomeG-aTook;        
 
    //Output the results
    cout<<"Your Gross income is "<<incomeG<<endl;
    cout<<"You are being taxed "<<taxRate<<"%"<<endl;
    cout<<"Your net income is "<<incomeN<<endl;    
    cout<<"                   "<<endl;
    
    //2nd Calculation 
    incomeG=incomeG+5000;
    taxRate=taxRate+5;
    
    aTook=taxRate*incomeG/CNVPERC; 
    incomeN=incomeG-aTook;        
 
    //Output the results
    cout<<"Your Gross income is "<<incomeG<<endl;
    cout<<"You are being taxed "<<taxRate<<"%"<<endl;
    cout<<"Your net income is "<<incomeN<<endl;
    cout<<"                   "<<endl;
    
    //Third Calculation
    incomeG=incomeG+5000;
    taxRate=taxRate+5;
    
    aTook=taxRate*incomeG/CNVPERC; 
    incomeN=incomeG-aTook;        
 
    //Output the results
    cout<<"Your Gross income is "<<incomeG<<endl;
    cout<<"You are being taxed "<<taxRate<<"%"<<endl;
    cout<<"Your net income is "<<incomeN<<endl;
    cout<<"                   "<<endl;
 
 
    //Exit stage right
 
    return 0;
}
 
 