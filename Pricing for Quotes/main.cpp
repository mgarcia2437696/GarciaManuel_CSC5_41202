/* 
    File:   main.cpp
    Author: Manuel Garcia
    Created on January 20, 2016, 8:55 PM
    Purpose:  Quoting Prices Calculator
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Variables
    float quasqft, tesqft, ohsqft, tqsqft, oinsqft;   //Integers for Sq. Ft.
    float pqisqft, ptesqft, pohsqft, ptqsqft, poisqft;//Integers for Price Sq. Ft.
    int stlngth, pstfoot;                             //Integers for the steel
    int addcost;                                      //Additional costs
    float total;                                        //Total cost for the Material
    
    //Input the sq. feet
    cout<<"1/4 In. Square feet?"<<endl;
    cin>>quasqft;
    cout<<"3/8 In. Square feet?"<<endl;
    cin>>tesqft;
    cout<<"1/2 In. Square feet?"<<endl;
    cin>>ohsqft;
    cout<<"3/4 In. Square feet?"<<endl;
    cin>>tqsqft;
    cout<<"1 In. Square feet?"<<endl;
    cin>>oinsqft;
    
    //Input the Price for Square feet
    cout<<"1/4 In. Price Sq Ft"<<endl;
    cin>>pqisqft;
    cout<<"3/8 In. Price Sq Ft"<<endl;
    cin>>ptesqft;
    cout<<"1/2 In. Price Sq Ft"<<endl;
    cin>>pohsqft;
    cout<<"3/4 In. Price Sq Ft"<<endl;
    cin>>ptqsqft;
    cout<<"1 In. Price Sq Ft"<<endl;
    cin>>poisqft;
    
    //Input the Price for the Steel
    cout<<"Steel Price per Foot"<<endl;
    cin>>pstfoot;
    cout<<"Steel Length in Feet"<<endl;
    cin>>stlngth;
    
    //Input the Additional Prices
    cout<<"What are the Additional Costs"<<endl;
    cin>>addcost;
    
    //Calculate the Inputs
     (quasqft*pqisqft)
    +(tesqft*ptesqft)
    +(ohsqft+pohsqft)
    +(tqsqft*ptqsqft)
    +(oinsqft*poisqft)
    +(pstfoot*stlngth)
    +(addcost)
    =total;
    
    //Output the results
    cout<<"The total would be $ "<<total<<endl;
    
    //Exit stage right
    return 0;
}