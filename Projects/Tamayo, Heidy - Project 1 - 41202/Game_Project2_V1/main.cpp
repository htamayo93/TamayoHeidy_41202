/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 29, 2016, 5:15 PM
 * Purpose:
 */

//System Libraries
#include <iostream> //I/O
#include <string>   //string 
#include <iomanip>  //Formatting 
#include <cstdlib>  //srand and rand function
#include <fstream>  //File I/O
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes
void comGen(string [],int []);
void useGen(string []);

//Execution Begins Here
int main(int argc, char** argv) {
    
        //Declare and initialize variable  
        string choice[4];//The 4 colors the user chooses
        string compran[4]; //The 4 colors the computer generates
//        char numTry=10.0f;//The number of tries the user gets
//        char answer, hint;//The response of whether the user would like to play again or take a hint
        float n=1, percent;//The intervals of the turns, the percentage of the accuracy 
        int a[4];//Array that generates the random colors for the computer
//        bool hint2=true;
//        ofstream out;
        
    //Open the file
//    out.open("MastermindProject.dat");
    
    //Do while loop to see if the user would like to play again
//    do
//    {
        //Output description
        cout<<"This program will run the game known as Mastermind where you are given"<<endl;
        cout<<"10 chances to guess the 4 colors the computer picked randomly. The order"<<endl;
        cout<<"of the colors also matters in this game."<<endl;
        cout<<"Your color choices are red, blue, green, brown, white, black, orange, and yellow."<<endl;
        
        
        //Determining colors by the computer
        comGen(compran,a);
        
               

//        numTry=numTry<n?numTry:n;//Ternary operator
        
        //While loop to only allow the user ten tries
        while(n<=10)
        {
            useGen(choice);
                
//            //if else statement to determine if the user has won or needs hints
//            if(compran1==choice1&&compran2==choice2&&compran3==choice3&&compran4==choice4)
//            {
//                //Output of results
//                cout<<fixed<<setprecision(1)<<showpoint;
//                cout<<endl<<"You have won the game!"<<endl;
//                percent=((10-n)*10)/numTry;
//                cout<<"It took you "<<n<<" tries to solve the game! Based on your number of tries, your";
//                cout<<" percentage is "<<percent<<"% accuracy!"<<endl;
//                n=n+10;
//            }
//            else
//            {
//                cout<<"One or more colors is incorrect. Would you like a hint? Type y for yes."<<endl;
//                cin>>hint;
//                hint=toupper(hint);
//                //Switch statement to determine if the user would like a hint
//                switch (hint)
//                {
//                    case 89:
//                    {
//                        //else if statements to determine which hint will be outputted
//                        if (!(compran1==choice1)&&compran2==choice2&&compran3==choice3&&compran4==choice4){
//                            cout<<"You have three in the correct spot and one not."<<endl;}
//                        else if(compran1==choice1&&!(compran2==choice2)&&compran3==choice3&&compran4==choice4){
//                            cout<<"You have three in the correct spot and one not."<<endl;}
//                        else if(compran1==choice1&&compran2==choice2&&!(compran3==choice3)&&compran4==choice4){
//                            cout<<"You have three in the correct spot and one not."<<endl;}
//                        else if(compran1==choice1&&compran2==choice2&&compran3==choice3&&!(compran4==choice4)){
//                            cout<<"You have three in the correct spot and one not."<<endl;}
//                        else if(!(compran1==choice1)&&!(compran2==choice2)&&compran3==choice3&&compran4==choice4){
//                            cout<<"You have two in the correct spot and two not."<<endl;}
//                        else if(!(compran1==choice1)&&compran2==choice2&&!(compran3==choice3)&&compran4==choice4){
//                            cout<<"You have two in the correct spot and two not."<<endl;}
//                        else if(!(compran1==choice1)&&compran2==choice2&&compran3==choice3&&!(compran4==choice4)){
//                            cout<<"You have two in the correct spot and two not."<<endl;}
//                        else if(compran1==choice1&&!(compran2==choice2)&&!(compran3==choice3)&&compran4==choice4){
//                            cout<<"You have two in the correct spot and two not."<<endl;}
//                        else if(compran1==choice1&&!(compran2==choice2)&&compran3==choice3&&!(compran4==choice4)){
//                            cout<<"You have two in the correct spot and two not."<<endl;}
//                        else if(compran1==choice1&&compran2==choice2&&!(compran3==choice3)&&!(compran4==choice4)){
//                            cout<<"You have two in the correct spot and two not."<<endl;}
//                        else if(compran1==choice1&&!(compran2==choice2)&&!(compran3==choice3)&&!(compran4==choice4)){
//                            cout<<"You have one in the correct spot."<<endl;}
//                        else if(!(compran1==choice1)&&compran2==choice2&&!(compran3==choice3)&&!(compran4==choice4)){
//                            cout<<"You have one in the correct spot."<<endl;}
//                        else if(!(compran1==choice1)&&!(compran2==choice2)&&compran3==choice3&&!(compran4==choice4)){
//                            cout<<"You have one in the correct spot."<<endl;}
//                        else if (!(compran1==choice1)&&!(compran2==choice2)&&!(compran3==choice3)&&compran4==choice4){
//                            cout<<"You have one in the correct spot."<<endl;}
//                        else{
//                            cout<<"None of the colors are correct."<<endl;}
//                        break;
//                    }
//                    default:
//                    {
//                        cout<<"You have chosen not to take a hint. Please guess again till your number of tries is up."<<endl;
//                        hint2=false;
//                    }    
//                }
//                cout<<endl<<"You have used up "<<n<<" tries, you have "<<10-n<<" tries left."<<endl<<endl;
//                if (n==10)
//                {
//                    //Output of results after all tries have been used up
//                    cout<<"You have used all your tries and have lost the game."<<endl<<endl;
//                }
//                n++;
//            }
        }
//        
//        //Output of results
//        cout<<"Your choices from left to right are           "<<choice1<<" "<<choice2<<" "<<choice3<<" "<<choice4<<endl;
//        //cout<<"The computer's choices from left to right are "<<compran1<<" "<<compran2<<" "<<compran3<<" "<<compran4<<endl;
//        
//        cout<<endl<<"Would you like to play again?"<<endl;
//        cin>>answer;
//        cout<<endl;
//        answer=toupper(answer);
//        n=1;
//    }while(answer=='Y');
//    
//    //Exit stage right
//    out.close();
    return 0;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Getting the value
//Inputs:
//  a->Array or List
//  n->Size of List
//  strt->Starting Position
//  val->Value to find
//Outputs:
//  pos->Index where value is found
//******************************************************************************
void comGen (string compran[],int a[])
{
    srand (time(NULL));
    for (int i=0;i<4;i++);
    {
        a[i]=rand() % 6;	
        {
            if (a[i]==0) {
                    compran[i]="RED";
            }
            else if (a[i]==1) {
                    compran[i]="BLUE";
            }
            else if (a[i]==2) {
                    compran[i]="YELLOW";
            }
            else if (a[i]==3) {
                    compran[i]="BLACK";
            }
            else if (a[i]==4) {
                    compran[i]="ORANGE";
            }
            else if (a[i]==5) {
                    compran[i]="GREEN";
            }
            else if (a[i]==6){
                    compran[i]="WHITE";
            }
            else if (a[i]==7){
                    compran[i]="BROWN";
            }
        }
    }
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Getting the value
//Inputs:
//  a->Array or List
//  n->Size of List
//  strt->Starting Position
//  val->Value to find
//Outputs:
//  pos->Index where value is found
//******************************************************************************
void useGen()
{
    //Output request the user to enter the 4 colors
        cout<<"Please pick your first color you would want displayed going from"<<endl;
        cout<<"left to right."<<endl;
        cin>>choice[i];
        
        for (int j=0;j<choice[i].size();i++){
            choice[i][j]=toupper(choice[i][j]);
        }
//        cout<<"The second color."<<endl;
//        cin>>choice2;
//        for (int j=0;j<choice2.size();j++){
//            choice2[j]=toupper(choice2[j]);
//        }
//        cout<<"The third color."<<endl;
//        cin>>choice3;
//        for (int k=0;k<choice3.size();k++){
//            choice3[k]=toupper(choice3[k]);
//        }
//        cout<<"The fourth color."<<endl;
//        cin>>choice4;
//        for (int l=0;l<choice4.size();l++){
//            choice4[l]=toupper(choice4[l]);
//        }
}