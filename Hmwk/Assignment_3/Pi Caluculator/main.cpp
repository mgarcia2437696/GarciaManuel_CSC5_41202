/* 
    File:   main.cpp
    Author: Manuel Garcia
    Created on January 19, 2016, 08:34 AM
    Purpose:  Calculate e^x
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {

//Declare and initialize variables for etox
    float apprxPI=1;//e^x
    unsigned int nTerms;//Counter to determine how many terms
    char sign=-1
//Input the number of terms in the sequence
    cout<<"Input the number of terms to approximate to "<<endl;
    cout<<"The approximation of Pi"<<endl<<endl;
//Calculate e^x
    for(nTerm=1;term>tol;term*=x/nTerm++,etox+=term);
    
//Output the results
    cout<<"The exact value of e^"<<x<<" = "<<exp(x)<<endl;
    cout<<"The number of terms it took to approximate e^x "<<x<<" ="<<nTerm<<endl;
    cout<<"The approximate value of e^"<<x<<" = "<<etox<<endl;
    
    return 0;
}