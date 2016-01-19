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
    //The Problem 
    cout<<endl<<"Solution to Savitch 8thEd Chap3 Prob10"<<endl;
    cout<<endl<<"The Fibonacci Sequence"<<endl<<endl;
    //Declare variables
    unsigned int fi,fim1, fim2;//Designation in the sequence
    unsigned short nTerms;     //Number of terms in the sequence
    unsigned short counter;    //Current position in the sequence
    //Initialize the sequence
    fim2=fim1=1;               //Start the sequence
    counter=2;                 //Initialize the counter          
    //Input the number of terms in the sequence
    cout<<"Input the number of terms in the sequence"<<endl;
    cin>>nTerms;
    //Output or Calculate the output required   
    if(nTerms==1){
        cout<<"Term "<<nTerms<<" in the sequence equals = "
        <<fim2<<endl;
    }else if (nTerms==2){
        cout<<"Term "<<nTerms<<" in the sequence equals = "
        <<fim2<<endl; 
    }else{
        do{
            fi=fim1+fim2;
            counter++;
            fim2=fim1;
            fim1=fi;
        }while (nTerms<counter); 
        cout<<"Term"<<nTerms<<" in the sequence = "
        <<fim2<<endl<<endl;
    }
    return 0;
}