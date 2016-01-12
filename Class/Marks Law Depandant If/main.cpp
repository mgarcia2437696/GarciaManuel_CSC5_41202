/* 
  File:   main.cpp
  Author: Daniel Desforges
 
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
    else if(score>=80)
        cout<<"You have earned a B"<<endl;
    else if(score>=70)
        cout<<"You have earned a C"<<endl;
    else if(score>=60)
        cout<<"You have earned a D"<<endl;
    else
        cout<<"You have earned a F"<<endl;
 
    //Output the results
 
    //Exit stage right
    return 0;
}