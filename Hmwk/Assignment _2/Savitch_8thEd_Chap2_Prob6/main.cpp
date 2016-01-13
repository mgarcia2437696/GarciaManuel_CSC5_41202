/* 
    Author: Manuel Garcia
    Created on January 13, 2016, 010:18 AM
    Purpose:  Room Capacity
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants


//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    const unsigned char MAXCAP=35;//Max capacity of the room
    unsigned short stsUtil;       //Seats utilized
    char delta;                   //Difference between capacity and utilization
    
    //Input Data
    cout<<"How many seats are being utilized in BE200?"<<endl;
    cin>>stsUtil;
    
    
    //Calculate or map inputs to outputs
    delta=MAXCAP-stsUtil; 
    
    //Output the Results
    cout<<"Maximum Room Capacity of BE200 = "<<static_cast<int>(MAXCAP)
            <<"seats"<<endl;
    if(delta>=0){
        cout<<"Class will be hel";
        cout<<delta<<"available seats remain"<<endl;
        cout<<fixed<<setprecision(1)<<endl;
        cout<<"Percentage Capacity Utilized = "
                <<100.0f*stsUtil/MAXCAP<<"%"<<endl;
    }else{
        cout<<"Room capacity has been exceeded, ";
        cout<<-delta<<" students need to leave"<<endl;
    }    
    //Exit stage right
    return 0;
}