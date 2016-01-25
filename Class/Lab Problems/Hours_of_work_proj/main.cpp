
//System Libraries
#include <iostream>
using namespace std;
 
//User Libraries
 
//Global Constants
 
//Function prototypes
 
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables problem 1
    unsigned char ten=8000,nine=7200,eight=6400, seven=5600, six=4800, five=4000, four=3200, three=2400, two=1600, one=800, zero=0;//Grade Breakpoints
    unsigned short time;             //Score
    unsigned char mon1,mon2,mon3,mon4;//4 different constructs
 
    //Input data
    cout<<"Input the number of hours that will be worked"<<endl;
    cin>>time;
 
    //Output the score
    cout<<"The number of hours worked was "<<static_cast<int>(time)<<" hours."<<endl;
 
    //Determine the score with ternary
    mon1=(time>=ten?'8000':
         (time>=nine?'7200':
         (time>=eight?'6400':
         (time>=seven?'5600':
         (time>=six?'4800':
         (time>=five?'4000':
         (time>=four?'3200':
         (time>=three?'2400':
         (time>=two?'1600':
         (time>=one?'800':'0'))))))))));
 
    //Determine the score with dependent if's
   /* if     (score>=A) grd2='A';
    else if(score>=B) grd2='B';
    else if(score>=C) grd2='C';
    else if(score>=D) grd2='D';
    else              grd2='F';
 
    //Determine the score with independent if's
    if(score>=A)            grd3='A';
    if(score>=B && score<A) grd3='B';
    if(score>=C && score<B) grd3='C';
    if(score>=D && score<C) grd3='D';
    if(score<D)             grd3='F';
 
    //Determine the score with the switch
	switch(score>=A){
		case true:grd4='A';break;
		default:
		   switch(score>=B){
		      case true:grd4='B';break;
		      default:
		         switch(score>=C){
		            case true:grd4='C';break;
		            default:
		               switch(score>=D){
		                  case true:grd4='D';break;
		                  default:  grd4='F';
	                   }
	             }
	       }
	}*/
 
	//Output the result
	cout<<"The amount of money you will earn is = "<<mon1<<endl;
	/*cout<<"Your grade with Dependent if     = "<<grd2<<endl;
	cout<<"Your grade with Independent if   = "<<grd3<<endl;
    cout<<"Your grade with Switch/Case      = "<<grd4<<endl;*/
 
    //Exit stage right
    return 0;
}