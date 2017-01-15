/* 
  File:   Molina, Joshua_Gaddis_8th_Chap3_Prob_2.cpp
  Author: Joshua Molina
  Created on January 10, 2017, 9:51 PM
  Purpose:  This program will generate the total income for ticket sales for 
 * the softball game at the stadium.
 
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Variables used will be Class A, Class B, Class C, and a Total for the 
    //generated income.
    double classA, soldA, classB, soldB, classC, soldC, totalInc;
    
    classA = 15.00, classB = 12.00, classC = 9.00;
    
    cout <<"Income Generator of ticket sales. \n";
    cout <<"Enter how many Class A tickets were sold ";
    cin >> soldA;
    cout <<"Enter how many Class B tickets were sold ";
    cin >> soldB;
    cout <<"Enter how many Class C tickets were sold ";
    cin >> soldC;
    
    //The Math
    totalInc = (soldC * classC) + (soldB * classB) + (soldA * classA);
            
    //Process by mapping inputs to outputs
    
    //Output values
    cout <<"Total Generated Income: $" << totalInc << endl;

    //Exit stage right!
    return 0;
}