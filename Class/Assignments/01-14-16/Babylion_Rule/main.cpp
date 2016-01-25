/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 14, 2016, 10:30 AM
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
    //Declare
    
    float n;//Input the e to obtain it's square root
    float r, guess;//Intermediate values which asymptotically approach sqrt (n)
    float tol=0.001f;//Accuracy of the results/tolerance
    int counter=0;//See how many loops it took to get the answer
    
    //Input data
    cout<<"Input the value to computer the sqrt of?"<<endl;
    cin>>n;
    
    //Approximate the square root first pass
    guess=n/2;
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the results
    cout<<"The input value = "<<n<<endl;
    cout<<"sqrt("<<n<<")="<<sqrt(n)<<endl;
    
    //Approximate the square root second pass
    do{
        r=n/guess;
        guess=(guess+r)/2;
        counter++;
    }while (abs((r-guess)/guess)*100>tol);
    
    /*for (counter=0;abs((r-guess)/guess)*100>tol;counter!!)(
    //     r=n/guess;
    //     guess=(guess+r)/2;
      }*/
            
    
    //Output the results
    cout<<"The r        ="<<r<<endl;
    cout<<"The guess    ="<<guess<<endl;
    cout<<"The loop executed "<<counter<<" times"<<endl;
    
    //Exit stage right
    return 0;
}

