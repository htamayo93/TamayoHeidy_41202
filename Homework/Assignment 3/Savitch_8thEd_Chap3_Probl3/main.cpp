9/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 21, 2016, 01:42 PM
 * Purpose: Determines the user's horoscope sign and fortune based on their birthday.
 */

//System Libraries
#include <iostream> //I/O
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare and initialize the variables
    int month, day;//Input of user's month and day
    
    //Problem that will be solved
    cout<<"This program will tell your horoscope sign and your horoscope."<<endl;
    
    //Asks user month to determine their sign
    cout<<"What month is your your birthday? Please write in number form."<<endl;
    cin>>month;
    
    //Output of results depending on the month and day user inputs
        //January loop
    if (month==1)
    {
        cout<<"What day is your birthday?"<<endl;
        cin>>day;
        if (19>=day)
        {
            cout<<"You are a Capricorn!"<<endl;
            cout<<"Your horoscope is: You will have a great day!"<<endl;
            if (day==19||day==18)
            {
                cout<<"Your birthday is at a cusp!"<<endl;
                cout<<endl<<"Since your birthday on a cusp your second horoscope is: ";
                cout<<"You will encounter an old friend!"<<endl;
            }
        }
        else
        {
            cout<<"You are an Aquarius!"<<endl;
            cout<<"Your horoscope is: You will encounter an old friend!"<<endl;
            if (day==20||day==21)
            {
                cout<<"Your birthday is at a cusp!"<<endl;
                cout<<endl<<"Since your birthday on a cusp your second horoscope is: ";
                cout<<"You will have a great day!"<<endl;
            }
        }
    }
    
        //February loop
    else if (month==2)
    {
        cout<<"What day is your birthday?"<<endl;
        cin>>day;
        if (18>=day)
        {
            cout<<"You are an Aquarius!"<<endl;
            cout<<"Your horoscope is: You will encounter an old friend!"<<endl;
            if (day==18||day==17)
            {
                cout<<"Your birthday is at a cusp!"<<endl;
                cout<<endl<<"Since your birthday on a cusp your second horoscope is: ";
                cout<<"You will receive exciting news!"<<endl;
            }
        }
        else
        {
            cout<<"You are a Pisces!"<<endl;
            cout<<"Your horoscope is: You will receive exciting news!"<<endl;
            if (day==19||day==20)
            {
                cout<<"Your birthday is at a cusp!"<<endl;
                cout<<endl<<"Since your birthday on a cusp your second horoscope is: ";
                cout<<"You will encounter an old friend!"<<endl;
            }
        }
    }
    
        //March loop
    else if (month==3)
    {
        cout<<"What day is your birthday?"<<endl;
        cin>>day;
        if (20>=day)
        {
            cout<<"You are a Pisces!"<<endl;
            cout<<"Your horoscope is: You will receive exciting news!"<<endl;
            if (day==19||day==20)
            {
                cout<<"Your birthday is at a cusp!"<<endl;
                cout<<endl<<"Since your birthday on a cusp your second horoscope is: ";
                cout<<"You will find a new love!"<<endl;
            }
        }
        else
        {
            cout<<"You are an Aries!"<<endl;
            cout<<"Your horoscope is: You will find a new love!"<<endl;
            if (day==21||day==22)
            {
                cout<<"Your birthday is at a cusp!"<<endl;
                cout<<endl<<"Since your birthday on a cusp your second horoscope is: ";
                cout<<"You will receive exciting news!"<<endl;
            }
        }
    }
    
        //April loop
    else if (month==4)
    {
        cout<<"What day is your birthday?"<<endl;
        cin>>day;
        if (19>=day)
        {
            cout<<"You are an Aries!"<<endl;
            cout<<"Your horoscope is: You will find a new love!"<<endl;
            if (day==19||day==18)
            {
                cout<<"Your birthday is at a cusp!"<<endl;
                cout<<endl<<"Since your birthday on a cusp your second horoscope is: ";
                cout<<"You will learn something new!"<<endl;
            }
        }
        else
        {
            cout<<"You are a Taurus!"<<endl;
            cout<<"Your horoscope is: You will learn something new!"<<endl;
            if (day==20||day==21)
            {
                cout<<"Your birthday is at a cusp!"<<endl;
                cout<<endl<<"Since your birthday on a cusp your second horoscope is: ";
                cout<<"You will find a new love!"<<endl;
            }
        }
    }
    
        //May loop
    else if (month==5)
    {
        cout<<"What day is your birthday?"<<endl;
        cin>>day;
        if (20>=day)
        {
            cout<<"You are a Taurus!"<<endl;
            cout<<"Your horoscope is: You will learn something new!"<<endl;
            if (day==20||day==21)
            {
                cout<<"Your birthday is at a cusp!"<<endl;
                cout<<endl<<"Since your birthday on a cusp your second horoscope is: ";
                cout<<"You will encounter a great challenge soon!"<<endl;
            }
        }
        else
        {
            cout<<"You are a Gemini!"<<endl;
            cout<<"Your horoscope is: You will encounter a great challenge soon!"<<endl;
            if (day==21||day==22)
            {
                cout<<"Your birthday is at a cusp!"<<endl;
                cout<<endl<<"Since your birthday on a cusp your second horoscope is: ";
                cout<<"You will learn something new!"<<endl;
            }
        }
    }
    
        //June loop
    else if (month==6)
    {
        cout<<"What day is your birthday?"<<endl;
        cin>>day;
        if (21>=day)
        {
            cout<<"You are a Gemini!"<<endl;
            cout<<"Your horoscope is: You will encounter a great challenge soon!"<<endl;
            if (day==21||day==20)
            {
                cout<<"Your birthday is at a cusp!"<<endl;
                cout<<endl<<"Since your birthday on a cusp your second horoscope is: ";
                cout<<"You will be successful in what you do!"<<endl;
            }
        }
        else
        {
            cout<<"You are a Cancer!"<<endl;
            cout<<"Your horoscope is: You will be successful in what you do!"<<endl;
            if (day==22||day==23)
            {
                cout<<"Your birthday is at a cusp!"<<endl;
                cout<<endl<<"Since your birthday on a cusp your second horoscope is: ";
                cout<<"You will encounter a great challenge soon!"<<endl;
            }
        }
    }
    
        //July loop
    else if (month==7)
    {
        cout<<"What day is your birthday?"<<endl;
        cin>>day;
        if (22>=day)
        {
            cout<<"You are a Cancer!"<<endl;
            cout<<"Your horoscope is: You will be successful in what you do!"<<endl;
            if (day==22||day==21)
            {
                cout<<"Your birthday is at a cusp!"<<endl;
                cout<<endl<<"Since your birthday on a cusp your second horoscope is: ";
                cout<<"You will make an important decision soon!"<<endl;
            }
        }
        else
        {
            cout<<"You are a Leo!"<<endl;
            cout<<"Your horoscope is: You will make an important decision soon!"<<endl;
            if (day==23||day==24)
            {
                cout<<"Your birthday is at a cusp!"<<endl;
                cout<<endl<<"Since your birthday on a cusp your second horoscope is: ";
                cout<<"You will be successful in what you do!"<<endl;
            }
        }
    }
    
        //August loop
    else if (month==8)
    {
        cout<<"What day is your birthday?"<<endl;
        cin>>day;
        if (22>=day)
        {
            cout<<"You are a Leo!"<<endl;
            cout<<"Your horoscope is: You will make an important decision soon!"<<endl;
            if (day==22||day==21)
            {
                cout<<"Your birthday is at a cusp!"<<endl;
                cout<<endl<<"Since your birthday on a cusp your second horoscope is: ";
                cout<<"Someone you admire will take notice of you!"<<endl;
            }
        }
        else
        {
            cout<<"You are a Virgo!"<<endl;
            cout<<"Your horoscope is: Someone you admire will take notice of you!"<<endl;
            if (day==23||day==24)
            {
                cout<<"Your birthday is at a cusp!"<<endl;
                cout<<endl<<"Since your birthday on a cusp your second horoscope is: ";
                cout<<"You will make an important decision soon!"<<endl;
            }
        }
    }
    
        //September loop 
    else if (month==9)
    {
        cout<<"What day is your birthday?"<<endl;
        cin>>day;
        if (22>=day)
        {
            cout<<"You are a Virgo!"<<endl;
            cout<<"Your horoscope is: Someone you admire will take notice of you!"<<endl;
            if (day==22||day==21)
            {
                cout<<"Your birthday is at a cusp!"<<endl;
                cout<<endl<<"Since your birthday on a cusp your second horoscope is: ";
                cout<<"You will win the lottery!"<<endl;
            }
        }
        else
        {
            cout<<"You are a Libra!"<<endl;
            cout<<"Your horoscope is: You will win the lottery!"<<endl;
            if (day==23||day==24)
            {
                cout<<"Your birthday is at a cusp!"<<endl;
                cout<<endl<<"Since your birthday on a cusp your second horoscope is: ";
                cout<<"Someone you admire will take notice of you!"<<endl;
            }
        }
    }
    
        //October loop
    else if (month==10)
    {
        cout<<"What day is your birthday?"<<endl;
        cin>>day;
        if (22>=day)
        {
            cout<<"You are a Libra!"<<endl;
            cout<<"Your horoscope is: You will win the lottery!"<<endl;
            if (day==22||day==21)
            {
                cout<<"Your birthday is at a cusp!"<<endl;
                cout<<endl<<"Since your birthday on a cusp your second horoscope is: ";
                cout<<"You will have luck for a whole week!"<<endl;
            }
        }
        else
        {
            cout<<"You are a Scorpio!"<<endl;
            cout<<"Your horoscope is: You will have luck for a whole week!"<<endl;
            if (day==23||day==24)
            {
                cout<<"Your birthday is at a cusp!"<<endl;
                cout<<endl<<"Since your birthday on a cusp your second horoscope is: ";
                cout<<"You will win the lottery!"<<endl;
            }
        }
    }
    
        //November loop
    else if (month==11)
    {
        cout<<"What day is your birthday?"<<endl;
        cin>>day;
        if (21>=day)
        {
            cout<<"You are a Scorpio!"<<endl;
            cout<<"Your horoscope is: You will have luck for a whole week!"<<endl;
            if (day==21||day==20)
            {
                cout<<"Your birthday is at a cusp!"<<endl;
                cout<<endl<<"Since your birthday on a cusp your second horoscope is: ";
                cout<<"A new friend will come into your life!"<<endl;
            }
        }
        else
        {
            cout<<"You are a Sagittarius!"<<endl;
            cout<<"Your horoscope is: A new friend will come into your life!"<<endl;
            if (day==22||day==23)
            {
                cout<<"Your birthday is at a cusp!"<<endl;
                cout<<endl<<"Since your birthday on a cusp your second horoscope is: ";
                cout<<"You will have luck for a whole week!"<<endl;
            }
        }
    }
    
        //December loop
    else if (month==12)
    {
        cout<<"What day is your birthday?"<<endl;
        cin>>day;
        if (21>=day)
        {
            cout<<"You are a Sagittarius!"<<endl;
            cout<<"Your horoscope is: A new friend will come into your life!"<<endl;
            if (day==21||day==20)
            {
                cout<<"Your birthday is at a cusp!"<<endl;
                cout<<endl<<"Since your birthday on a cusp your second horoscope is: ";
                cout<<"You will have a great day!"<<endl;
            }
        }
        else
        {
            cout<<"You are a Capricorn!"<<endl;
            cout<<"Your horoscope is: You will have a great day!"<<endl;
            if (day==22||day==23)
            {
                cout<<"Your birthday is at a cusp!"<<endl;
                cout<<endl<<"Since your birthday on a cusp your second horoscope is: ";
                cout<<"A new friend will come into your life!"<<endl;
            }
        }
    }
    
        //Output if incorrect month is inputed
    else 
        cout<<"You have inputed an incorrect month."<<endl;
    
    //Exit stage right
    return 0;
}
