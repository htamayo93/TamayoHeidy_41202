/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 14, 2016, 8:25 AM
 * Purpose:To find the new price of an item after n years by the rate of 
 * inflation the user inputs.
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

float CNV=.01f;

int main(int argc, char** argv) {
    int years;//Number of years the user wants to know the price of
    int n;//Value of year starting from 0 and increasing by 1
    float rate;//Rate of inflation in percentage
    float r;//Rate once converted to decimal
    float item;//Initial price of the item
    float price;//Price of item after n years and rate
    float newPric;//New price of the item
    string name;//name of the item
    
    cout<<fixed<<setprecision(2);
    cout<<"What is the item we will be checking the price on?"<<endl;
    getline(cin, name);
    cout<<"What is the price of the item?"<<endl;
    cin>>item;
    cout<<"What is the percent rate of inflation?"<<endl;
    cin>>rate;
    cout<<"How many years from now would you like calculated the price of the item?"<<endl;
    cin>>years;
    
    r=rate*CNV;
    n=1;
    
    while (n<years)
    {
        price=item*n*r;
        newPric=price+item;
        n=n+1;
    }
    cout<<"After "<<years<<" years the cost of "<<name<<" will be $"<<newPric<<"."<<endl;
    //cout<<price<<endl;
    return 0;
}

