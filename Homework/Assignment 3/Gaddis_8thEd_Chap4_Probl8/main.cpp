/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 21, 2016, 05:02 PM
 * Purpose: Tells the user the mixes of the primary colors based on input.
 */

//System Libraries
#include <iostream> //I/O
#include <string>   //Allows more than one charactered to be inputted
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare and initialize the variables
    string color1;//The first primary color the user inputs
    string color2;//The second primary color the user inputs
    
    //Problem that will be solved
    cout<<"Two primary colors are asked for to determine their mix. Any other ";
    cout<<"color will be rejected."<<endl;
    
    //Asks user to input the first primary color
    cout<<"Please enter the first primary color."<<endl;
    cin>>color1;
    
    //If else loop to determine if color entered is valid and then ask for the second color.
if (color1=="blue"||color1=="yellow"||color1=="red")
{
    cout<<"Please enter the second primary color."<<endl;
    cin>>color2;
}
else
{
    cout<<"Error: The proper colors were not entered"<<endl;
}    
 
    //if else loop to enter the second color and output results
if (color2=="blue"||color2=="yellow"||color2=="red")
{    
    if (color1=="blue"&&color2=="yellow")
   {
           cout<<"When you mix blue and yellow, you get green."<<endl;
   }
   else if (color1=="yellow"&&color2=="blue")
   {
           cout<<"When you mix yellow and blue, you get green."<<endl;
   }
   else if (color1=="red"&&color2=="yellow")
   {
           cout<<"When you mix red and yellow, you get orange."<<endl;
   }
   else if (color1=="yellow"&&color2=="red")
   {
           cout<<"When you mix yellow and red, you get orange."<<endl;
   }
   else if (color1=="blue"&&color2=="red")
   {
           cout<<"When you mix blue and red, you get purple."<<endl;
   }
   else if (color1=="red"&&color2=="blue")
   {
           cout<<"When you mix red and blue, you get purple."<<endl;
   }
}
else
{
    cout<<"Error: The proper colors were not entered"<<endl;
}    
    
    //Exit stage right
    return 0;
}
