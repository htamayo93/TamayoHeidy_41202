/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 14, 2016, 2:52 PM
 * Purpose: To calculate the net take home pay for the week, each withholding amount
 * and if the user wishes to repeat the program.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global constants
float SOCSCI=0.06f;
float FED=0.14f;
float STATE=0.05f;
float UNION=10.0f;

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare and initialize variables
    float hours;//Hours worked in a week
    float groPay1;//Gross pay if worked less than overtime
    float groPay2;//Gross pay if worked more than overtime
    float overtim;//overtime pay
    float socsci;//social security tax taken from gross pay
    float fed;//Federal tax taken from the gross pay
    float state;//State tax taken from the gross pay
    float unIon;//Union fee per week
    float health;//Health payment depending on dependents
    float netPay;//Net pay after all taxes
    int depend;//Number of dependents of the user
    char answer;//If you would like to repeat the program
    
    //do while loop to ask the user if they would like to repeat the program
    do {  
        cout<<fixed<<setprecision(2);
        
        //Input requests
        cout<<"How many hours did you worked this week?"<<endl;
        cin>>hours;
        cout<<"How many dependents do you have?"<<endl;
        cin>>depend;
        
        //if else statement depending on the hours worked per week
        if (hours>40)
        {
            /*Calculations of gross pay, social security tax, federal tax, state
            tax*/
            groPay1=16.78*40;
            hours=hours-40;
            overtim=16.78*1.5*hours;
            groPay2=groPay1+overtim;
        
            socsci=SOCSCI*groPay2;
            fed=FED*groPay2;
            state=STATE*groPay2;
            
            //Output of results
            cout<<"               "<<endl;
            cout<<"Your gross pay is $"<<groPay2<<"."<<endl;
            cout<<"Taxes withheld from Social Security tax is $"<<socsci<<"."<<endl;
            cout<<"Taxes withheld from the Federal income tax is $"<<fed<<"."<<endl;
            cout<<"Taxes withheld from the State income tax is $"<<state<<"."<<endl;
            cout<<"Amount withheld from the Union is $"<<UNION<<"."<<endl;
            
            //if else statement depending on the number of dependents
            if (depend>=3)
            {
                health=35;
                
                //Output of results
                cout<<"An additional $"<<static_cast<int>(health);
                cout<<" was taken due to having 3 or more dependents."<<endl;
            }
            else
            {
                health=0;
            }
            
            //Calculation of the net pay
            netPay=groPay2-socsci-fed-state-UNION-health;
            
            //Output of result
            cout<<"Your net pay is $"<<netPay<<"."<<endl;   
        }
        else
        {
            /*Calculations of gross pay, social security tax, federal tax, state
            tax*/
            groPay1=16.78*hours;
        
            socsci=SOCSCI*groPay1;
            fed=FED*groPay1;
            state=STATE*groPay1;
            
            //Output of results
            cout<<"Your gross pay is $"<<groPay1<<"."<<endl;
            cout<<"Taxes withheld from Social Security tax is $"<<socsci<<"."<<endl;
            cout<<"Taxes withheld from the Federal income tax is $"<<fed<<"."<<endl;
            cout<<"Taxes withheld from the State income tax is $"<<state<<"."<<endl;
            cout<<"Amount withheld from the Union is $"<<UNION<<"."<<endl;
            
            //if else statement depending on the number of dependents
            if (depend>=3)
            {
                health=35;
                
                //Output of results
                cout<<"An additional $"<<static_cast<int>(health);
                cout<<" was taken due to having 3 or more dependents."<<endl;
            }
            else
            {
                health=0;
            }
            
            //Calculation of the net pay
            netPay=groPay1-socsci-fed-state-UNION-health;
            
            //Output of result
            cout<<"Your net pay is $"<<netPay<<"."<<endl;
        }
        
        //Output of results
        cout<<"               "<<endl;
        cout<<"Repeat the Program?"<<endl;
        cout<<"Type y for yes or any other character to end the program."<<endl;///If the user would like the program repeated 
        cin>>answer;
    
        }while(answer=='y');
        
    

    return 0;
}

