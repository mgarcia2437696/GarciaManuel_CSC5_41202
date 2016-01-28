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
#include <iomanip> //Set Width
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    int xNumbr;
    
    //Input data
        
    cout<<"Enter a Number < 50"<<endl;
    cin>>xNumbr;
    
    //Output the results
    int i;
    for (int row=1;i<=xNumbr; row++){
        for (int colms=1;colms<=xNumbr;colms++){
            if(row==colms|| colms==(xNumbr+1)-row);
              cout<<xNumbr  
        }    
    }
    
 
//Output the results

//Exit stage right
return 0;
}