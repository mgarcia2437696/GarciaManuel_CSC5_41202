/* 
  File:   main.cpp
  Author: Manuel Garcia
 
  Created on January 4, 2016, 10:18 AM
  Purpose: Check out IDE
 */
 
//System Libraries
#include <iostream>
 
using namespace std;
 
//User Libraries
 
//Global Constants
 
//Function Prototypes
 
//Execution Begins here
int main(int argc, char** argv) {
    // Declare and initialize variables
    unsigned int score;
    //Input data
    cout << "Whats the score?" <<endl;
    cin >> score;
    //Calculate or map inputs to outputs
    if(score>=90){
        cout<<"You have earned an A"<<endl;
    }
    if(score>=80&&score<90){
        cout<<"You have earned a B"<<endl;
    }
    if(score>=70&&score<80){
        cout<<"You have earned a C"<<endl;
    }
    if(score>=60&&score<70){
        cout<<"You have earned a D"<<endl;
    }
    if(score>=50&&score<60){
        cout<<"You have earned a F"<<endl;
    }
    //Output the results
 
    //Exit stage right
    return 0;
}