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
int lineSer(int[],int,int&);
int binaSer(int[],int,int&);
void value(int&);

//Execution Begins Here
int main(int argc, char** argv) {

    int array[20]={
        1 , 2, 3, 4, 5, 6, 7, 8, 9,10,
        11,12,13,14,15,16,17,18,19,20};
    int line=0,bina=0,vaLue,lineRes,binaRes;
    
    cout<<"This program will allow a user to search for the value the user wants"<<endl;
    cout<<"based on the array there is."<<endl;
    
    value(vaLue);
    lineRes=lineSer(array,vaLue,line);
    binaRes=binaSer(array,vaLue,bina);
    
    cout<<"The number of times there was a comparison before it found the value was ";
    cout<<value<<"."<<endl;
    cout<<"The linear search was "<<line<<"."<<endl;
    cout<<"The binary search was "<<bina<<"."<<endl;
    return 0;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Getting the value
//Inputs:
//  a->Array or List
//  n->Size of List
//  strt->Starting Position
//  val->Value to find
//Outputs:
//  pos->Index where value is found
//******************************************************************************
void value(int &vaLue)
{
    cout<<"Please enter the value you would like to search for."<<endl;
    cin>>vaLue;
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
int lineSer(int array[],int vaLue,int &line){
    int i=0;
    int pos=-1;
    bool look=false;
    while(i<20&&!look)
    {
        if(array[i]==vaLue)
        {
            look=true;
            pos=i;
        }
        i++;
        if(pos== -1)
        {
            line++;
        }
    }
    return pos;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Binary Search
//Inputs:
//  a->Array or List
//  n->Size of List
//  strt->Starting Position
//  val->Value to find
//Outputs:
//  pos->Index where value is found
//******************************************************************************
int binaSer(int array[], int vaLue, int &bina)
{
	int begin=0, end=19, center,pos=-1;			
	bool look=false;					
	while (!look && begin<=end)
	{
            center=(begin+end)/2;		
            if (array[center]==vaLue)			
            {
                look=true;
                pos=center;
            }
            else if (array[center]>vaLue)
            {
                end=center-1;
            }
            else
            {
                begin=center+1;
            }		
            if (pos==-1)
            {
                bina++;
            }
	}
	return pos;
}