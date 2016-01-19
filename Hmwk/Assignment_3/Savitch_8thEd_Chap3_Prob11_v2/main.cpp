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
//The problem to solve
    cout<<"solution to Savith 8thEd Chap3 Prob11"<<endl;
    cout<<"The finite sum for e^x"<<endl<<endl;
//Declare and initialize variables for etox
    const unsigned char nTerms=13;
    float etox=1, x;//e^x
//Input the value x
    cout<<"Input x of e^x Computation"<<endl;
    cin>>x;
//Calculate e^x
    for(int n=1;n<=nTerms;n++){ 
        //Declare and initialize variables
            unsigned int factN=1;//Designation in the sequence

        //Calculate the factorial
            for(int i=1;i<=n;i++){
                factN*=i;
            }
        //Calculate e^x witht eh above factorial
            etox+=pow(x,n)/factN;
    }            
//Output the results
    cout<<n<<"The exact value of e^"<<x<<" = "<<exp(x)<<endl;
    cout<<n<<"The apporximate value of e^"<<x<<" = "<<etox<<endl;
    
    return 0;
}