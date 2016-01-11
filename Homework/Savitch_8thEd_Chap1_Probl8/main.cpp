/* 
 * File:   main.cpp
 * Author: heidy
 * Created on January 10, 2016, 11:08 PM
 */

#include <iostream>
using namespace std;

const char QUART=25;
const char DIME=10;
const char NICKEL=5;

int main(int argc, char** argv) {
    int quarts, dimes, nickls, centsTo;
    cout<<"Enter the amount of quarters."<<endl;
    cin>>quarts;
    cout<<"Enter the amount of dimes."<<endl;
    cin>>dimes;
    cout<<"Enter the amount of nickels."<<endl;
    cin>>nickls;
    centsTo=quarts*QUART+dimes*DIME+nickls*NICKEL;
    cout<<"The coins are worth "<<centsTo<<" cents."<<endl;
    
    return 0;
}

