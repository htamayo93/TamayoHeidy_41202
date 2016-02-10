/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 29, 2016, 5:15 PM
 * Purpose:
 */

//System Libraries
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
        //Declare and initialize variable  
        string choice1, choice2, choice3, choice4;
        string compran1, compran2, compran3, compran4, compran5, compran6;
        char answer;
        int n,a,b,c,d;
        char hint;
        
    do
    {
        cout<<"This program will run the game known as Mastermind where you are given"<<endl;
        cout<<"10 chances to guess the 4 colors the computer picked randomly. The order"<<endl;
        cout<<"of the colors also matters in this game."<<endl;
        
        
        srand (time(NULL));
        //Determining first color
        a=rand() % 6;	
        {
        if (a==0) {
                compran1="red";
        }
        else if (a==1) {
                compran1="blue";
        }
        else if (a==2) {
                compran1="yellow";
        }
        else if (a==3) {
                compran1="black";
        }
        else if (a==4) {
                compran1="orange";
        }
        else if (a==5) {
                compran1="green";
        }
        else if (a==6){
                compran1="white";
        }
        else if (a==7){
                compran1="brown";
        }
        }

        //Determining the second color
        b=rand() % 6;	
        {
        if (b==0) {
                compran2="red";
        }
        else if (b==1) {
                compran2="blue";
        }
        else if (b==2) {
                compran2="yellow";
        }
        else if (b==3) {
                compran2="black";
        }
        else if (b==4) {
                compran2="orange";
        }
        else if (b==5) {
                compran2="green";
        }
        else if (b==6){
                compran2="white";
        }
        else if (b==7){
                compran2="brown";
        }
        }

        //Determining the third color
        c=rand() % 6;
        {
        if (c==0) {
                compran3="red";
        }
        else if (c==1) {
                compran3="blue";
        }
        else if (c==2) {
                compran3="yellow";
        }
        else if (c==3) {
                compran3="black";
        }
        else if (c==4) {
                compran3="orange";
        }
        else if (c==5) {
                compran3="green";
        }
        else if (c==6){
                compran3="white";
        }
        else if (c==7){
                compran3="brown";
        }
        }

        //Determining the fourth color
        d=rand() % 6;	
        {
        if (d==0) {
                compran4="red";
        }
        else if (d==1) {
                compran4="blue";
        }
        else if (d==2) {
                compran4="yellow";
        }
        else if (d==3) {
                compran4="black";
        }
        else if (d==4) {
                compran4="orange";
        }
        else if (d==5) {
                compran4="green";
        }
        else if (d==6){
                compran4="white";
        }
        else if (d==7){
                compran4="brown";
        }
        }
        //for (n=1;n<=10;n++)
        //{
            cout<<"Please pick your first color you would want displayed going from"<<endl;
            cout<<"left to right."<<endl;
            cin>>choice1;
            cout<<"The second color."<<endl;
            cin>>choice2;
            cout<<"The third color."<<endl;
            cin>>choice3;
            cout<<"The fourth color."<<endl;
            cin>>choice4;
            
         
        //}
        
       
       
        cout<<choice1<<"  "<<choice2<<"  "<<choice3<<"  "<<choice4<<endl;
        cout<<compran1<<"  "<<compran2<<"  "<<compran3<<" "<<compran4<<endl;
        
        
        

        


    
        cout<<"Would you like to play again?"<<endl;
        cin>>answer;
        answer=toupper(answer);
    }while(answer=='Y');
    
    return 0;
}

