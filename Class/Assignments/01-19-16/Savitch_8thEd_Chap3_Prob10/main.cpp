/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 19, 2016, 8:22 AM
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
    
    //The problem to solve
    cout<<endl<<"Solution to Savitch 8thEd Chap 3 Prob10"<<endl;
    cout<<endl<<"The Fibonacci sequence"<<endl<<endl;
    //Declare and initialize Variables
        unsigned int fi,fim1,fim2;//Designations in the sequence
        unsigned short nTerms;    //Number of terms in the sequence
        unsigned short counter;   //Current position in the sequence
    //Initialize the sequence
        fim2=fim1=1;              //Start the sequence
        counter=2;                //Initialize the counter
    //Input the number of terms in the sequence
        cout<<"Input the number of terms in the sequence"<<endl;
        cin>>nTerms;
    //Output or calculate the output required
        if(nTerms==1){
            cout<<"Term "<<nTerms<<" in the sequence = "
            <<fim2<<endl<<endl;
        }else if (nTerms==2){
            cout<<"Term "<<nTerms<<" in the sequence = "
            <<fim2<<endl<<endl;
        }else{
            do{
                fi=fim1+fim2;
                counter++;
                fim2=fim1;
                fim1=fi;
            }while(counter<nTerms);
            cout<<"Term "<<nTerms<<" in the sequence = "
            <<fi<<endl<<endl;
        }

    //Exit stage right
    return 0;
}

