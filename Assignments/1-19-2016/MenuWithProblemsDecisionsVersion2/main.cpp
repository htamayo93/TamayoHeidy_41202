/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 19, 2016, 11:17 AM
 * Purpose: Room Capacity
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare and initialize Variables
    unsigned short nSoltn;//Problem solution to display
    bool reDsply=true;//Exit program when false
    

    
    //Menu to Display Solution
    do{
            //Input problems to display, i.e. Menu
        cout<<"Assignment 3 Problem Set"<<endl;
        cout<<"Type 1 to Display Problem 1 "<<endl;
        cout<<"Type 2 to Display Problem 2 "<<endl;
        cout<<"Type 3 to Display Problem 3 "<<endl;
        cout<<"Type anything else to exit  "<<endl;
        cin>>nSoltn;\

        //Solutions to all the problems
        switch (nSoltn){
            case 1:{
                cout<<endl<<"solution to Problem 1"<<endl;
                break;
            }
            case 2:{
                cout<<endl<<"solution to Problem 2"<<endl;
                break;
            }
            case 3:{
                cout<<endl<<"solution to Problem 3"<<endl;
                break;
            }
            default:{
                cout<<"Exiting the Program"<<endl;
                reDsply=false;
            }
        }
    }while(reDsply);
    
    //Exit stage right
    return 0;
}

