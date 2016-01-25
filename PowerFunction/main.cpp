/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 25, 2016, 8:40 AM
 * Purpose: 
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

//User Libraries

//Global Constants

//Functional Prototypes
int pow(int,int);
using namespace std;

int main(int argc, char** argv) {
    //Variables to be using in timing
    int begi,endi,begd,endd,loop=100000000;//Beginning and Ending of the integer vs. double function
    
    //Declare and initialize the variables
    int x;//Base of the problem
    int y;//Exponent of the problem
    int z;//The result of a^b
    
    //Input data 
    cout<<"Input a and b i.e. for a^b?"<<endl;
    cin>>x>>y;
    
    //Calculate or map inputs to outputs
    begi=static_cast<unsigned int>(time(0));
    for (int i=0;i<=loop;i++)z=pow(x,y);
    endi=static_cast<unsigned int>(time(0));
   
    
    //Output of results
    cout<<"The functions are called "<<loop<<" times"<<endl;
    cout<<"Our Function Result "<<x<<"^"<<y<<"="<<z<<endl;
    cout<<"The total time taken = "<<endi-begi<<"(secs)"<<endl;
    
    //Compare our function with cmath library
    double dx=x;//Copy into a double 
    double dy=y;//Copy into a double
    double dz;
    
    //Call math library function
    begd=static_cast<unsigned int>(time(0));
    for (int i=0;i<=loop;i++)dz=pow(dx,dy);
    endd=static_cast<unsigned int>(time(0));
    
    //Output of results
    cout<<"Library Function Results "<<x<<"^"<<y<<"="<<z<<endl;
    cout<<"The total time taken = "<<endd-begd<<"(secs)"<<endl;
    cout<<"Same as z=exp(y*loge(x))-->"<<exp(dy*log(dx))<<endl;
    
    //Exit stage right
    return 0;
}
//Inputs
//   a->Integer Base
//   b->Integer Power-Exponent
int pow(int a,int b){
    if (b<=0)return 1;
    if (b==1)return a;
    int abd2=pow(a,b/2);
    if (b%2) return abd2*abd2;//If even
    return abd2*abd2;//else old
}