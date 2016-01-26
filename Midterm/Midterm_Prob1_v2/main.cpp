/* 
    File:   main.cpp
    Author: Manuel Garcia
    Created on January 26, 2016, 11:14 AM
    Purpose:  X Shape to # INput
 */

//System Libraries
#include <iostream>//I/O
#include <cstdlib> //srand and rand function
#include <ctime>   //time to set the random number seed
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    int xNumbr;
    
    //Input data
    cout<<"Enter an Odd Number Between 3-9"<<endl;
    cin>>xNumbr;
    
    //Output the results
    for (int i=1;i<=xNumbr; i++){
     cout <<9<< "9       1";
     cout<<"8     2";
     cout<<"7   3";
     cout<<"6 4";
     cout<<"7   3";
     cout<<"8     2";3
     cout <<9<< "9       1";
    }
    for (int i=1;i<=xNumbr; i++){
     cout <<7<< "9       1";
    }
    for (int i=1;i<=xNumbr; i++){
     cout <<5<< "9       1";
    }
    for (int i=1;i<=xNumbr; i++){
     cout <<3<< "9       1";
    }
 
//Output the results

//Exit stage right
return 0;
}