/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 20, 2016, 11:13 AM
 * Purpose: Table of Salary Doubling starting at a penny
 *          Double is required because of number of significant digits
 *          Anything larger than $99,999.99 requires a double
 */

//System Libraries
#include <iostream> //I/O
#include <iomanip>  //Formatting
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //The problem to solve
    cout<<"Solution to Gaddis 8thEd Chap5 Prob7"<<endl;
    
    //Declare variables
    unsigned int salary=1;   //Salary starting at a penny
    double totPay=salary;    //Total pay be summing the salary, only in this occasion do we use a double
    unsigned int days;       //Number of days user wants to calculate
    
    cout<<"Please enter the number of days you would like to have calculated."<<endl;
    cin>>days;
    
    //if else loop to not allow the user to input less than one day
    if (days<1)
    {
        cout<<"Error:Please enter a correct number of days!"<<endl;
    }
    else
    {
        //Loop to generate the Salary Table and Total Paid
        cout<<endl<<"      Display a Salary Table"<<endl<<endl;
        cout<<"  Day        $Salary        $Total"<<endl;
        cout<<setw(4)<<1<<setw(15)<<salary/100.0f<<setw(15)<<totPay/100.0f<<endl;
        cout<<fixed<<setprecision(2)<<showpoint;
        for(int day=2;day<=days;day++)
        {
            salary<<=1;//Or can also do salary*=2
            totPay+=salary;
            cout<<setw(4)<<day<<setw(15)<<salary/100.0f<<setw(15)<<totPay/100.0f<<endl;
        }
    }
    
    //Exit stage right
    return 0;
}