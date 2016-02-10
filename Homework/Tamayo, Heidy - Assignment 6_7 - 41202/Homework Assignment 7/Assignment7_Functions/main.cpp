/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on February 4, 2016, 11:29 AM
 * Purpose:
 */

//System Libraries
#include <iostream> //I/0
#include <string>   //String
#include <iomanip>  //Formatting
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes
void problem1(); //Problem 1
int numList(int[], int);//Function to determine if number inputted is valid
void problem2(); //Problem 2
int lotList(int[], int);//Function to determine if number inputted is valid
void problem3(); //Problem 3
void sort(int[]);//Sorting through of the numbers that are avaliable
int lotlist(int[], int);//Checking through the function to see if number is valid
void problem4(); //Problem 4
void sort1(int []);//Sorting through the numbers that are in the array
int numlist(int[], int);//Checking the users input to the array 
void problem5(); //Problem 5
void sorTT(string[],int);//Function that sorts the names in the array
void disName(string[],int);//Function that displays the names organized
void problem6(); //Problem 6
void sortT(string[],int);//Function that sorts the names in the array
int binaser(string[],int,string);//Searches through the array for the name 
string strVal();//The string to determine if valid by user
void problem7(); //Problem 7
int lineSer(int[],int,int&);//Searching through the linear and value 
int binaSer(int[],int,int&);//Searching through the binary and value
void value(int&);//The value of the linear and the binary
    
//Execution Begins Here
int main(int argc, char** argv) {
//Declare and initialize variables
    unsigned short answer;//Problem Solution to display
    bool decision=true;   //Exits the program when false
    
    //Menu to Display Solution
    do{
        
        //Options that the user has to display the problem
        cout<<"Assignment 5 Problem Set"<<endl;
        cout<<"Enter 1 to Display Gaddis 8thEd Chap8 Probl 1"<<endl;
        cout<<"Enter 2 to Display Gaddis 8thEd Chap8 Probl 2"<<endl;
        cout<<"Enter 3 to Display Gaddis 8thEd Chap8 Probl 3"<<endl;
        cout<<"Enter 4 to Display Gaddis 8thEd Chap8 Probl 4"<<endl;
        cout<<"Enter 5 to Display Gaddis 8thEd Chap8 Probl 6"<<endl;
        cout<<"Enter 6 to Display Gaddis 8thEd Chap8 Probl 7"<<endl;
        cout<<"Enter 7 to Display Gaddis 8thEd Chap8 Probl 8"<<endl;
        cout<<"Type anything else to exit "<<endl<<endl;
        cin>>answer;
        //Solutions to all the problems
        switch(answer)
        {
            case 1:{problem1();break;}
            case 2:{problem2();break;}
            case 3:{problem3();break;}
            case 4:{problem4();break;}
            case 5:{problem5();break;}
            case 6:{problem6();break;}
            case 7:{problem7();break;}
            default:{
                cout<<"The program will now exit."<<endl;
                decision=false;
            }
        }
    }while(decision);
    
    //Exit stage right
    return 0;
}

