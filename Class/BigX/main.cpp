/* 
    File:   main.cpp
    Author: Manuel Garcia
    Created on February 2, 2016, 10:32 PM
    Purpose: How big of an X do you want to print
 */

//System Libraries
#include <iostream> //I/O
#include <iomanip>  //Formatting
#include <cstdlib>  //Random Functions
#include <ctime>    //Setting the seed with time
using namespace std;

//User Libraries

//Global Constants
const int COL=50;

//Function prototypes
void fillAry (char [][COL],int);
void prntAry (char [][COL],int,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the seed
    srand(static_cast<unsigned int>(time(0)));

    //Declare variables
    const int ROW=50;
    char array[ROW][COL];
    
    //Fill the array with random 2 digit numbers
    int row_col=fillAry(array,ROW);
    
    //Print the array
    prntAry(array,ROW,row_col);
    
    //Exit stage right
    return 0;
}


//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Print Array
//Inputs:
//  a->List
// ROW->Number of rows in the array
//rc-> Number of rows 
//Outputs:
//  a->Printed List
//******************************************************************************
void prntAry(char a[][COL],int ROW, char rc){
    //Loop and fill the array with random numbers
    cout<<endl;
    for(int row=0;row<ROW;row++){
        for (int col=0;col<rc;col++)
        cout<<a[row]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Fill Array
//Inputs:
//  a->A 2 dimensional  array
// COL->Number of columns in the array 
// ROW->Number of rows in the array
//Outputs:
//  a->List initialized with random 2 digit numbers
//******************************************************************************
void fillAry(int a[][COL],int ROW){
    //Randomly choose how many rows and columns
    int row_col=rand()%7+2;//[2,9]
    //Fill the entire table with spaces
    for(int row=0;row<row_col;row++){
        for(int col=0;col<row_col;col++){
        a[row][col]=' ';    
        }
        
    }
    //Fill the back slash part of X
        for(int row=0;row<row_col;row++){
            for(int col=0;col<row_col;col++){
                if (row==col)a[row][col]=(row_col-row)+48;    
        }
        
    }
    
    //Fill the forward slash part of X
        for(int row=0;row<row_col;row++){
            for(int col=0;col<row_col;col++){
                if ((row+col)==row_col-1)a[row][col]=(row+1)-48;    
        }
        
    }
    //Send back how many cells are occupied
    return row_col;
}