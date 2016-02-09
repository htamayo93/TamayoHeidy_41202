/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 *Created on February 07, 2016, 3:19 PM
 * Purpose: 
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

    char answrkey[20]={'A','D','B','B','C','B','A','B','C','D','A','C','D','B','D','C','C','A','D','B'};
    char answruse[20];
    int sum=0,i;
    
    cout<<"This program will determine the answers that are correct from the user";
    cout<<" based on the answer key that was provided from the Driver's License Office."<<endl;
    cout<<"Please enter the answers from the exam. Make sure to enter from one to twenty "<<endl;
    cout<<"in the correct order."<<endl;
    for (i=0;i<20;i++)
    {
        cin>>answruse[i];
        answruse[i]=toupper(answruse[i]);
    }
    for (i=0;i<20;i++){
        if(answrkey[i]==answruse[i])
        {
            sum++;
        }
    }
    cout<<"Your answers were:";
    for (i=0;i<20;i++){
        cout<<answruse[i]<<endl;}
    if (sum>=15){
        cout<<"You passed the exam!"<<endl;}
    else{
        cout<<"You failed the exam."<<endl;}
    cout<<"You answered "<<sum<<" of 20 correct."<<endl;
    cout<<"You answered "<<20-sum<<" incorrectly."<<endl;
    for (i=0;i<20;i++){
        if (!(answrkey[i]==answruse[i])){
            cout<<"You have answered number "<<i+1<<" incorrectly."<<endl;}}
       

    //Exit stage right
    return 0;
}