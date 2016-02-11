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
#include <vector>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes
void comGen(string [],string []);//Function to generate the 4 random colors from the computer
void useGen(string[]);//Function to allow the user to enter their four colors
void compare(string [],string [], int, float);
void hints(string [],string [],bool,char);
void listing(string [],string [],float ,int&,vector<string>&);
string repAry(string []);
int determ(string [],string []);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(time(NULL));

    //Declare and initialize variable  
    string com[8]={"RED","BLUE","GREEN","BROWN","WHITE","BLACK","ORANGE","YELLOW"};//Array that the computer picks from
    string compran[4]; //The 4 colors the computer generates
    string choice[4];//The 4 colors the user chooses
    int limit;
    int numTry=10;//The number of tries the user gets before it is considered they have lost.
    char answer, hint;//The response of whether the user would like to play again or take a hint
    float n=1, percent;//The intervals of the turns, the percentage of the accuracy 
    bool hint2=true;
    
    vector<string>array;
    ofstream out;
        
    //Open the file
    out.open("MastermindProject.dat");
    
    //Do while loop to see if the user would like to play again
    do
    {
        //Output description
        cout<<"This program will run the game known as Mastermind."<<endl;
        cout<<"Your color choices are red, blue, green, brown, white, black, orange, and yellow."<<endl;
        cout<<"You have 10 chances to guess the 4 colors the computer picked randomly before you lose"<<endl;
        cout<<"but are given the chance to play more times. With that being said how many tries would"<<endl;
        cout<<"like? Please remember that order matters in this games."<<endl;
        cin>>limit;
        
        limit=limit>numTry?limit:numTry;
        
        while (n<=limit)
        {
            //Determining colors by the computer
            comGen(com,compran);
        
            //The color the user wants to pick
            useGen(choice);
            listing(compran,choice,limit&,array);
            if(compran[0]==choice[0]&&compran[1]==choice[1]&&compran[2]==choice[2]&&compran[3]==choice[3]){
            {
                compare(compran,choice,numTry,percent);
            }
            }
            else
            {
                hints(compran,choice,hint2,hint);
            }
            cout<<endl<<"You have used up "<<n<<" tries, you have "<<limit-n<<" tries left."<<endl<<endl;
            if (n==10)
            {
                //Output of results after all tries have been used up
                cout<<"You have used all your tries and have lost the game."<<endl<<endl;
            }
            n++;
        }
        
        //Output of results
        cout<<"Your choices from left to right are           "<<choice[1]<<" "<<choice[2]<<" "<<choice[3]<<" "<<choice[4]<<endl;
        
        cout<<endl<<"Would you like to play again?"<<endl;
        cin>>answer;
        cout<<endl;
        answer=toupper(answer);
        n=1;
    }while(answer=='Y');
    
    //Exit stage right
    out.close();
    return 0;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Generates the computer's random values
