/* 
    File:   main.cpp
    Author: Manuel Garcia
    Created on January 20, 2016, 8:55 PM
    Purpose:  Play Paper,-Rock-Scissors with the computer
 */

//System Libraries
#include <iostream> //I/O
#include <cstdlib>  //Rand Function
#include <ctime>    //TIme to set the random number seed
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //The problem to solve
    cout<<endl<<"Solutiont to Savitch 7thEd Chap3 Problem 1"<<endl<<endl;
    cout<<"The Rock-Paper-Scissor Game"<<endl<<endl;
    
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    char qwstion;   //Questions, does the player want to keep playing
    //Declare and initialize variables for apprxPI
    char computr;   //The computers play
    char player;    //The payers move   
    
    //Input the players turn
    do{
        cout<<"What is your move P, R, S ?"<<endl;
        cin>>player;
        player=toupper(player);
    }while(!(player=='P'||player=='R'||player=='S'));
    
        //Computer Generated Play
    do{
        computr=rand()%4+80;
    }while(computr=='Q');
    
    
    //Output the moves by the computer ad player
    cout<<"The Computer Played "<<computr<<endl;
    cout<<"The Players Move    "<<player<<endl;   
    
    //Determine the Results
    if(computr==player){
        cout<<"The result is a tie"<<endl;
    }else if (player=='P'&&computr=='R'){
        cout<<"You Win!"<<endl;
    }else if (player=='R'&&computr=='S'){
        cout<<"You Win!"<<endl;
    }else if (player=='S'&&computr=='P'){
        cout<<"You Win!"<<endl;
    }else{
        cout<<"You Lost!!"<<endl;
    }
    
    //Keep playing?
    cout<<"Do you want to continue playing?"<<endl;
    cin>>qwstion;
    }while(toupper(qwstion)=='Y')
        
    //Exit stage right
    return 0;
}