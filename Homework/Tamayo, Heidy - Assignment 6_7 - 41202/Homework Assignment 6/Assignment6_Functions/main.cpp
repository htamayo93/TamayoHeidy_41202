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
void problem2(); //Problem 2
void problem3(); //Problem 3
void problem4(); //Problem 4
void problem5(); //Problem 5
void problem6(); //Problem 6
void problem7(); //Problem 7
    
//Execution Begins Here
int main(int argc, char** argv) {
//Declare and initialize variables
    unsigned short answer;//Problem Solution to display
    bool decision=true;   //Exits the program when false
    
    //Menu to Display Solution
    do{
        
        //Options that the user has to display the problem
        cout<<"Assignment 5 Problem Set"<<endl;
        cout<<"Enter 1 to Display Gaddis 8thEd Chap7 Probl 1"<<endl;
        cout<<"Enter 2 to Display Gaddis 8thEd Chap7 Probl 2"<<endl;
        cout<<"Enter 3 to Display Gaddis 8thEd Chap7 Probl 3"<<endl;
        cout<<"Enter 4 to Display Gaddis 8thEd Chap7 Probl 4"<<endl;
        cout<<"Enter 5 to Display Gaddis 8thEd Chap7 Probl 9"<<endl;
        cout<<"Enter 6 to Display Gaddis 8thEd Chap7 Probl 10"<<endl;
        cout<<"Enter 7 to Display Gaddis 8thEd Chap7 Probl 12"<<endl;
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
    int tenarry[10],max,min,i;//array for ten integers, max value, min value, increments
    
    //Output of program description and requesting input
    cout<<"This program will allow the user to enter ten integers and display the"<<endl;
    cout<<"largest and smallest values."<<endl;
    cout<<"Please enter the ten values."<<endl;
    cin>>tenarry[0];
    max=tenarry[0];
    
    //For loop to determine the largest and smallest value of the integers inputted
    for (i=1;i<10;i++)
    {
        cin>>tenarry[i];
        if(tenarry[i]>max)
        {
            max=tenarry[i];
        }
        if(tenarry[i]<min)
        {
            min=tenarry[i];
        }
    }
    
    //Output of results
    cout<<"The largest number is "<<max<<"."<<endl;
    cout<<"The smallest number is "<<min<<"."<<endl;
    cout<<endl<<endl;
}

/******************************************************************************/
/******************************** Problem 2 ***********************************/
/******************************************************************************/
void problem2()
{
    //Declare and initialize the variables
    float month[12],max,min,sum;//month array,max value of rainfall, min value of rainfall, sum of rainfall 
    int i;//increment for for loop
    
    cout<<fixed<<setprecision(2)<<showpoint;
    
    //Description of program and request of inputs
    cout<<"This program will calculate the total rainfall for the year, the average ";
    cout<<"rainfall, and the months with the highest and lowest amounts."<<endl;
    cout<<"Please enter the values for each month of rainfall."<<endl;
    cin>>month[0];
    max=month[0];
    
    //For loop to determine the min and max rainfall.
    for (i=1;i<12;i++)
    {
        cin>>month[i];
        if (month[i]<0)
        {
         cout<<"Error: Please enter a valid number."<<endl;   
        }    
        else if(month[i]>max)
        {
            max=month[i];
        }
        if(month[i]<min)
        {
            min=month[i];
        }
    }
    sum=month[0]+month[1]+month[2]+month[3]+month[4]+month[5]+month[6]+month[7]+month[8]+month[9]+month[10]+month[11]+month[12];
    //Output of results
    cout<<"The total rainfall for the year was "<<sum<<"."<<endl;
    sum=sum/12;
    cout<<"The month with the highest amount of rainfall was "<<max<<"."<<endl;
    cout<<"The month with the lowest amount of rainfall was "<<min<<"."<<endl;
    cout<<"The average of the rainfall was "<<sum<<"."<<endl;
    cout<<endl<<endl;
}

/******************************************************************************/
/******************************** Problem 3 ***********************************/
/******************************************************************************/
void problem3()
{
    //Declare and initialize the variables
    string names[5]={"MILD","MEDIUM","SWEET","HOT","ZESTY"};//String name for the type of salsa
    int sells[5],i,max,min,sum=0;
    
    //Output of program description and intput request
    cout<<"This program will display the amount of jars sold from each type of salsa."<<endl;
    cout<<"Reports of which sold the most and least will also be determined."<<endl;
    cout<<"Please enter the amount of jars sold for "<<names[0]<<" salsa."<<endl;
        cin>>sells[0];
        max=sells[0];
        
        //For loop to determine the highest selling sauce and the lowest.
    for (i=1;i<5;i++)
    {
        cout<<"Please enter the amount of jars sold for "<<names[i]<<" salsa."<<endl;
        cin>>sells[i];
    }
   for (i=1;i<5;i++)
   {
       if(sells[i]>max)
        {
            max=sells[i];
        }
        if(sells[i]<min)
        {
            min=sells[i];
        }
       sum=sum+sells[i];
    }
        //Output of results
    for(i=0;i<5;i++)
    {
        cout<<"For "<<names[i]<<" salsa, "<<sells[i]<<" jars were sold."<<endl;
    } 
    cout<<"The total amount of jars sold were "<<sum<<"."<<endl;
    for(i=0;i<5;i++)
    {
        if (max==sells[i])
        {
            cout<<"The salsa that sold the most was "<<names[i]<<" with "<<sells[i]<<" sold."<<endl;
        }
        if(min==sells[i])
        {
            cout<<"The salsa that sold the least was "<<names[i]<<" with "<<sells[i]<<" sold."<<endl;
        }
    }
    cout<<endl<<endl;
}

/******************************************************************************/
/******************************** Problem 4 ***********************************/
/******************************************************************************/
void problem4()
{
    //Declare and initialize variables
    int i,size,n,array[size];
    
    //Output of program description and input requests
    cout<<"This program will display all numbers that are greater than n and will allow the user"<<endl;
    cout<<"to indicate how long the array will be and what will be in the array."<<endl;
    cout<<"Please choose your value n."<<endl;
    cin>>n;
    cout<<"Please pick a number to make your array size."<<endl;
    cin>>size;
    cout<<"Please enter the numbers you would like in your array."<<endl;
    
    //For loop to ensure array size
    for (i=0;i<size;i++)
    {
        cin>>array[i];
    }
    
    //Output of results
    cout<<"The numbers that are greater than the value n are:"<<endl;
    for (i=0;i<size;i++)
   {
       if(array[i]>n)
       {
           cout<<array[i]<<" ";
       }
   }
    cout<<endl<<endl;
}

/******************************************************************************/
/******************************** Problem 5 ***********************************/
/******************************************************************************/
void problem5()
{
    //Declare and initialize the variables
    int empId[7]={5658845,4520125,7895122,8777541,8451277,1302850,7580489};
    int hours[7];
    float payRate[7];
    float wage[7];
    int i;
    
    cout<<fixed<<setprecision(2)<<fixed;
    
    //Output of program description
    cout<<"This program will determine the wage of seven employees based on their"<<endl;
    cout<<"pay rate and wages."<<endl;
    
    //Input of employee's hours worked and pay rate
    for (i=0;i<7;i++)
    {
        cout<<"For employee id #"<<empId[i]<<", please enter the number of hours worked."<<endl;
        cin>>hours[i];
        cout<<"Then the pay rate in dollars per hour."<<endl;
        cin>>payRate[i];
    }
    
    //Output of results
    for (i=0;i<7;i++){
        wage[i]=payRate[i]*hours[i];
        cout<<"Employee id #"<<empId[i]<<" earned $"<<wage[i]<<" for "<<hours[i]<<" hours."<<endl;
    }
    cout<<endl<<endl;
}
/******************************************************************************/
/******************************** Problem 6 ***********************************/
/******************************************************************************/
void problem6()
{
    //Declare and initialize the variables
    char answrkey[20]={'A','D','B','B','C','B','A','B','C','D','A','C','D','B','D','C','C','A','D','B'};
    char answruse[20];
    int sum=0,i;
    
    //Output of program description and input of answers
    cout<<"This program will determine the answers that are correct from the user";
    cout<<" based on the answer key that was provided from the Driver's License Office."<<endl;
    cout<<"Please enter the answers from the exam. Make sure to enter from one to twenty "<<endl;
    cout<<"in the correct order."<<endl;
    for (i=0;i<20;i++)
    {
        cin>>answruse[i];
        answruse[i]=toupper(answruse[i]);
    }
    for (i=0;i<20;i++){
        if(answrkey[i]==answruse[i])
        {
            sum++;
        }
    }
    
    //Output of results
    cout<<"Your answers were:";
    for (i=0;i<20;i++){
        cout<<answruse[i]<<endl;}
    if (sum>=15){
        cout<<"You passed the exam!"<<endl;}
    else{
        cout<<"You failed the exam."<<endl;}
    cout<<"You answered "<<sum<<" of 20 correct."<<endl;
    cout<<"You answered "<<20-sum<<" incorrectly."<<endl;
    for (i=0;i<20;i++){
        if (!(answrkey[i]==answruse[i])){
            cout<<"You have answered number "<<i+1<<" incorrectly."<<endl;}}
    cout<<endl<<endl;
}

/******************************************************************************/
/******************************** Problem 7 ***********************************/
/******************************************************************************/
void problem7()
{
    //Declare and initialize the variables
    string stuName[5];
    char letGra[5];
    float stuSco[4],sum[5]={0};
    float stuSco2[4];
    float stuSco3[4];
    float stuSco4[4];
    float stuSco5[4];
    int i;
    cout<<fixed<<setprecision(2)<<showpoint;
    
    //Output of program description
    cout<<"This program will allow the user to enter their name and their 4 test"<<endl;
    cout<<"scores. The scores will be taken and used to find the average score of"<<endl;
    cout<<"of the student to determine their letter grade."<<endl;
    
    //Request of inputs for users names and their scores
    for(i=0;i<5;i++)
    {
        cout<<"Please enter your name."<<endl;
        cin>>stuName[i];
    }
    cout<<"Please enter your test scores "<<stuName[0]<<"."<<endl;
    for(i=0;i<4;i++)
    {
        cin>>stuSco[i];
        sum[0]=sum[0]+stuSco[i];
    }
    cout<<"Please enter your test scores "<<stuName[1]<<"."<<endl;
        for(i=0;i<4;i++)
        {
            cin>>stuSco[i];
            sum[1]=sum[1]+stuSco[i];
        }
    cout<<"Please enter your test scores "<<stuName[2]<<"."<<endl;
    for(i=0;i<4;i++)
    {
        cin>>stuSco[i];
        sum[2]=sum[2]+stuSco[i];
    }
    cout<<"Please enter your test scores "<<stuName[3]<<"."<<endl;
    for(i=0;i<4;i++)
    {
        cin>>stuSco[i];
        sum[3]=sum[3]+stuSco[i];
    }
        cout<<"Please enter your test scores "<<stuName[4]<<"."<<endl;
    for(i=0;i<4;i++)
    {
        cin>>stuSco[i];
        sum[4]=sum[4]+stuSco[i];
    }
    
    //Output of results
    for(i=0;i<5;i++)
    {
        cout<<"For "<<stuName[i]<<" the average score was "<<sum[i]/4<<"."<<endl;
        sum[i]=sum[i]/4;
        if (sum[i]>=90){
            cout<<"Your grade is an A."<<endl;}
        else if (sum[i]<=89&&sum[i]>=80){
            cout<<"Your grade is an B."<<endl;}
        else if (sum[i]<=79&&sum[i]>=70){
            cout<<"Your grade is an C."<<endl;}
        else if (sum[i]<=69&&sum[i]>=60){
            cout<<"Your grade is an D."<<endl;}
        else{
            cout<<"Your grade is an F."<<endl;}
    }
    cout<<endl<<endl;
}