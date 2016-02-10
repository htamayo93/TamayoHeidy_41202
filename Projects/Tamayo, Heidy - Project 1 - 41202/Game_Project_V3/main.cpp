/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 29, 2016, 5:15 PM
 * Purpose:
 */

//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
        //Declare and initialize variable  
        string choice1, choice2, choice3, choice4;
        string compran1, compran2, compran3, compran4;
        float percent;
        bool answer=true;
        int n=1,a,b,c,d;
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
                compran1="RED";
        }
        else if (a==1) {
                compran1="BLUE";
        }
        else if (a==2) {
                compran1="YELLOW";
        }
        else if (a==3) {
                compran1="BLACK";
        }
        else if (a==4) {
                compran1="ORANGE";
        }
        else if (a==5) {
                compran1="GREEN";
        }
        else if (a==6){
                compran1="WHITE";
        }
        else if (a==7){
                compran1="BROWN";
        }
        }

        //Determining the second color
        b=rand() % 6;	
        {
        if (b==0) {
                compran2="RED";
        }
        else if (b==1) {
                compran2="BLUE";
        }
        else if (b==2) {
                compran2="YELLOW";
        }
        else if (b==3) {
                compran2="BLACK";
        }
        else if (b==4) {
                compran2="ORANGE";
        }
        else if (b==5) {
                compran2="GREEN";
        }
        else if (b==6){
                compran2="WHITE";
        }
        else if (b==7){
                compran2="BROWN";
        }
        }

        //Determining the third color
        c=rand() % 6;
        {
        if (c==0) {
                compran3="RED";
        }
        else if (c==1) {
                compran3="BLUE";
        }
        else if (c==2) {
                compran3="YELLOW";
        }
        else if (c==3) {
                compran3="BLACK";
        }
        else if (c==4) {
                compran3="ORANGE";
        }
        else if (c==5) {
                compran3="GREEN";
        }
        else if (c==6){
                compran3="WHITE";
        }
        else if (c==7){
                compran3="BROWN";
        }
        }

        //Determining the fourth color
        d=rand() % 6;	
        {
        if (d==0) {
                compran4="RED";
        }
        else if (d==1) {
                compran4="BLUE";
        }
        else if (d==2) {
                compran4="YELLOW";
        }
        else if (d==3) {
                compran4="BLACK";
        }
        else if (d==4) {
                compran4="ORANGE";
        }
        else if (d==5) {
                compran4="GREEN";
        }
        else if (d==6){
                compran4="WHITE";
        }
        else if (d==7){
                compran4="BROWN";
        }
        }
        while(n<=2)
        {
            cout<<"Please pick your first color you would want displayed going from"<<endl;
            cout<<"left to right."<<endl;
            cin>>choice1;
            for (int i=0;i<choice1.size();i++){
                choice1[i]=toupper(choice1[i]);
            }
            cout<<"The second color."<<endl;
            cin>>choice2;
            for (int j=0;j<choice2.size();j++){
                choice2[j]=toupper(choice2[j]);
            }
            cout<<"The third color."<<endl;
            cin>>choice3;
            for (int k=0;k<choice3.size();k++){
                choice3[k]=toupper(choice3[k]);
            }
            cout<<"The fourth color."<<endl;
            cin>>choice4;
            for (int l=0;l<choice4.size();l++){
                choice4[l]=toupper(choice4[l]);
            }
              
            
            if(compran1==choice1&&compran2==choice2&&compran3==choice3&&compran4==choice4)
            {
                //cout<<fixed<<setprecison(1);
                cout<<"You have won the game!"<<endl;
                percent=n/10;
                cout<<"It took you "<<n<<"tries to solve the game! Your percentage is "<<percent<<"%!"<<endl;
                
            }
            else
            {
                cout<<"One or more colors is incorrect. Would you like a hint? Type y for yes."<<endl;
                cin>>hint;
                hint=toupper(hint);
                
                switch (hint)
                {
                    case 89:
                    {
                        if (!(compran1==choice1)&&compran2==choice2&&compran3==choice3&&compran4==choice4){
                            cout<<"You have three in the correct spot and one not."<<endl;}
                        else if(compran1==choice1&&!(compran2==choice2)&&compran3==choice3&&compran4==choice4){
                            cout<<"You have three in the correct spot and one not."<<endl;}
                        else if(compran1==choice1&&compran2==choice2&&!(compran3==choice3)&&compran4==choice4){
                            cout<<"You have three in the correct spot and one not."<<endl;}
                        else if(compran1==choice1&&compran2==choice2&&compran3==choice3&&!(compran4==choice4)){
                            cout<<"You have three in the correct spot and one not."<<endl;}
                        else if(!(compran1==choice1)&&!(compran2==choice2)&&compran3==choice3&&compran4==choice4){
                            cout<<"You have two in the correct spot and two not."<<endl;}
                        else if(!(compran1==choice1)&&compran2==choice2&&!(compran3==choice3)&&compran4==choice4){
                            cout<<"You have two in the correct spot and two not."<<endl;}
                        else if(!(compran1==choice1)&&compran2==choice2&&compran3==choice3&&!(compran4==choice4)){
                            cout<<"You have two in the correct spot and two not."<<endl;}
                        else if(compran1==choice1&&!(compran2==choice2)&&!(compran3==choice3)&&compran4==choice4){
                            cout<<"You have two in the correct spot and two not."<<endl;}
                        else if(compran1==choice1&&!(compran2==choice2)&&compran3==choice3&&!(compran4==choice4)){
                            cout<<"You have two in the correct spot and two not."<<endl;}
                        else if(compran1==choice1&&compran2==choice2&&!(compran3==choice3)&&!(compran4==choice4)){
                            cout<<"You have two in the correct spot and two not."<<endl;}
                        else if(compran1==choice1&&!(compran2==choice2)&&!(compran3==choice3)&&!(compran4==choice4)){
                            cout<<"You have one in the correct spot."<<endl;}
                        else if(!(compran1==choice1)&&compran2==choice2&&!(compran3==choice3)&&!(compran4==choice4)){
                            cout<<"You have one in the correct spot."<<endl;}
                        else if(!(compran1==choice1)&&!(compran2==choice2)&&compran3==choice3&&!(compran4==choice4)){
                            cout<<"You have one in the correct spot."<<endl;}
                        else{
                            cout<<"You have one in the correct spot."<<endl;}
                        break;
                    }
                    default:
                    {
                        cout<<"You have chosen not to take a hint. Please guess again till your number of tries is up."<<endl;
                    }    
                }
            }
            cout<<"You have used up "<<n<<" tries, you have "<<10-n<<" tries left."<<endl; 
            n++;
        }
        
        cout<<choice1<<"  "<<choice2<<"  "<<choice3<<"  "<<choice4<<endl;
        cout<<compran1<<"  "<<compran2<<"  "<<compran3<<" "<<compran4<<endl;
        
        
        

        


    
        cout<<"Would you like to play again?"<<endl;
        cin>>answer;
        answer=toupper(answer);
            if (answer!='Y')
                answer=false;
    }while(answer);
    
    return 0;
}

