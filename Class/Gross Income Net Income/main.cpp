/* 
    Author: Manuel Garcia
    Created on January 13, 2016, 10:52 AM
    Purpose:  Gross Income to Net Income and Dependants 
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
//Declare and initialize variables;
int gIncome, depend, ndepend;

//Input Data
cout<<"What is your income? "<<endl;  
cin>>gIncome;
cout<<"How many dependant do you have?"<<endl;
cin>>ndepend;   

//Calculate
depend=(ndepend*750);
if (gIncome<=5000) {
    cout<<"This is your Net Income "<<gIncome+depend<<endl;
 }else if(gIncome<=10000)
     cout<<"This is your Net Income "<<gIncome-(gIncome*.1)+depend<<endl;
else if(gIncome<=15000)
     cout<<"This is your Net Income "<<gIncome-(gIncome*.15)+depend<<endl;
 else if(gIncome<=20000)
     cout<<"This is your Net Income "<<gIncome-(gIncome*.2)+depend<<endl;
else if(gIncome<=25000)
     cout<<"This is your Net Income "<<gIncome-(gIncome*.25)+depend<<endl;
 else if(gIncome<=30000)
     cout<<"This is your Net Income "<<gIncome-(gIncome*.30)+depend<<endl;
else if(gIncome<=35000)
     cout<<"This is your Net Income "<<gIncome-(gIncome*.35)+depend<<endl;
 else 
     cout<<"This is your Net Income "<<gIncome-(gIncome*.4)+depend<<endl;
//Output the Results
    
//Exit stage right
    return 0;
}