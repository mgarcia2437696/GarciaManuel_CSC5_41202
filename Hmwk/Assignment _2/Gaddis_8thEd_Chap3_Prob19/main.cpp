/* 
    Author: Manuel Garcia
    Created on January 13, 2016, 08:43 AM
    Purpose:  Calculate Loan
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants
unsigned short CNVPRC=12*100;

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short  loan;    //Amount you need loaned
    unsigned short  numPm;   //Number of payments in months
    unsigned short  iRate;   //Interest Rate on Loan
    float           Paymnt;  //Payment per Month
    float           interest;//Interest paid per month
    
    //Input Data
    cout<<"Car Loan Payment Calculator"<<endl;
    cout<<"What is the Loan size?"<<endl;
    cin>>loan;
    cout<<"How many months of payment?"<<endl;
    cin>>numPm;
    cout<<"What is the interest rate?"<<endl;
    cin>>iRate;
    
    //Calculate or map inputs to outputs
    float temp=static_cast<float>(pow(1+static_cast<float>(iRate)/CNVPRC,numPm));
    Paymnt=temp*temp*iRate/CNVPRC*loan/(temp-1);
    interest=numPm*Paymnt-loan;
    
    //Output the Results
    cout<<endl<<"Car Loan Payment Calculator Results"<<endl;
    cout<<"Loan Amount for Car          =$"<<loan<<endl;
    cout<<"Number of Monthly Payments   = "<<numPm<<endl;
    cout<<"Interest Rate                = "<<iRate<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Monthly Payment              = "<<Paymnt<<endl;
    cout<<"Interest Paid                = "<<interest<<endl;
 
    //Exit stage right
    return 0;
}