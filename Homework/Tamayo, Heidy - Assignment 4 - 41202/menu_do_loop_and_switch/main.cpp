/* Author: Heidy Tamayo
 * CCreated on January 23, 2016, 6:30 PM
 * Purpose: Assignment 4 Problem Set
 */
 
//System Libraries
#include <iostream> //I/O 
#include <iomanip>  //Formatting
#include <cmath>
#include <ctime>
using namespace std;
 
//User Libraries
 
//Global Constant
float CNVR=0.264179f;//Conversion of liters per gallon

//Function Prototypes
 
//Execution Begins Here
int main(int argc, char** argv) {
        //Declare and initialize variables
        unsigned short problem; //Problem Solution to display
        bool answer=true;//Exit program when false
    
       //do while loop to display problem and ask if user would like to repeat
        do{
            //Input problem to display
            cout<<"Assignment 4 Problem Set"<<endl;
            cout<<"Type 1 to Display Gaddis 8thEd Chap5 Probl1"<<endl;
            cout<<"Type 2 to Display Gaddis 8thEd Chap5 Probl3"<<endl;
            cout<<"Type 3 to Display Gaddis 8thEd Chap5 Probl4 "<<endl;
            cout<<"Type 4 to Display Gaddis 8thEd Chap5 Probl5 "<<endl;
            cout<<"Type 5 to Display Gaddis 8thEd Chap5 Probl7 "<<endl;
            cout<<"Type 6 to Display Gaddis 8thEd Chap5 Probl10 "<<endl;
            cout<<"Type 7 to Display Gaddis 8thEd Chap5 Probl11 "<<endl;
            cout<<"Type 8 to Display Gaddis 8thEd Chap5 Probl12 "<<endl;
            cout<<"Type 9 to Display Savitch 8thEd Chap4 Probl1 "<<endl;
            cout<<"Type 10 to Display Savitch 8thEd Chap4 Probl2"<<endl;
            cout<<"Anything else typed will exit the program"<<endl;
            cin>>problem;
            cout<<endl<<endl;
            //Solutions to all the problems
            switch (problem)
            {
                case 1:
                {
                    //Declare and initialize variables
                    unsigned int sum=0;//Summation of the positive integers
                    int integer;//Number the integer the user will input
                    unsigned int n;//increment of the function

                    //Output request to put the input of integers the user wishes 
                    cout<<"This program will tell you the sum of the number of the positive integer value.";
                    cout<<"Please enter the integer value."<<endl;
                    cin>>integer;

                    //If statement to ensure a positive integer is entered 
                    if (integer<0)
                    {
                        cout<<"Error: Please enter positive integers only."<<endl;
                    }
                    else
                    {
                        //For loop to calculate the sum of the integers entered/Output of results
                        for(n=1;n<=integer;n++)
                        {
                            sum=sum+n;
                            cout<<"The sum of the number 0 to "<<n<<" is "<<sum<<"."<<endl;
                        }
                    }
                    break;
                }
                case 2:
                {
                    //Declare and initialize variables
                    float watLev;//Water level of the ocean
                    unsigned int year;//integer of years

                    //Output of results
                    cout<<"Year   Water level risen (mm)"<<endl;

                    //for loop to calculate the water level rise for 25 years
                    for(year=0;year<=25;year++)
                    {
                        watLev=1.5*year;

                        //Output of results
                        cout<<year<<"          "<<watLev<<endl;
                    }
                    break;
                }
                case 3:
                {
                    //Declare and initialize variables
                    float calori;//amount of calories
                    unsigned int minute;//minute declaration

                    //for loop to calculate the amount of calories burned per 5 minutes
                    for(minute=0;minute<=30;minute+=5);
                    {
                        calori=minute*3.6;
                        cout<<"After "<<minute<<" minutes, you will have burned "<<calori<<" calories!"<<endl;
                    }
                    break;
                }
                case 4:
                {
                    //Declare and initialize variables
                    unsigned int member=2500;//Initial price of the membership
                    unsigned int year;//number of years that price will increase
                    float increas;//price increase

                    //For loop that calculates the rate for the country club membership of six years
                    for (year=1;year<=6;year++)
                    {
                        increas=member*0.04;
                        member=member+increas;

                        //Output of results
                        cout<<"In "<<year<<" year(s) the rate for the country club membership will be ";
                        cout<<"$"<<member<<"."<<endl;
                    }
                    break;
                }
                case 5:
                {
                    //The problem to solve
                    cout<<"Solution to Gaddis 8thEd Chap5 Prob7"<<endl;

                    //Declare variables
                    unsigned int salary=1;   //Salary starting at a penny
                    double totPay=salary;    //Total pay be summing the salary, only in this occasion do we use a double
                    unsigned int days;       //Number of days user wants to calculate

                    cout<<"Please enter the number of days you would like to have calculated."<<endl;
                    cin>>days;

                    //if else loop to not allow the user to input less than one day
                    if (days<1)
                    {
                        cout<<"Error:Please enter a correct number of days!"<<endl;
                    }
                    else
                    {
                        //Loop to generate the Salary Table and Total Paid
                        cout<<endl<<"      Display a Salary Table"<<endl<<endl;
                        cout<<"  Day        $Salary        $Total"<<endl;
                        cout<<setw(4)<<1<<setw(15)<<salary/100.0f<<setw(15)<<totPay/100.0f<<endl;
                        cout<<fixed<<setprecision(2)<<showpoint;
                        for(int day=2;day<=days;day++)
                        {
                            salary<<=1;//Or can also do salary*=2
                            totPay+=salary;
                            cout<<setw(4)<<day<<setw(15)<<salary/100.0f<<setw(15)<<totPay/100.0f<<endl;
                        }
                    }
                    break;
                }
                case 6:
                {
                    //Declare and initialize variables
                    unsigned int year;//Number of years
                    float rainfal;//rainfall in inches 
                    float sum=0;//summation of rainfall
                    float rainAve;//Average of rainfall
                    int months;//number of months calculated based on years


                    cout<<fixed<<setprecision(2);

                    //Output requesting year
                    cout<<"The average rainfall for a number of years will be calculated"<<endl<<"please enter ";
                    cout<<"the number of years you would like calculated."<<endl;
                    cin>>year;

                    //if else statement to ensure that user puts a year greater than one
                    if (year<1)
                    {
                        cout<<"Error:Please type a correct year."<<endl;
                    }
                    else
                    {
                        //conversion of year(s) to months
                        months=year*12;

                        //for loop that calculates the total rainfall and the average of it per month.
                        for(int n1=1;n1<=months;n1++)
                        {
                            cout<<"What was the rainfall for month "<<n1<<" in inches ?"<<endl;
                            cin>>rainfal;
                            if (rainfal<0)
                            {
                                cout<<"Error:Please type the correct number of inches of rainfall."<<endl;
                            }
                            else
                            {
                                sum=sum+rainfal;
                                rainAve=sum/n1;

                                //Output of results
                                cout<<"For the month "<<n1<<" the total rainfall was "<<sum<<" inch(es)."<<endl;
                                cout<<"The average rainfall for this month is "<<rainAve<<" inch(es)."<<endl<<endl;
                            }
                        }
                    }
                    break;
                }
                case 7:
                {
                    //Declare and initialize variables
                    int days;//Number of days
                    float percent;//Percentage rate
                    float increas;//Amount of population increase
                    unsigned int pop;//Initial population amount

                    //Output requesting the initial population amount
                    cout<<"This program will predict the size of a population of organisms based ";
                    cout<<"on the initial size, their percentage increase and days."<<endl;
                    cout<<"Please enter the initial amount of the population."<<endl;
                    cin>>pop;

                    //if loop to determine if the population is abiding by rules
                    if (pop<2)
                    {
                        cout<<"Error:Please enter a correct population amount."<<endl;
                    }
                    else
                    {
                        //Requesting second input, the percentage rate
                        cout<<"Please enter the population increase as a percentage."<<endl;
                        cin>>percent;

                        //if loop to not allow the user to enter a negative percentage rate
                        if (percent<0)
                        {
                            cout<<"Error: Please enter a correct percentage."<<endl;
                        }
                        else
                        {
                            //conversion of percentage rate
                            percent=percent/100;

                            //Output requesting the input of days
                            cout<<"Please enter the number of days."<<endl;
                            cin>>days;

                            //if loop to not allow user to enter less than one day
                            if (days<1)
                            {
                                cout<<"Error:Please enter the correct number of days."<<endl;
                            }
                            else
                            {
                                //For loop to calculate the population growth per day
                                for (int n=1;n<=days;n++)
                                {
                                    increas=pop*percent;
                                    pop=pop+increas;

                                    //Output of results
                                    cout<<"For day "<<n<<" the population will be "<<pop<<" organisms."<<endl;
                                }
                            }       
                        }
                    }
                    break;
                }
                case 8:
                {
                     //The problem to solve
                    cout<<"Solution to Gaddis 8thEd Chap5 Prob12"<<endl;
                    cout<<endl<<"Display a Temperature Table"<<endl<<endl;

                    //Declare variables
                    float slope=5.0f/9;//Slope of the line of temperature conversion c/f
                    char intrcpt=-32;   //Scaled 9/5 deg c
                    unsigned char c1=0,c2=100,f1=32,f2=212;//Data pts of freezing and boiling

                    //Loop to generate the degree Celsius and output the table
                    cout<<"Fahrenheit   Celsius   Celsius"<<endl;
                    cout<<fixed<<setprecision(2)<<showpoint;
                    for(int f=f1;f<=f2;f++){
                        float ceq=slope*(f+intrcpt);
                        float cintrp=c1+static_cast<float>(f-f1)/(f2-f1)*(c2-c1);
                        cout<<setw(10)<<f<<setw(10)<<ceq<<setw(10)<<cintrp<<endl;
                    }
                    break;
                }
                case 9:{
                    //Declare and initialize variables
                    float miles;//Number of miles traveled
                    float liters;//Number of liters consumed by vehicle
                    float gallon;//Number of gallons calculated based on the liters
                    char choice;//Choice to determine if the user would like to repeat the program

                    //Do while loop to repeat the program based on the user's choice
                    do
                    {
                        //Output requesting the input of liters and miles by the user
                        cout<<"This program will calculate the miles per gallon your car has based on ";
                        cout<<"the amount of liters and miles you input."<<endl;
                        cout<<"Please enter the amount of liters of gasoline consumed by your car."<<endl;
                        cin>>liters;
                        cout<<"Please enter the amount of miles you drove."<<endl;
                        cin>>miles;

                        //Conversion of liters to gallons
                        gallon=CNVR*liters;

                        //Output of results
                        cout<<"Your car has a mileage of "<<miles/gallon<<" miles per gallon!"<<endl;


                        cout<<endl<<"Would you like to calculate the mileage of another vehicle?"<<endl;
                        cout<<"Type y for yes or anything else to exit."<<endl;
                        cin>>choice;
                        cout<<endl<<endl;
                    }while(toupper(choice)=='Y');
                    break;
                }
                case 10:
                {
                    //Declare and initialize variables
                    float miles;//Number of miles traveled of the first car
                    float miles2;//Number of miles traveled of the second car
                    float liters;//Number of liters consumed by first vehicle
                    float liters2;//Number of liters consumed by the second vehicle
                    float gallon;//Number of gallons of the first vehicle calculated based on the liters
                    float gallon2;//Number of gallons of the second vehicle calculated based on the liters
                    char choice;//Choice to determine if the user would like to repeat the program

                    //Do while loop to repeat the program based on the user's choice
                    do
                    {
                        //Output requesting the input of liters and miles of the first car by the user
                        cout<<"This program will calculate the miles per gallon your car has based on ";
                        cout<<"the amount of liters and miles you input. It will also determine which ";
                        cout<<"vehicle is more fuel efficient based on the miles per gallon calculated."<<endl;
                        cout<<"Please enter the amount of liters of gasoline consumed by the first car."<<endl;
                        cin>>liters;
                        cout<<"Please enter the amount of miles you drove for this car."<<endl;
                        cin>>miles;

                        //Conversion of liters to gallons
                        gallon=CNVR*liters;

                        //Output requesting the input of liters and miles of the second car by the user
                        cout<<endl<<"Please enter the amount of liters of gasoline consumed by the second car."<<endl;
                        cin>>liters2;
                        cout<<"Please enter the amount of miles you drove for this car."<<endl;
                        cin>>miles2;

                        //Conversion of liters to gallons
                        gallon2=CNVR*liters2;

                        //Output of results
                        cout<<"Car 1 has a mileage of "<<miles/gallon<<" miles per gallon!"<<endl;
                        cout<<"Car 2 has a mileage of "<<miles2/gallon2<<" miles per gallon!"<<endl;

                        //if loop to determine which car is more fuel efficient and output of results
                        if ((miles/gallon)==(miles2/gallon2))
                        {
                            cout<<"Both cars have the same fuel efficiency!"<<endl;

                        }
                        else if ((miles/gallon)<(miles2/gallon2))
                        {
                            cout<<"car 2 is more fuel efficient!"<<endl;
                        }
                        else if ((miles/gallon)>(miles2/gallon2))
                        {
                            cout<<"Car 1 is more fuel efficient!"<<endl;
                        }

                        cout<<endl<<endl<<"Would you like to calculate the mileage of another 2 vehicles and compare their mileage?"<<endl;
                        cout<<"Type y for yes or anything else to exit."<<endl;
                        cin>>choice;
                        cout<<endl<<endl;
                    }while(toupper(choice)=='Y');

                    break;
                }
                default:
                {
                    cout<<"Exiting the Program"<<endl;
                    answer=false;
                }
            }
        }while(answer);

    //Exit stage right
    return 0;
}
