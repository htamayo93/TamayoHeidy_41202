/* 
 * File:   main.cpp
 * Author: heidy
 * Created on January 10, 2016, 8:21 PM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int firInt, secInt, sum, product;
    cout<<"The sum of two integers will be solved."<<endl;
    cout<<"Please enter the value of the first integer."<<endl;
    cin>>firInt;
    cout<<"Please enter the value of the second integer."<<endl;
    cin>>secInt;
    sum=firInt+secInt;
    product=firInt*secInt;
    cout<<"The sum of the values entered is "<<sum<<"."<<endl;
    cout<<"The product of the values entered is "<<product<<"."<<endl;

    return 0;
}

