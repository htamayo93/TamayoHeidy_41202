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
void sort(int[]);
int lotlist(int[], int);

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
    
    sort(lottNum);
    find=lotlist(lottNum,lottWin);
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
//                      Selection Sort Search
//Inputs:
//  a->Array or List
//  n->Size of List
//  strt->Starting Position
//  val->Value to find
//Outputs:
//  pos->Index where value is found
//******************************************************************************
void sort(int lottNum[]){
    //Declare Variables
    int scan,min,lowVal;
    for (scan=0;scan<9;scan++){
        min=scan;
        lowVal=lottNum[scan];
        for (int i=scan+1;i<10;i++){
            if (lottNum[i]<lowVal){
                lowVal=lottNum[i];
                min=i;
            }
        }
        lottNum[min]=lottNum[scan];
        lottNum[scan]=lowVal;
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
int lotlist(int lottNum[],int lottWin){
    int place=-1, begin=0, end=(10-1);
    int center;                       
    bool look = false;   

    while (!look && begin<=end)
    {
        center=(begin+end)/2;
        if (lottNum[center]==lottWin)
        {
            place=center;
            look=true;            
        }
        else if (lottNum[center]>lottWin)
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