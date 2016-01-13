/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 11, 2016, 8:57 AM
 * Purpose: Way to determining how much money will really be earned in a lottery winning
 */

#include <iostream>
using namespace std;


//Global constants
int main(int argc, char** argv) {
    float LUMP=.62f;//Percentage of winnings given if lump sum is taken
    float TAX=.52f;//Tax portion taken from winnings
    float MARRY=.50f;//Marriage portion taken from winnings
    //Declare the variables
    int monWon, lumpSum, afteTax, married;

	cout<<"Type in the value of the lottery winnings (indicate is in millions)"<<endl;
	cin>>monWon;//Input the value of just the millions
	
        lumpSum=monWon*LUMP;//Calculation of the lump sum
	afteTax=TAX*lumpSum*LUMP;//Calculation after the taxes on the lump sum
	married=afteTax*MARRY;//Calculation after the splitting of the lump sum
        
        cout<<"If you were to take the lump sum of the lottery winnings you would get "<<lumpSum<<"."<<endl;
	cout<<"If lump sum is received, there will be a total of "<<static_cast<int>(afteTax)<<" avaliable after tax is taken."<<endl;
	cout<<"If married you will receive "<<static_cast<int>(married)<<" of the lump sum."<<endl;

	return 0;
}