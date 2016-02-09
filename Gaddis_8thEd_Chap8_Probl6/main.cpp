/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 *Created on February 07, 2016, 3:19 PM
 * Purpose: 
 */

//System Libraries
#include <iostream>
#include <cstring>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes
void sorTT(string[],int);
void disName(string[],int);

//Execution Begins Here
int main(int argc, char** argv) {

    const int numName=20;
    string names[numName]=
    {"Collins,Bill", "Smith,Bart", "Allen,Jim", "Griffin,Jim", "Stamey,Marty",
     "Rose,Geri", "Taylor,Terri", "Johnson,Jill", "Allison,Jeff", "Looney,Joe",
     "Wolfe,Bill", "James,Jean", "Weaver,Jim", "Pore,Bob", "Rutherford,Greg", 
     "Javens,Renee", "Harrison,Rose", "Setzer,Cathy", "Pike,Gordon", "Holland,Beth"
    };
    
    cout<<"Unsorted names."<<endl;
    disName(names,numName);
    sorTT(names,numName);
   
    cout<<"Sorted names."<<endl;
    disName(names,numName);
            
    return 0;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Sorting the file
//Inputs:
//  a->Array or List
//  n->Size of List
//  strt->Starting Position
//  val->Value to find
//Outputs:
//  pos->Index where value is found
//******************************************************************************
void sorTT(string names[], int numName)
{
    int i,scan;
    string minVal;

    for(int scan=0;scan<(numName-1);scan++)
    {
        i=scan;
        minVal=names[i];
        for(int in=scan+1;in<numName;in++)
        {
            if (names[in]<minVal)
            {
                minVal=names[in];
                i=in;
            }  
        }
        string tem=names[scan];
        names[scan]=minVal;
        names[i]=tem;
    }
    cout<<endl;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Displaying the array
//Inputs:
//  a->Array or List
//  n->Size of List
//  strt->Starting Position
//  val->Value to find
//Outputs:
//  pos->Index where value is found
//******************************************************************************
void disName(string names[], int numName)
{
    for(int i=0;i<numName;i++)
    {
        cout<<names[i]<<endl;
    }
}