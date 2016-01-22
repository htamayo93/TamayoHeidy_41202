/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 21, 2016, 08:14 AM
 * Purpose: Calculation the interest of a user based on their account balance
 * the minimum payment the user needs to make.
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
    
    //Declare and initialize variables
    float account;//The account balance of the user
    float account1;
    float inter1=0.015f;//Interest rate of 1.5% for the first $1000
    float inter2=0.01f;//Interest rate of 1.0% for after $1000
    float inte1;//Interest for first $1000
    float inte2;//Interest for after $1000
    float intTot;//Total interest the user needs to pay
    float minPay;//The minimum payment the user needs to pay
    float totPay;//The total payment the user needs to pay
    char decisin;//Decision of the user if they wants to redo the calculation
  
  do{
        //Input of the user's account balance
        cout<<"Input the balance of the account."<<endl;
        cin>>account;

        cout<<fixed<<setprecision(2)<<showpoint<<endl;
        //if else statement to determine the amount of interest the user has
        if (account<=1000)
        {  intTot=inter1*account;
            //Output of results
            cout<<"Your interest is $"<<intTot<<"."<<endl;
        }
        else
        {    
            inte1=inter1*1000;
            account1=account-1000;
            inte2=account1*inter2;
            intTot=inte1+inte2;
            //Output of results
            cout<<"Your interest is $"<<intTot<<"."<<endl;
        }

        //calculation of the total amount the user owes
        totPay=intTot+account;

        //Output of results
        cout<<"Your Total payment is $"<<totPay<<"."<<endl;

        //if else if statement to determine how much of a minimum payment the user needs to make
        if (totPay<=10)
        {
            //Output of results
            cout<<"Please pay $"<<totPay<<" as your minimum payment.";
        }
        else if (totPay>10)
        {
            minPay=totPay*0.10;
            if (minPay>10)
            //Output of results
            cout<<"Please pay $"<<minPay<<" as your minimum payment.";
            else
            //Output of results
            cout<<"Please pay $10 as your minimum payment."<<endl;
        }
        cout<<endl;
        
        //Asking user if they would like to repeat the program
        cout<<"Would you like to repeat the program?"<<endl;
        cout<<"Type y for yes and anything else to exit."<<endl;
        cin>>decisin;
        decisin=toupper(decisin);
    }while (decisin=='Y');  

    //Exit stage right
    return 0;
}