//******************************************************************************
void comGen (string com[], string compran[])
{   for (int i=0;i<4;i++)
    {
        int index=rand()%8;
        compran[i]=com[index];
        cout<<compran[i]<<" ";
    }
    cout<<endl;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Get the four choices the user inputs
//******************************************************************************
void useGen(string choice[])
{
    cout<<"Please pick your  colors you would want displayed going from"<<endl;
    cout<<"left to right."<<endl;
    //Output request the user to enter the 4 colors
    for (int i=0;i<4;i++)
    {
        cin>>choice[i];
        if (choice[i]==choice[0]){
            for (int p=0;p<choice[0].size();p++){
                choice[0][p]=toupper(choice[0][p]);}}
        if (choice[i]==choice[1]){
            for (int p=0;p<choice[1].size();p++){
                choice[1][p]=toupper(choice[1][p]);}}
        if (choice[i]==choice[2]){
            for (int p=0;p<choice[2].size();p++){
                choice[2][p]=toupper(choice[2][p]);}}
        if (choice[i]==choice[3]){
            for (int p=0;p<choice[3].size();p++){
                choice[3][p]=toupper(choice[3][p]);}}
        cout<<choice[i]<<" ";
    }
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                       compares the user's inputs to that of the computer                            */
/******************************************************************************/
void compare(string compran[],string choice[], int numTry,float percent, float n)
{   
    //Output of results
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<endl<<"You have won the game!"<<endl;
    percent=((10-n)*10)/numTry;
    cout<<"It took you "<<n<<" tries to solve the game! Based on your number of tries, your";
    cout<<" percentage is "<<percent<<"% accuracy!"<<endl;
    n=n+100;
}

//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                      Determines the hints of the program based on the user                    */
/******************************************************************************/
char hints(string compran,string choice,bool hint2,char hint)
{
    cout<<"One or more colors is incorrect. Would you like a hint? Type y for yes."<<endl;
    cin>>hint;
    hint=toupper(hint);
                
    //Switch statement to determine if the user would like a hint
    switch (hint)
    {
        case 89:
        {
            //else if statements to determine which hint will be outputted
            if (!(compran[0]==choice[0])&&compran[1]==choice[1]&&compran[2]==choice[2]&&compran[3]==choice[3]){
                cout<<"You have three in the correct spot and one not."<<endl;}
            else if(compran[0]==choice[0]&&!(compran[1]==choice[1])&&compran[2]==choice[2]&&compran[3]==choice[3]){
                cout<<"You have three in the correct spot and one not."<<endl;}
            else if(compran[0]==choice[0]&&compran[1]==choice[1]&&!(compran[2]==choice[2])&&compran[3]==choice[3]){
                cout<<"You have three in the correct spot and one not."<<endl;}
            else if(compran[0]==choice[0]&&compran[1]==choice[1]&&compran[2]==choice[2]&&!(compran[3]==choice[3])){
                cout<<"You have three in the correct spot and one not."<<endl;}
            else if(!(compran[0]==choice[0])&&!(compran[1]==choice[1])&&compran[2]==choice[2]&&compran[3]==choice[3]){
                cout<<"You have two in the correct spot and two not."<<endl;}
            else if(!(compran[0]==choice[0])&&compran[1]==choice[1]&&!(compran[2]==choice[2])&&compran[3]==choice[3]){
                cout<<"You have two in the correct spot and two not."<<endl;}
            else if(!(compran[0]==choice[0])&&compran[1]==choice[1]&&compran[2]==choice[2]&&!(compran[3]==choice[3])){
                cout<<"You have two in the correct spot and two not."<<endl;}
            else if(compran[0]==choice[0]&&!(compran[1]==choice[1])&&!(compran[2]==choice[2])&&compran[3]==choice[3]){
                cout<<"You have two in the correct spot and two not."<<endl;}
            else if(compran[0]==choice[0]&&!(compran[1]==choice[1])&&compran[2]==choice[2]&&!(compran[3]==choice[3])){
                cout<<"You have two in the correct spot and two not."<<endl;}
            else if(compran[0]==choice[0]&&compran[1]==choice[1]&&!(compran[2]==choice[2])&&!(compran[3]==choice[3])){
                cout<<"You have two in the correct spot and two not."<<endl;}
            else if(compran[0]==choice[0]&&!(compran[1]==choice[1])&&!(compran[2]==choice[2])&&!(compran[3]==choice[3])){
                cout<<"You have one in the correct spot."<<endl;}
            else if(!(compran[0]==choice[0])&&compran[1]==choice[1]&&!(compran[2]==choice[2])&&!(compran[3]==choice[3])){
                cout<<"You have one in the correct spot."<<endl;}
            else if(!(compran[0]==choice[0])&&!(compran[1]==choice[1])&&compran[2]==choice[2]&&!(compran[3]==choice[3])){
                cout<<"You have one in the correct spot."<<endl;}
            else if (!(compran[0]==choice[0])&&!(compran[1]==choice[1])&&!(compran[2]==choice[2])&&compran[3]==choice[3]){
                cout<<"You have one in the correct spot."<<endl;}
            else{
                cout<<"None of the colors are correct."<<endl;}
            break;
        }
        default:
        {
            cout<<"You have chosen not to take a hint. Please guess again till your number of tries is up."<<endl;
            hint2=false;
        }
    }
    return hint;
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                      Shows the previous strings types by the user        */
/******************************************************************************/
void listing(string compran[],string choice[],float n,int &limit,vector<string>&array)
{
    //Representation of User's Original Choices
    cout<<"Your colors are ";
    for(int i=0;i<4;i++){
        cout<<choice[i]<<" ";
    }cout<<endl;
       
        //Loop to show all choices from each turn
        array.push_back(repAry(choice,4));
        cout<<"Color picks                        Number of tries attempted"<<endl;
        cout<<"------------------------------------------------------"<<endl;
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                          Array to String                                   */
/******************************************************************************/
string repAry(string choice[])
{
    string stri=" ";
    for(int i=0;i<4;i++){
        stri+=choice[i];
   }
   return stri; 
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Linear Search
//Inputs:
//  a->Array or List
//  n->Size of List
//  strt->Starting Position
//  val->Value to find
//Outputs:
//  pos->Index where value is found
//******************************************************************************
int determ(string pick[],string choice[])
{
    int i = 0;			
    int pos = -1; //Records position of search value		
    bool found = false;		
    while (i <4 && !found){
        if (pick[i] == choice[i]){
            found = true;
            pos = i;		  			
        }
        i++;					
    }
    return pos;				
}