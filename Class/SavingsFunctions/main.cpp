/* 
    File:   main.cpp
    Author: Manuel Garcia
    Created on January 26, 2016, 8:44 AM
    Purpose:  Variations on a Savings Theme
 */

//System Libraries
#include <iostream> //I/O
#include <iomanip>  //Formatting
#include <cmath>    //Power/Exponential/Log Funcitons
#include <cstdlib>  //Rand and Srand functions
#include <ctime>    //Time Functions
using namespace std;

//User Libraries

//Global Constants
const char PERCENT=100;//Convert (Decimal to Percentage) 

//Function prototypes
float save1(float, float, int);//power
float save2(float, float, int);//exponential
float save3(float, float, int);//for loop
float save4(float, float, int);//for loop banking with pennies
float save5(float, float, int);//Recursion, function calling itself
float save6(float, int, float=0.05f);//Defaulted save function


//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and initialize variables
    float pv=rand()%9001+1000;//[1000,10000] $'s
    float intRate=rand()%11+5;//[5,15]       %
    char nComp=rand()%16;//[0,15]            Years
    
    //Output the random inputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The Present Value   = $"<<pv<<endl;
    cout<<"The interest rate   =  "<<intRate<<"%"<<endl;
    cout<<"The number of years =  "<<static_cast<int>(nComp)<<endl;

    
    //Output the results
    cout<<"The savings using Power Function               = "
            <<save1(pv,intRate/PERCENT, nComp)<<endl;
    cout<<"The savings using Exponential Function         = "
            <<save2(pv,intRate/PERCENT, nComp)<<endl;  
    cout<<"The savings using For-Loop Function            = "
            <<save3(pv,intRate/PERCENT, nComp)<<endl;
    cout<<"The savings using Banking Version              = "
            <<save4(pv,intRate/PERCENT, nComp)<<endl;
    cout<<"The savings using Recursion                    = "
            <<save5(pv,intRate/PERCENT, nComp)<<endl;
    cout<<"The savings Exponential Defaulting Interest    = "
            <<save6(pv, nComp,intRate/PERCENT)<<endl;
    cout<<"The savings Exponential Defaulting Interest 5% = "
            <<save6(pv, nComp)<<endl;

    //Exit stage right
    return 0;
}
//000000001111111122222222333333334444444445555555566666666777777777888888889999
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*************************************SAVE1************************************/
//Inputs
//p->Present Value $'s
//i->Interest Rate %
//n->Number of Compounding Periods
//Output
//fv->Future Value $'s
//Note: Using the power function 
float save1(float p, float i, int n){
    return p*pow((1+i),n);
}

//000000001111111122222222333333334444444445555555566666666777777777888888889999
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*************************************SAVE2************************************/
//Inputs
//p->Present Value $'s
//i->Interest Rate %
//n->Number of Compounding Periods
//Output
//fv->Future Value $'s
//Note: Using the power function 
float save2(float p, float i, int n){
    return p*pow((1+i),n);
}

//000000001111111122222222333333334444444445555555566666666777777777888888889999
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*************************************SAVE3************************************/
//Inputs
//p->Present Value $'s
//i->Interest Rate %
//n->Number of Compounding Periods
//Output
//fv->Future Value $'s
//Note: Using the for loop function 
float save3(float p, float i, int n){
    int
    for(int years=1;years<n;years++){
    p*=(1+i);

return p;
}

//000000001111111122222222333333334444444445555555566666666777777777888888889999
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*************************************SAVE4************************************/
//Inputs
//p->Present Value $'s
//i->Interest Rate %
//n->Number of Compounding Periods
//Output
//fv->Future Value $'s
//Note: Using the for loop function 
float save4(float p, float i, int n){
    int ip=p*PERCENT;//Place the value in pennies
    for(int years=1;years<=n;years++){
        ip*=(1+i);
return p;
}

//000000001111111122222222333333334444444445555555566666666777777777888888889999
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*************************************SAVE5************************************/
//Inputs
//p->Present Value $'s
//i->Interest Rate %
//n->Number of Compounding Periods
//Output
//fv->Future Value $'s
//Note: Using the recursion function 
float save5(float p, float i, int n){
    if(n<=0)return p;
    return save5(p,i,n-1)*(1+i);
}


//000000001111111122222222333333334444444445555555566666666777777777888888889999
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*************************************SAVE5************************************/
//Inputs
//p->Present Value $'s
//i->Interest Rate %
//n->Number of Compounding Periods
//Output
//fv->Future Value $'s
//Note: Using the recursion function 
float save6(float p, float i, int n){
    if(n<=0)return p;
    return save5(p,i,n-1)*(1+i);
}