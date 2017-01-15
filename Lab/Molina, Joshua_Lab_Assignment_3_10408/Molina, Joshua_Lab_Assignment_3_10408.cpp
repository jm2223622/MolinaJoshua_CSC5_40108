/* 
  File:   Molina, Joshua_Lab_Assignment_3_10408
  Author: Joshua Molina
  Created on January 13, 2017, 1:31 PM
  Purpose:  This program will output the percentage of the federal budget that 
 * the Military and NASA are funded yearly. 
 */

//System Libraries
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float fedBud;
    float military;
    float NASA;
    float NASATot, milTot;

    //Input values
    cout <<"The federal budget spending is $3.54 trillion dollars a year  \n";
    cout <<"in the U.S.  The military receives $580 Billion a year from\n";
    cout <<"that total.  NASA receives $18.5 Billion a year from that toal.\n";
    fedBud = 3.540000000000E13;
    military = 58000000010E9;
    NASA = 18.500000010E9;
    cout <<" \n";

    milTot = (fedBud / military) * 100;
    
    cout <<"The percentage that the military receives from that is";
    cout <<" " << milTot << " percent.";
            
    cout <<" ";
    cout <<" The percentage that NASA receives from that is";
    cout <<" " << NASA << " percent.";
    

    //Process by mapping inputs to outputs
    
    
    //Output values


    //Exit stage right!
    return 0;
}