/* 
    File:   main.cpp
    Author: Manuel Garcia
    Created on January 25, 2016, 08:35 AM
    Purpose:  Power Function
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
int pow(int,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Variables to be using in timing
    //Beginning and ending of the integer vs the double funtion
    unsigned int begi, endi, begd, endd, loop=100000000;
    
    //Declare and initialize variables
    int x;//Base of the problem
    int y;//Exponent of the problem
    int z;//The result of a^b
    
    //Input data
    cout<<"Input and b i.e. for a^b?"<<endl;
    cin>>x>>y;
    
    //Calculate or map inputs to outputs
    begi=static_cast<unsigned int>(time(0));
    for(int i=0;i<=loop;i++)z=pow(x,y);
    endi=static_cast<unsigned int>(time(0));
    
    //Output the results
    cout<<"The functions are called "<<loop<<" times"<<endl;
    cout<<"Our function results"<<x<<"^"<<y<<" = "<<z<<endl;
    cout<<"The total time taken = "<<endi-begi<<"seconds"<<endl;
    
    //Compare our function with the cmath library
    double dx=x;//Copy into a double
    double dy=y;//Copy into a double
    double dz;
    
    //Call math library function
    begd=static_cast<unsigned int>(time(0));
    for(int i=0;i<=loop;i++)dz=pow(dx,dy);
    endd=static_cast<unsigned int>(time(0));
    
    //Output the results
    cout<<"Library Function Results"<<dx<<"^"<<dy<<" = "<<dz<<endl;
    cout<<"The total time taken = "<<endd-begd<<"seconds"<<endl;
    cout<<"Same as z=exp(y*loge(x))-->"<<exp(dy*log(dx))<<endl;
    
    //Exit stage right
    return 0;
}
//000000001111111122222222333333334444444455555555666666667777777788888888999999
//345678901233456789012345678901234567890123456789012345678901234567890123456789
/*                               Power Functions                              */
/*****************************************************************************
//Inputs
// a->Integer Base*/
// b->Integer base
int pow(int a, int b){
    if(b<=0)return 1;
    if(b==1)return a;
    int abd2=pow(a,b/2);
    if(b%1)return abd2*abd2;//If even
    return abd2*abd2*a;     //Else odd
    
}