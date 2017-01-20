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
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const float MIN_NUM = 0;//Sets the starting point for the output.
const float MAX_NUM = 20;//Sets the ending point for the output.
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float Cel,
          Fahr,
            num = MIN_NUM; 
    //Input values


    //Process by mapping inputs to outputs

    //Output values
    cout <<"Converting Celsius temperatures 0 - 20 to Fahrenheit. \n";
    cout <<"-------------------------------------------------------"<<endl;
    //The While Statement.
    while (num <=MAX_NUM)
    {
        cout<<num<<" Celsius is "<<32 + (1.8 * num)<<" Fahrenheit."<<endl;
        num ++;
        
    }

    //Exit stage right!
    return 0;
}