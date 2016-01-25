/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 *Created on January 23, 2016, 5:00 PM
 * Purpose: To predict the population growth per day based on the initial population
 * size, percentage increase rate and number of days the user inputs.
 */

//System Libraries
#include <iostream> //I/O
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

    //Declare and initialize variables
    int days;//Number of days
    float percent;//Percentage rate
    float increas;//Amount of population increase
   unsigned int pop;//Initial population amount
   
    //Output requesting the initial population amount
    cout<<"This program will predict the size of a population of organisms based ";
    cout<<"on the initial size, their percentage increase and days."<<endl;
    cout<<"Please enter the initial amount of the population."<<endl;
    cin>>pop;
    
    //if loop to determine if the population is abiding by rules
    if (pop<2)
    {
        cout<<"Error:Please enter a correct population amount."<<endl;
    }
    else
    {
        //Requesting second input, the percentage rate
        cout<<"Please enter the population increase as a percentage."<<endl;
        cin>>percent;
        
        //if loop to not allow the user to enter a negative percentage rate
        if (percent<0)
        {
            cout<<"Error: Please enter a correct percentage."<<endl;
        }
        else
        {
            //conversion of percentage rate
            percent=percent/100;
            
            //Output requesting the input of days
            cout<<"Please enter the number of days."<<endl;
            cin>>days;
            
            //if loop to not allow user to enter less than one day
            if (days<1)
            {
                cout<<"Error:Please enter the correct number of days."<<endl;
            }
            else
            {
                //For loop to calculate the population growth per day
                for (int n=1;n<=days;n++)
                {
                    increas=pop*percent;
                    pop=pop+increas;
                    
                    //Output of results
                    cout<<"For day "<<n<<" the population will be "<<pop<<" organisms."<<endl;
                }
            }       
        }
    }
    
    //Exit stage right
    return 0;
}

