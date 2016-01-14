/* 
    File:   main.cpp
    Author: Manuel Garcia
    Created on January 14, 2016, 11:04 AM
    Purpose:  Computers can be wrong program
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float qwntity=0.75f; //A value to add repeatedly 
    float sum=0;        //the results of a repetitive addition 
    int nloops=10000000;//number of times to loop
    float answer;       //The computed answer
    //Input data
    for (int i=1;i<=nloops;i++){
        sum+=qwntity;
    }
    
    //Calculate or map inputs to outputs
    answer=nloops*qwntity;
    
    //Output the results
    cout<<"The Product Answer = "<<answer<<endl;
    cout<<"The Sum Answer     = "<<sum<<endl;
    cout<<"The Percent Error  = "<<(answer-sum)/answer*100<<"%"<<endl;
        

    //Exit stage right
    return 0;
}