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
    int nPods, npPod, tPeas
    //Input data
    
    //Calculate or map inputs to outputs
    
    //Output the results
    cout<<"Press return after entering a number. \n";
    cout<<"Enter the number of pods:\n";
    
    cin>> nPods;
    
    cout<<"Enter the number of peas in a pod:\n";
    cin>> npPod;
    int tPeas=nPods*npPod;
    cout<<"If you have ";
    cout<<nPods;
    cout<<"pea pods\n";
    cout<<"and ";
    cout<<npPod;
    cout<<" peas in each pod, then\n";
    cout<<"you have ";
    cout<< tPeas;
    cout<<"peas in all the pods.\n";
    
    //Exit stage right
    return 0;
}