/* 
  File:   Molina, Joshua_Gaddis_8th_Chap4_Prob_2.cpp
  Author: Joshua Molina
  Created on January 14, 2017, 8:27 PM
  Purpose:  This program will ask the user to input a number between 1 - 10 
 *          and output the roman numeral for that number.  Every other number
 *          will not be accepted.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) 
{
    //Declare Variables
    int choice;
    //Input values
    cout <<"Enter a number between 1 - 10: ";
    cin >> choice;
    switch (choice)
    //Process by mapping inputs to outputs
    {
    case 1: cout << "Roman Numeral I.\n";
    break;
    case 2: cout << "Roman Numeral II.\n";
    break;
    case 3: cout << "Roman Numeral III.\n";
    break;
    case 4: cout << "Roman Numeral IV.\n";
    break;
    case 5: cout << "Roman Numeral V.\n";
    break;
    case 6: cout << "Roman Numeral VI.\n";
    break;
    case 7: cout << "Roman Numeral VII.\n";
    break;
    case 8: cout << "Roman Numeral VIII.\n";
    break;
    case 9: cout << "Roman Numeral IX.\n";
    break;
    case 10: cout << "Roman Numeral X.\n";
    break;
    default: cout <<"Incorrect number! Please retry.";
    
 
   
    }
    //Output values

    //Exit stage right!
    return 0;
}