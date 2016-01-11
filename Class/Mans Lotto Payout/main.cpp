/* 
    File:   main.cpp
    Author: Manuel Garcia
    Created on January 4, 2016, 10:18 AM
    Purpose:  Check out IDE, Helloworld
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
    unsigned int jckPt;
    unsigned char lmpSump=62;
    unsigned int lmpSum;
    unsigned char stfedTx=52;
    unsigned int amtATX;
    unsigned char blnch=50;
    unsigned int manTtl;
    
    //Input data
    cout<<"What is the Jackpot amount?"<<endl;
    cin>>jckPt;
    
    //Calculate or map inputs to outputs
    jckPt*lmpSump=lmpSum
    lmpSum*stfedTx=amtATX
    amtATX*blnch=manTtl
    //Output the results
    cout<<"Lump Sum = "<<lmpSum<<endl;
    cout<<"Lump Sum After State/Fed Taz = "<<amtATX<<endl;
    cout<<"Lump Sum After Spousal Split = "<<manTtl<<endl;

    //Exit stage right
    return 0;
}