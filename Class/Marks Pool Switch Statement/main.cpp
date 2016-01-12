/* 
    Author: Manuel Garcia
    Created on January 12, 2016, 4:18 PM
    Purpose:  Switch Statement Pool Breakers
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
   int hour, pay;
    //Input data
   cout << "How many hours do you have?" <<endl;
    cin >> hour;
    //Calculate or map inputs to outputs
    if(hour<=5){
        pay=5*800;  
    } 
    else if(hour>5)
       pay=hour*800;
cout<<"This is how much you will pay $"<<pay<<endl;
 
    //Output the results
 
    //Exit stage right
    return 0;
}
