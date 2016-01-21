/* 
    File:   main.cpp
    Author: Manuel Garcia
    Created on January 21, 2016, 11:08 AM
    Purpose:  Fun look at savings and rule of 72
 */

//System Libraries
#include <iostream> //I/O
#include <iomanip>  //Formatting
#include <cstdlib>  //Random Number 
using namespace std;
//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Problem to solve
    cout<<endl<<"Fun look at savings and rule of 72"<<endl;
    cout<<endl<<"califronia.municipalbonds.com/bonds.recent/"<<endl<<endl;
  
    //Set the random number seed
    srand(static_cast<unsigned short>(time(0)));
    
    //Declare and Initialize variables
    float balance=100;          //Initial balance $'s
    float intRate=0.05f;        //Interest rate / year
    float rule72=0.72f/intRate; //Rule of 72, Future Value = 2 * present value
    
    //Output the table heading
    cout<<"The interest rate = "<<intRate*100<<"%"<<endl;
    cout<<"At this interest Principle should double every";
    cout<<rule72<<"Years"<<endl;
    cout<<"YEAR      YEAR      BALANCE      INTEREST EARNED"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"0         2016"<<setw(13)<<balance<<setw(21)<<balance*intRate<<endl;
    
    //Calculate the Savings
    balance*=(1+intRate);
    for(int y=1,year=2017;y<=50;y++,year++){
        cout<<y<<" "<<setw(12)<<year<<setw(13)<<balance<<setw(21)<<balance*intRate<<endl;
        balance*=(1+intRate);
    }
    
    //Exit stage right
    return 0;
}