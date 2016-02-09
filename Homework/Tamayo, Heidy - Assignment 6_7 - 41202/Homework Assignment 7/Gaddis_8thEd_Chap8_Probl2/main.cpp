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
int lotList(int[], int);

//Execution Begins Here
int main(int argc, char** argv) {

    int lottNum[10]={
        13579,26791,26792,33445,55555,
        62483,77777,79422,85647,93121};
    int lottWin;
    int find;
    
    cout<<"This program will allow a user to enter a number to determine if they"<<endl;
    cout<<"have won the lottery."<<endl;
    cout<<"Please enter your lottery number."<<endl;
    cin>>lottWin;
    
    find=lotList(lottNum,lottWin);
    if(find==-1)
    {
        cout<<"You did not win the lottery :(."<<endl;
    }
    else
    {
        cout<<"You won the lottery! :D"<<endl;
        cout<<lottNum[find]<<endl;
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
int lotList(int lottNum[],int lottWin){
    int i=0;
    int pos=-1;
    bool look=false;
    while(i<10&&!look)
    {
        if(lottNum[i]==lottWin)
        {
            look=true;
            pos=i;
        }
        i++;
    }
    return pos;
}

