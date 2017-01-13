/* 
  File:   Molina, Joshua_Gaddis_8th_Chap3_Prob_4.cpp
  Author: Joshua Molina
  Created on January 12, 2017, 3:01 PM
  Purpose:  This program will determine the average amount of rainfall in 
 * inches for three months of the users choosing.
 */

//System Libraries
#include <iostream>
#include <cmath>
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
    //The variables used will be individual for month 1 - 3, There will also be
    //individual variables for the total inches of rain per month selected,
    //and then amount of inches of rain, average number of rain in inches.
    // 
    
string month1, month2, month3;

double total1, total2, total3;
double average;
    
    //Input of month and rain in inches.
cout << "Average amount inches of rain for 3 months. \n";
cout << "Enter the first month: ";
getline(cin, month1);
cout << "Enter the amount of rain in inches: ";
cin >> total1;
cin.ignore();
cout << "Enter the second month: ";
getline(cin, month2);
cout << "Enter the amount of rain in inches: ";
cin >> total2;
cin.ignore();
cout << "Enter the third month: ";
getline(cin, month3);
cout << "Enter the amount of rain in inches: ";
cin >> total3;
    
    //Calculations
average = (total1 + total2 + total3) / 3.0;
    
    
    //Output values.
cout << "The average rainfall for " << month1 << ", " << month2 << ", " "\n";
cout << "and " << month3 << " is " << average << " inches.\n";

    //Exit stage right!
    return 0;
}