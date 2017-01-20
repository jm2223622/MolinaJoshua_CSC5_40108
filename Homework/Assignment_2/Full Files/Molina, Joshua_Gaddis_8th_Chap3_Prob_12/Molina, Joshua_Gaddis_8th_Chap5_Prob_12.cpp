/* 
  File:   Molina, Joshua_Gaddis_8th_Chap5_Prob_12.cpp
  Author: Joshua Molina
  Created on January 10, 2017, 10:51 PM
  Purpose:  12. Celsius to Fahrenheit Table
 * In programming Challenge 10 of Chapter 3 you were asked to write a program 
 * that converts a Celsius temperature to Fahrenheit.  Modify that program so
 * it uses a loop to display a table of the Celsius temperature 0-20, and their
 * Fahrenheit equivalents.
 */

//System Libraries
#include <iostream>
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
    float Cel,
          Fahr;   
    //Input values
    cout <<"Converting Celsius temperatures to Fahrenheit. \n";
    cout <<"Enter the temperature in Celsius ";
    cin >> Cel;

    //Process by mapping inputs to outputs
    Fahr =  32 + (1.8 * Cel);
    
    //Output values
cout <<"The new temperature is " << Fahr << endl;
    

    //Exit stage right!
    return 0;
}