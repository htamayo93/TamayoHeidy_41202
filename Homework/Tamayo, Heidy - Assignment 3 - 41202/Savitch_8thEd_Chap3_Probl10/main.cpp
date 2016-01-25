/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 20, 2016, 10:20 PM
 * Purpose: Determines the crud population growth based on days user inputs
 */

//System Libraries
#include <iostream> //I/O
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //The problem to solve
    cout<<"This program will run the Fibonacci sequence to determine the crude growth";
    cout<<" based on the number of days"<<endl;
    
    //Declaration of variables
    unsigned int fi,fi1,fi2;//Designations in the sequence
    unsigned short numTerm;//Number of terms  user inputs
    unsigned short counter;//Current position in the sequence
    const char REPRO=5;//Number of days it takes to reproduce
    float crudWei;//The weight of the crud
    unsigned int numDay;// The number of days to grow the crud
    
    //Initializing the sequence
    fi2=fi1=1; //Start of the sequence
    counter=2; //Initializing the counter
    
    //Asks user to input the weight of the crud and days
    cout<<"Please enter the initial weight of the crud in pounds."<<endl;
    cin>>crudWei;
    cout<<"How many days will the crud be allowed to grow?"<<endl;
    cin>>numDay;
    
    //Calculating the number of terms the user inputted
    numTerm=numDay/REPRO+1;
    
    //Output or calculation of the output that is required
    if(numTerm==1)
    {
        cout<<"After "<<numDay<<" days the crud will weigh "<<fi2*crudWei<<"(lbs)"<<endl<<endl;
    }
    else if (numTerm==2) 
    {
        cout<<"After "<<numDay<<" days the crud will weigh "<<fi1*crudWei<<"(lbs)"<<endl<<endl;
    }
    else
    {
        do
        {
            fi=fi1+fi2;
            counter++;
            fi2=fi1;
            fi1=fi;
        }while(counter<numTerm);
        cout<<"After "<<numDay<<" days the crud will weigh "<<fi*crudWei<<"(lbs)"<<endl<<endl;
    }

    //Exit stage right
    return 0;
}
