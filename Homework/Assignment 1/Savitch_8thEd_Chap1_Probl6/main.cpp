/* 
 * File:   main.cpp
 * Author: heidy
 * Created on January 10, 2016, 8:21 PM
 */

#include <iostream>
/*A)Leaving a space between the < and isostream produced the following error:
 * main.cpp:7:21: fatal error:  iostream: No such file or directory
 * This means the space is taken part of the file name.*/

using namespace std;

int main (int argc, char** argv) {
    
    //C)omitting the int from in from of the main didn't produce an error.//
    
    /*D)misspelling the word int in the main produced the following error: 
main.cpp:14:10: error: 'in' was not declared in this scope
 int main(in argc, char** argv) {
          ^
main.cpp:14:19: error: expected primary-expression before 'char'
 int main(in argc, char** argv) {
                   ^
main.cpp:14:30: error: expression list treated as compound expression in initializer [-fpermissive]
 int main(in argc, char** argv) {
                              ^
main.cpp:14:32: error: expected ',' or ';' before '{' token
 int main(in argc, char** argv) {
     This indicated that in was not declared in the program.*/
    
    /*E)not having one and two of the parentheses produced the following errors respectively:
     main.cpp:14:32: error: expected ')' before '{' token
    main.cpp:14:10: error: expected initializer before 'int'
     Based on configuration it is expected there are two parentheses when one is typed.*/
    
    int firInt, secInt, sum, product;
    cout<<"The sum of two integers will be solved."<<endl;
    
    /*B)By omitting one of the < in the count produced the following error:
     main.cpp:16:53: error: invalid operands of types 'const char [40]' and '<unresolved overloaded function type>' to binary 'operator<<'
     This is indicating that the function was not read due to the missing <*/
    
    cout<<"Please enter the value of the first integer."<<endl;
    cin>>firInt;
    cout<<"Please enter the value of the second integer."<<endl;
    cin>>secInt;
    sum=firInt+secInt;
    product=firInt*secInt;
    cout<<"The sum of the values entered is "<<sum<<"."<<endl;
    cout<<"The product of the values entered is "<<product<<"."<<endl;
    
/*F)In the case that cout was misspelled to cou the error "main.cpp:44:5: error: 'cou' was not declared in this scope" 
 * was displayed indicating cou was taken to be a variable. Misspelling cin to ci produced the same error.
 * Omitting the << in cout produced "main.cpp:44:9: error: expected ';' before string constant" indicating that command was not taken.
 * Omitting the { in the program produced "main.cpp:57:13: error: expected '}' at end of input" indicating the program didn't end. 
 */
    return 0;
}