/******************************************************************************/
/******************************** Problem 1 ***********************************/
/******************************************************************************/
void problem1()
{
    //Declare and initialize the variables
   int accnum[18]={
        5658845,4520125,7895122,8777541,8451277,1302850,
        8080152,4562555,5552012,5050552,7825877,1250255,
        1005231,6545231,3852085,7576651,7881200,4581002};//account numbers that are in the array
    int accuse,find;//The account number the user inputs and to find the account if it is in the array
    
    //Output of program description and input request
    cout<<"This program will allow a user to enter a charge account number and "<<endl;
    cout<<"the program will determine if the user is valid. "<<endl;
    cout<<endl<<"Please enter the number."<<endl;
    cin>>accuse;
    
    //Function to find the number inputted in the array
    find=numList(accnum,accuse);
    
    //Output of results
    if(find==-1){
        cout<<"You have enter an invalid number."<<endl;
    }else{
        cout<<"This number is valid."<<endl;
        cout<<accnum[find]<<endl;
    }
    cout<<endl<<endl;
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
int numList(int accnum[],int accuse){
    int i=0;//increment start
    int pos=-1;//to start search
    bool look=false;//to determine if number inputted is real
    while(i<18&&!look)
    {
        if(accnum[i]==accuse)
        {
            look=true;
            pos=i;
        }
        i++;
    }
    return pos;
}

/******************************************************************************/
/******************************** Problem 2 ***********************************/
/******************************************************************************/
void problem2()
{
    //Determine and initialize variables
    int lottNum[10]={
        13579,26791,26792,33445,55555,
        62483,77777,79422,85647,93121};//The array of the winning lottery numbers
    int lottWin;//The number the user inputs
    int find;//The variable that finds the number the user has inputted in the array
    
    //Output of program description and input request
    cout<<"This program will allow a user to enter a number to determine if they"<<endl;
    cout<<"have won the lottery."<<endl;
    cout<<"Please enter your lottery number."<<endl;
    cin>>lottWin;
    
    //Output of results
    find=lotList(lottNum,lottWin);
    if(find==-1)
    {
        cout<<"You did not win the lottery :(."<<endl;
    }
    else
    {
        cout<<"You won the lottery! :D"<<endl;
        cout<<lottNum[find]<<endl;
    }
    cout<<endl<<endl;
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
int lotList(int lottNum[],int lottWin){
    int i=0;//increments for while loop
    int pos=-1;//To start search
    bool look=false;//To determine if number inputted corresponds with the list
    while(i<10&&!look)
    {
        if(lottNum[i]==lottWin)
        {
            look=true;
            pos=i;
        }
        i++;
    }
    return pos;
}

/******************************************************************************/
/******************************** Problem 3 ***********************************/
/******************************************************************************/
void problem3()
{
    //Determine and initialize variables
    int lottNum[10]={
        13579,26791,26792,33445,55555,
        62483,77777,79422,85647,93121};//Array of the winning numbers
    int lottWin;//Number the user will input
    int find;//Variable that will help determine if number corresponds with the array
    
    //Output of program description and the input request
    cout<<"This program will allow a user to enter a number to determine if they"<<endl;
    cout<<"have won the lottery."<<endl;
    cout<<"Please enter your lottery number."<<endl;
    cin>>lottWin;
    
    //Sorting of the lottery numbers
    sort(lottNum);
    find=lotlist(lottNum,lottWin);
    
    //Output of results
    if(find==-1)
    {
        cout<<"You did not win the lottery :(."<<endl;
    }
    else
    {
        cout<<"You won the lottery! :D"<<endl;
        cout<<lottNum[find]<<endl;
    }
    cout<<endl<<endl;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Selection Sort Search
//Inputs:
//  a->Array or List
//  n->Size of List
//  strt->Starting Position
//  val->Value to find
//Outputs:
//  pos->Index where value is found
//******************************************************************************
void sort(int lottNum[]){
    //Declare and initialize Variables
    int scan,min,lowVal;//To scan through the array
    for (scan=0;scan<9;scan++){
        min=scan;
        lowVal=lottNum[scan];
        for (int i=scan+1;i<10;i++){
            if (lottNum[i]<lowVal){
                lowVal=lottNum[i];
                min=i;
            }
        }
        lottNum[min]=lottNum[scan];
        lottNum[scan]=lowVal;
    }
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
int lotlist(int lottNum[],int lottWin){
    //Declare and initialize variables
    int place=-1, begin=0, end=(10-1);
    int center;                       
    bool look = false;   

    while (!look && begin<=end)
    {
        center=(begin+end)/2;
        if (lottNum[center]==lottWin)
        {
            place=center;
            look=true;            
        }
        else if (lottNum[center]>lottWin)
        {
            end=center-1;
        }
        else
        {
            begin=center+ 1;
        }
    }
    return place;
}

/******************************************************************************/
/******************************** Problem 4 ***********************************/
/******************************************************************************/
void problem4()
{
    //Declare and initialize variables
    int accnum[18]={
        5658845,4520125,7895122,8777541,8451277,1302850,
        8080152,4562555,5552012,5050552,7825877,1250255,
        1005231,6545231,3852085,7576651,7881200,4581002};//Array with the account numbers
    int accuse,find;//User input of the array and the find variable 
    
    //Output of program description and input request
    cout<<"This program will allow a user to enter a charge account number and "<<endl;
    cout<<"the program will determine if the user is valid. "<<endl;
    cout<<endl<<"Please enter the number."<<endl;
    cin>>accuse;
    sort1(accnum);
    find=numlist(accnum,accuse);
    
    //Output of results
    if(find==-1){
        cout<<"You have enter an invalid number."<<endl;
    }else{
        cout<<"This number is valid."<<endl;
        cout<<accnum[find]<<endl;
    }
    cout<<endl<<endl;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Selection Sort Search
//Inputs:
//  a->Array or List
//  n->Size of List
//  strt->Starting Position
//  val->Value to find
//Outputs:
//  pos->Index where value is found
//******************************************************************************
void sort1(int accnum[]){
    //Declare Variables
    int scan,min,lowVal;
    for (scan=0;scan<17;scan++){
        min=scan;
        lowVal=accnum[scan];
        for (int i=scan+1;i<18;i++){
            if (accnum[i]<lowVal){
                lowVal=accnum[i];
                min=i;
            }
        }
        accnum[min]=accnum[scan];
        accnum[scan]=lowVal;
    }
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
int numlist(int accnum[],int accuse){
    //Declaration of variables
    int place=-1, begin=0, end=17;
    int center;                       
    bool look = false;   

    while (!look && begin<=end)
    {
        center=(begin+end)/2;
        if (accnum[center]==accuse)
        {
            place=center;
            look=true;            
        }
        else if(accnum[center]>accuse)
        {
            end=center-1;
        }
        else
        {
            begin=center+ 1;
        }
    }
    return place;
}

/******************************************************************************/
/******************************** Problem 5 ***********************************/
/******************************************************************************/
void problem5()
{
    //Declare and initialize variables
    const int numName=20;//size of the array
    string names[numName]=
    {"Collins,Bill", "Smith,Bart", "Allen,Jim", "Griffin,Jim", "Stamey,Marty",
     "Rose,Geri", "Taylor,Terri", "Johnson,Jill", "Allison,Jeff", "Looney,Joe",
     "Wolfe,Bill", "James,Jean", "Weaver,Jim", "Pore,Bob", "Rutherford,Greg", 
     "Javens,Renee", "Harrison,Rose", "Setzer,Cathy", "Pike,Gordon", "Holland,Beth"
    };//The inputs of the array
    
    //Output of results
    cout<<"Unsorted names."<<endl;
    disName(names,numName);
    
    //The function that oraganizes the names
    sorTT(names,numName);
   
    //Output of results
    cout<<"Sorted names."<<endl;
    disName(names,numName);
    cout<<endl<<endl;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Sorting the file
//Inputs:
//  a->Array or List
//  n->Size of List
//  strt->Starting Position
//  val->Value to find
//Outputs:
//  pos->Index where value is found
//******************************************************************************
void sorTT(string names[], int numName)
{
    //Sorting of the names
    int i,scan;
    string minVal;

    for(int scan=0;scan<(numName-1);scan++)
    {
        i=scan;
        minVal=names[i];
        for(int in=scan+1;in<numName;in++)
        {
            if (names[in]<minVal)
            {
                minVal=names[in];
                i=in;
            }  
        }
        string tem=names[scan];
        names[scan]=minVal;
        names[i]=tem;
    }
    cout<<endl;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Displaying the array
//Inputs:
//  a->Array or List
//  n->Size of List
//  strt->Starting Position
//  val->Value to find
//Outputs:
//  pos->Index where value is found
//******************************************************************************
void disName(string names[], int numName)
{
    //Displaying of the array
    for(int i=0;i<numName;i++)
    {
        cout<<names[i]<<endl;
    }
}

/******************************************************************************/
/******************************** Problem 6 ***********************************/
/******************************************************************************/
void problem6()
{
    //Determine and initialize the variables
    const int numName=20;//Number allowed for array
    string names[numName]=
    {"Collins,Bill", "Smith,Bart", "Allen,Jim", "Griffin,Jim", "Stamey,Marty",
     "Rose,Geri", "Taylor,Terri", "Johnson,Jill", "Allison,Jeff", "Looney,Joe",
     "Wolfe,Bill", "James,Jean", "Weaver,Jim", "Pore,Bob", "Rutherford,Greg", 
     "Javens,Renee", "Harrison,Rose", "Setzer,Cathy", "Pike,Gordon", "Holland,Beth"
    };//Inputs in the array
    string vaLue;//The name the user inputs
    int answer; //To determine if the name is on the list
    
    //Functions to sort,receive the input string and determine if they are real
    sortT(names,numName);
    vaLue=strVal();
    answer=binaser(names,numName,vaLue);
    
    //Output of results
    if(answer==-1)
    {
        cout<<"The name entered is not on the list."<<endl;
    }
    else   
    {
        cout<<names[answer]<<" was found in the #"<<answer<<" place."<<endl;
    }
    cout<<endl<<endl;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Sorting the file
//Inputs:
//  a->Array or List
//  n->Size of List
//  strt->Starting Position
//  val->Value to find
//Outputs:
//  pos->Index where value is found
//******************************************************************************
void sortT(string names[], int numName)
{
    //Determine and initialize the variables
    int i,scan;
    string minVal;

    for(int scan=0;scan<(numName-1);scan++)
    {
        i=scan;
        minVal=names[i];
        for(int in=scan+1;in<numName;in++)
        {
            if (names[in]<minVal)
            {
                minVal=names[in];
                i=in;
            }  
        }
        string tem=names[scan];
        names[scan]=minVal;
        names[i]=tem;
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
string strVal()
{
    //Input request of the name user would like to search for.
    string input;
    cout << "Please enter the name you would like to search for."<<endl;
    getline(cin, input);
    return input;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Binary Search
//Inputs:
//  a->Array or List
//  n->Size of List
//  strt->Starting Position
//  val->Value to find
//Outputs:
//  pos->Index where value is found
//******************************************************************************
int binaser(string names[], int numName, string vaLue)
{
    //Declare and initialize variables
    int begin=0, end=numName-1, center, pos=-1;			
    bool look=false;					
    while (!look && begin<=end)
    {
        center=(begin+end)/2;		
        if (names[center]==vaLue)			
        {
            look=true;
            pos=center;
        }
        else if (names[center]>vaLue)
        {
            end=center-1;
        }
        else
        {
            begin=center+1;
        }		
    }
    return pos;
}

/******************************************************************************/
/******************************** Problem 7 ***********************************/
/******************************************************************************/
void problem7()
{
    //Output of program description
    int array[20]={
    1 , 2, 3, 4, 5, 6, 7, 8, 9,10,
    11,12,13,14,15,16,17,18,19,20};//array with input functions
    int line=0,bina=0,vaLue,lineRes,binaRes;//linear,binary variable
    
    //Output of program description
    cout<<"This program will allow a user to search for the value the user wants"<<endl;
    cout<<"based on the array there is."<<endl;
    
    //Functions that will help find the binary and linear search
    value(vaLue);
    lineRes=lineSer(array,vaLue,line);
    binaRes=binaSer(array,vaLue,bina);
    
    //Output of results
    cout<<"The number of times there was a comparison before it found the value was ";
    cout<<value<<"."<<endl;
    cout<<"The linear search was "<<line<<"."<<endl;
    cout<<"The binary search was "<<bina<<"."<<endl;
    cout<<endl<<endl;
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
void value(int &vaLue)
{
    //Input of the value the user would like to find
    cout<<"Please enter the value you would like to search for."<<endl;
    cin>>vaLue;
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
int lineSer(int array[],int vaLue,int &line){
    //Declare and initialize variables
    int i=0;
    int pos=-1;
    bool look=false;
    while(i<20&&!look)
    {
        if(array[i]==vaLue)
        {
            look=true;
            pos=i;
        }
        i++;
        if(pos== -1)
        {
            line++;
        }
    }
    return pos;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Binary Search
//Inputs:
//  a->Array or List
//  n->Size of List
//  strt->Starting Position
//  val->Value to find
//Outputs:
//  pos->Index where value is found
//******************************************************************************
int binaSer(int array[], int vaLue, int &bina)
{
    //Declare and initialize variables
    int begin=0, end=19, center,pos=-1;			
    bool look=false;					
    while (!look && begin<=end)
    {
        center=(begin+end)/2;		
        if (array[center]==vaLue)			
        {
            look=true;
            pos=center;
        }
        else if (array[center]>vaLue)
        {
            end=center-1;
        }
        else
        {
            begin=center+1;
        }		
        if (pos==-1)
        {
            bina++;
        }
    }
    return pos;
}