/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 11, 2016, 11:23 AM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //declare Variables
    int score;
    cout<<"Enter your score from the exam: "<<endl;
    cin>>score;
    if (score>=70)
        cout<<"You passed";
    else
        cout<<"you failed"<<endl;

    return 0;
}

