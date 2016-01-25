/* 
    File:   main.cpp
    Author: Manuel Garcia
    Created on January 25, 2016, 08:07 AM
    Purpose:  Menu
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
    //Declare and initialize variables
    unsigned short nSoltn;//Problem solution to display
    bool reDsply=true;    //Exit program when false
    
    
    //Menu to DIsplay Solution
    do{
            //Input data
        cout<<"Assignment 3 Problem Set"<<endl;
        cout<<"Type 1 to Display Savitch 8thEd Chap3 Prob10"<<endl;
        cout<<"Type 2 to Display Savitch 8thEd Chap3 Prob11"<<endl;
        cout<<"Type 3 to Display Savith 8thEd Chap3 Prob11 v2"<<endl;
        cout<<"Type anything else to exit"<<endl<<endl;
        cin>>nSoltn;
    //Solutions to all the problems
        switch(nSoltn){
            case 1:{
                cout<<endl<<"Solution to Savitch 8thEd Chap3 Prob10"<<endl<<endl;
                cout<<endl<<"The Fibonacci Sequence"<<endl<<endl;
                //Declare variables
                unsigned int fi,fim1, fim2;//Designation in the sequence
                unsigned short nTerms;     //Number of terms in the sequence
                unsigned short counter;    //Current position in the sequence
                //Initialize the sequence
                fim2=fim1=1;               //Start the sequence
                counter=2;                 //Initialize the counter          
                //Input the number of terms in the sequence
                cout<<"Input the number of terms in the sequence"<<endl;
                cin>>nTerms;
                //Output or Calculate the output required   
                if(nTerms==1){
                    cout<<"Term "<<""<<nTerms<<" in the sequence equals = "
                    <<fim2<<endl;
                }else if (nTerms==2){
                    cout<<"Term "<<nTerms<<" in the sequence equals = "
                    <<fim2<<endl; 
                }else{
                    do{
                        fi=fim1+fim2;
                        counter++;
                        fim2=fim1;
                        fim1=fi;
                    }while (nTerms<counter); 
                    cout<<"Term"<<nTerms<<" in the sequence = "
                    <<fim2<<endl<<endl;        
                }    
                break;
            }
            case 2:{
                //The problem to solve
                    cout<<"solution to Savith 8thEd Chap3 Prob11"<<endl;
                    cout<<"The finite sum for e^x"<<endl<<endl;
                //Declare and initialize variables for etox
                    const unsigned char nTerms=13;
                    float etox=1, x;//e^x
                //Input the value x
                    cout<<"Input x of e^x Computation"<<endl;
                    cin>>x;
                //Calculate e^x
                    for(int n=1;n<=nTerms;n++){ 
                //Declare and initialize variables
                    unsigned int factN=1;//Designation in the sequence

                //Calculate the factorial
                    for(int i=1;i<=n;i++){
                        factN*=i;
                    }
                //Calculate e^x with the above factorial
                    etox+=pow(x,n)/factN;
                    }            
                //Output the results
                    cout<<"The exact value of e^"<<x<<" = "<<exp(x)<<endl;
                    cout<<"The apporximate value of e^"<<x<<" = "<<etox<<endl;
                                cout<<endl<<"Solution to Problem 2"<<endl<<endl;
                
                break;
            }    
            case 3:{
                cout<<endl<<"Solution to Savith 8thEd Chap3 Prob11 v2"<<endl<<endl;
                //The problem to solve
                    cout<<"Solution to Savith 8thEd Chap3 Prob11"<<endl;
                    cout<<"The finite sum for e^x"<<endl<<endl;
                //Declare and initialize variables for etox
                    const unsigned char nTerms=13;
                    float tol=1e-6f, term=1, etox=1, x;//e^x
                    float nTerm=1;                     //Counter to determine how many terms
                //Input the value x
                    cout<<"Input x of e^x Computation"<<endl;
                    cin>>x;
                //Calculate e^x
                    do{
                        term*=x/nTerm++;
                        etox+=term;
                    }while(term>tol);

                //Output the results
                    cout<<"The exact value of e^"<<x<<" = "<<exp(x)<<endl;
                    cout<<"The number of terms it took to approximate e^x "<<x<<" ="<<nTerm<<endl;
                    cout<<"The approximate value of e^"<<x<<" = "<<etox<<endl;

                break;
            }
            default:{
                cout<<"Exiting the Program"<<endl;
                        reDsply=false;
            }    
        }
    }while(reDsply);
    
    //Exit stage right
    return 0;
}