/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 *Created on February 07, 2016, 3:19 PM
 * Purpose: 
 */

//System Libraries
#include <iostream> //I/O
#include <cstring>  //string 
#include <iomanip>  //Formatting
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

    string stuName[5];
    char letGra[5];
    float stuSco[4],sum[5]={0};
    float stuSco2[4];
    float stuSco3[4];
    float stuSco4[4];
    float stuSco5[4];
    int i;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"This program will allow the user to enter their name and their 4 test"<<endl;
    cout<<"scores. The scores will be taken and used to find the average score of"<<endl;
    cout<<"of the student to determine their letter grade."<<endl;

    for(i=0;i<5;i++)
    {
        cout<<"Please enter your name."<<endl;
        cin>>stuName[i];
    }
    cout<<"Please enter your test scores "<<stuName[0]<<"."<<endl;
    for(i=0;i<4;i++)
    {
        cin>>stuSco[i];
        sum[0]=sum[0]+stuSco[i];
    }
    cout<<"Please enter your test scores "<<stuName[1]<<"."<<endl;
        for(i=0;i<4;i++)
        {
            cin>>stuSco[i];
            sum[1]=sum[1]+stuSco[i];
        }
    cout<<"Please enter your test scores "<<stuName[2]<<"."<<endl;
    for(i=0;i<4;i++)
    {
        cin>>stuSco[i];
        sum[2]=sum[2]+stuSco[i];
    }
    cout<<"Please enter your test scores "<<stuName[3]<<"."<<endl;
    for(i=0;i<4;i++)
    {
        cin>>stuSco[i];
        sum[3]=sum[3]+stuSco[i];
    }
        cout<<"Please enter your test scores "<<stuName[4]<<"."<<endl;
    for(i=0;i<4;i++)
    {
        cin>>stuSco[i];
        sum[4]=sum[4]+stuSco[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<"For "<<stuName[i]<<" the average score was "<<sum[i]/4<<"."<<endl;
        sum[i]=sum[i]/4;
        if (sum[i]>=90){
            cout<<"Your grade is an A."<<endl;}
        else if (sum[i]<=89&&sum[i]>=80){
            cout<<"Your grade is an B."<<endl;}
        else if (sum[i]<=79&&sum[i]>=70){
            cout<<"Your grade is an C."<<endl;}
        else if (sum[i]<=69&&sum[i]>=60){
            cout<<"Your grade is an D."<<endl;}
        else{
            cout<<"Your grade is an F."<<endl;}
    }
        
    //Exit stage right
    return 0;
}