/* 
    File:   main.cpp
    Author: Manuel Garcia
    Created on January 19, 2016, 08:34 AM
    Purpose:  Fibonacci 
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//Declare variables
    unsigned int n, factN=1;//N and N!
              
//Input the number of terms in the sequence
    cout<<"Enter the number you would like to compute the factorial n! "<<endl;
    cout<<"The limit of the calculation is <=13"<<endl;
    cin>>n;
//Calculate the factorial
    for(int i=1;i<=n;i++){
        factN*=i;
    }
    
//Output the results
    cout<<n<<"! = "<<factN<<endl;
    
//Exit Stage Right
    return 0;
}