/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 *Created on February 07, 2016, 3:19 PM
 * Purpose: 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes
void sort1(int []);
int numlist(int[], int);

//Execution Begins Here
int main(int argc, char** argv) {

    int accnum[18]={
        5658845,4520125,7895122,8777541,8451277,1302850,
        8080152,4562555,5552012,5050552,7825877,1250255,
        1005231,6545231,3852085,7576651,7881200,4581002};
    int accuse,find;
    
    cout<<"This program will allow a user to enter a charge account number and "<<endl;
    cout<<"the program will determine if the user is valid. "<<endl;
    cout<<endl<<"Please enter the number."<<endl;
    cin>>accuse;
    sort1(accnum);
    find=numlist(accnum,accuse);
    
    if(find==-1){
        cout<<"You have enter an invalid number."<<endl;
    }else{
        cout<<"This number is valid."<<endl;
        cout<<accnum[find]<<endl;
    }
    return 0;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Selection Sort Search
//Inputs:
//  a->Array or List
//  n->Size of List
//  strt->Starting Position
//  val->Value to find
//Outputs:
//  pos->Index where value is found
//******************************************************************************
void sort1(int accnum[]){
    //Declare Variables
    int scan,min,lowVal;
    for (scan=0;scan<17;scan++){
        min=scan;
        lowVal=accnum[scan];
        for (int i=scan+1;i<18;i++){
            if (accnum[i]<lowVal){
                lowVal=accnum[i];
                min=i;
            }
        }
        accnum[min]=accnum[scan];
        accnum[scan]=lowVal;
    }
} 
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Linear Search
//Inputs:
//  a->Array or List
//  n->Size of List
//  strt->Starting Position
//  val->Value to find
//Outputs:
//  pos->Index where value is found
//******************************************************************************
int numlist(int accnum[],int accuse){
    int place=-1, begin=0, end=17;
    int center;                       
    bool look = false;   

    while (!look && begin<=end)
    {
        center=(begin+end)/2;
        if (accnum[center]==accuse)
        {
            place=center;
            look=true;            
        }
        else if(accnum[center]>accuse)
        {
            end=center-1;
        }
        else
        {
            begin=center+ 1;
        }
    }
    return place;
}
