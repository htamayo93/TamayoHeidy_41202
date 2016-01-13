/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 11, 2016, 8:57 AM
 * Purpose: Display table and compare swaps
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    bool x=true;
    bool y=true;
    
    //Create Heading 
    cout<<"X Y  !X !Y  X&&Y  X||Y  X^nY  (X^nY)^nY  (X^nY)^nX !(X&&Y)  !X||!Y  !(X||Y)  !X&&!Y "<<endl;
    
    //First Row
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"   ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"        ";
    cout<<((x^y)^y?'T':'F')<<"           ";
    cout<<((x^y)^x?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"        ";
    cout<<(!(x||y)?'T':'F')<<"        ";
    cout<<(!x&&!y?'T':'F')<<"      "<<endl;
    
    //Second Row
    x=true;y=false;
   cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"   ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"        ";
    cout<<((x^y)^y?'T':'F')<<"           ";
    cout<<((x^y)^x?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"        ";
    cout<<(!(x||y)?'T':'F')<<"        ";
    cout<<(!x&&!y?'T':'F')<<"      "<<endl;
    
    //Third Row
    x=false;y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"   ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"        ";
    cout<<((x^y)^y?'T':'F')<<"           ";
    cout<<((x^y)^x?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"        ";
    cout<<(!(x||y)?'T':'F')<<"        ";
    cout<<(!x&&!y?'T':'F')<<"      "<<endl;
    
    //Fourth Row
    x=false;y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"   ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"        ";
    cout<<((x^y)^y?'T':'F')<<"           ";
    cout<<((x^y)^x?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"        ";
    cout<<(!(x||y)?'T':'F')<<"        ";
    cout<<(!x&&!y?'T':'F')<<"      "<<endl;
    
    int a,b,temp;
    //Swap using temp
    a=2,b=3;
    cout<<"a is "<<a<<endl;
    cout<<"b is "<<b<<endl;
    //Swap using exclusive or operator
    a=temp;
    a=b;
    b=temp;
    cout<<"a is "<<a<<endl;
    cout<<"b is "<<temp<<endl;
    
    
    //Exit stage right
    return 0;
}

