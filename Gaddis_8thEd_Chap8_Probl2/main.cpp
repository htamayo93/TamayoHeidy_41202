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
int numList(int[], int);

//Execution Begins Here
int main(int argc, char** argv) {

    int accnum[18]={
        13579,26791,26792, };
    int accuse,find;
    
    cout<<"This program will allow a user to enter a charge account number and "<<endl;
    cout<<"the program will determine if the user is valid. "<<endl;
    cout<<endl<<"Please enter the number."<<endl;
    cin>>accuse;
    
    find=numList(accnum,accuse);
    
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
//                      Linear Search
//Inputs:
//  a->Array or List
//  n->Size of List
//  strt->Starting Position
//  val->Value to find
//Outputs:
//  pos->Index where value is found
//******************************************************************************
int numList(int accnum[],int accuse){
    int i=0;
    int pos=-1;
    bool find=false;
    while(i<18&&!find)
    {
        if(accnum[i]==accuse)
        {
            find=true;
            pos=i;
        }
        i++;
    }
    return pos;
}

