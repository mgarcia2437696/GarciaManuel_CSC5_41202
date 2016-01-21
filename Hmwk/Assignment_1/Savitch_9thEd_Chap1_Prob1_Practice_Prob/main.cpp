/* 
    Author: Manuel Garcia
    Created on January 9, 2016, 4:18 PM
    Purpose:  Peas in all pods
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
    unsigned int nPods, npPod, tPeas;
    //Input data
    
    //Calculate or map inputs to outputs
    
    //Output the results
    cout<<"Press return after entering a number."<<endl;
    cout<<"Enter the number of pods:"<<endl;
    
    cin>> nPods;
    
    cout<<"Enter the number of peas in a pod:"<<endl;
    cin>> npPod;
    tPeas=nPods*npPod;
    cout<<"If you have ";
    cout<<nPods;
    cout<<" pea pods"<<endl;
    cout<<"and ";
    cout<<npPod;
    cout<<" peas in each pod, then"<<endl;
    cout<<"you have ";
    cout<< tPeas;
    cout<<" peas in all the pods."<<endl;
    
    //Exit stage right
    return 0;
}